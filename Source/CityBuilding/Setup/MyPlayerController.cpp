// CHECK CHANGES

#include "MyPlayerController.h"

#include "CameraPawnRTS.h"
#include "CityBuilding/Buildings/Buildings.h"
#include "CityBuilding/Buildings/BuildingManager.h"
#include "CityBuilding/Buildings/BuildingRoad.h"
#include "CityBuilding/Components/ClickHighlightComp.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Grid/GridManager.h"
#include "CityBuilding/PostProcVol.h"
#include "CityBuilding/UI/MyUserWidget.h"

#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Engine/DataTable.h"
#include "Engine/PostProcessVolume.h"
#include "Kismet/GameplayStatics.h"

// Macros to call debug text. Syntax: Colour("My text)
#define Yellow(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT(x)));}
#define Yellow0(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, TEXT(x));}
#define Red(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT(x));}
#define Blue(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT(x));}
#define Silver(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Silver, TEXT(x));}


AMyPlayerController::AMyPlayerController()
{
	// Set this pawn to tick every frame (and can turn it off when needed)
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent); //Protect the input component if not associated

	// Pawn movement
	InputComponent->BindAction("SpawnBuilding", IE_Pressed, this, &AMyPlayerController::ToggleSpawnBuilding);
	InputComponent->BindAction("MouseLeftClick", IE_Pressed, this, &AMyPlayerController::CallMouseLeftClick);
	InputComponent->BindAction("MouseRightClick", IE_Pressed, this, &AMyPlayerController::CallMouseRightClick);
}


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	/* REFERENCES */
	// Camera Pawn
	CameraPawnRef = Cast<ACameraPawnRTS>(GetPawn());
	if (CameraPawnRef)
	{
		CameraMovementRef = CameraPawnRef->PawnMovementComponent;
	}
	// Grid Manager Actor
	GridManagerRef = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
	if (!GridManagerRef)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("NO GRID MANAGER ACTOR FOUND. PLACE ONE IN THE LEVEL!")));

	}
	// Building Manager Actor
	BuildingManagerRef = Cast<ABuildingManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ABuildingManager::StaticClass()));
	if (!BuildingManagerRef)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("NO BUILDING MANAGER ACTOR FOUND. PLACE ONE IN THE LEVEL!")));
	}
	// Building ref
	if (!BuildingsClassRef)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("NO BuildingsClassRef. Set it up in the Player Controller!")));
	}
	// Postprocessor volume ref
	PostProcessVolRef = Cast<APostProcVol>(UGameplayStatics::GetActorOfClass(GetWorld(), APostProcVol::StaticClass()));
	if (!PostProcessVolRef)
	{
		Red("POST PROCESS VOLUME NOT FOUND!");
	}
	
	// Building types references
	BuildingRoadRef = Cast<ABuildingRoad>(UGameplayStatics::GetActorOfClass(GetWorld(), ABuildingRoad::StaticClass()));
	if (!BuildingRoadRef)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("NO BuildingRoadRef")));
	}

	/****   WIDGETS   *****/
	if (IsValid(BP_BuildingWidgetRef))
	{
		// MAIN WIDGET
		BuildingWidget = CreateWidget<UMyUserWidget>(this, BP_BuildingWidgetRef);
		BuildingWidget->AddToViewport();
		//BuildingWidget->SetVisibility(ESlateVisibility::Hidden);

	}

	// World settings
	MyWorldSetting = GetWorldSettings();

}


/////////////////////////////////////////////////
//////                 TICK
/////////////////////////////////////////////////
void AMyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/* DEBUG SECTION */
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::White, FString::Printf(TEXT("bBuildingBeingSpawned: %s"),
		bBuildingBeingSpawned ? TEXT("true") : TEXT("false")));
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("Building In world: %d"),
		BuildingsInWorldArray.Num()));
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("Building Being Selected: %d"),
		ArrayBuildingSelected.Num()));
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, FString::Printf(TEXT("North: %s, South: %s, East: %s, West: %s"), 
		*BuildingManagerRef->OccupyingTypeNorth, *BuildingManagerRef->OccupyingTypeSouth,
		*BuildingManagerRef->OccupyingTypeEast, *BuildingManagerRef->OccupyingTypeWest));


	/***** LOGIC ******/
	if (bBuildingBeingSpawned == true)
	{
		// ALT#1
		//UpdateBuildingPlacement();
		// ALT#2 (from Youtube Tuto 'The Game Dev Channel')
		UpdateBuildingPosition_TGDC();
	}
}


/* METHODS */
void AMyPlayerController::CallMouseLeftClick()
{
	if (bBuildingBeingSpawned == true && bCheckIfBuildingIsPlaceable == true)
	{
		//PlaceBuildingInWorld();
		PlaceBuildingInWorld_TGDC();
	}
}

void AMyPlayerController::CallMouseRightClick()
{
	if (bBuildingBeingSpawned == true)
	{
		BuildingSpawned->Destroy();
		bBuildingBeingSpawned = false;
		bBuildingIsSpawnable = true;
	}
	// If some buildings are selected, unselect all of them
	else if (ArrayBuildingSelected.Num() > 0)
	{
		for (int i = 0; i < ArrayBuildingSelected.Num(); i++)
		{
			// Change material to default
			ArrayBuildingSelected[i]->Mesh->SetMaterial(0, ArrayBuildingSelected[i]->M_Default);
			// False the bIsClicked that check whether the building is Selected or not
			ArrayBuildingSelected[i]->ClickHighlightComp->bBuildingIsSelected = false;
		}
		// Empty the array
		ArrayBuildingSelected.Empty();
	}
}

///////////////////////////////////////////////////////
////////////    BUILDING PLACEMENT    /////////////////
///////////////////////////////////////////////////////

// Called from SpaceBar to toggle UpdateBuildingPlacement() from Tick
void AMyPlayerController::ToggleSpawnBuilding()
{
	if (bBuildingIsSpawnable == true) { SpawnBuilding(); }
}


// Spawn building 
void AMyPlayerController::SpawnBuilding()
{
	// Prevents building to be spawned
	bBuildingIsSpawnable = false;

	// Mouse location in the world
	DeprojectMousePositionToWorld(MouseLocation, MouseDirection);

	TraceStart = MouseLocation;
	TraceEnd = MouseLocation + (MouseDirection * 10000);
	QueryParamsBuilding.AddIgnoredActor(this); // Ignores this class


	bool bSuccessHitBuilding = GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_GameTraceChannel2, QueryParamsBuilding);
	if (bSuccessHitBuilding)
	{
		/* Reference tothe button clicked */
		//if (BuildingWidget->ButtonClicked == BuildingWidget->ButtonRoad)
		//{
		//	if (BuildingManagerRef->BP_BuildingRoad)
		//	{
		//		BuildingSpawned = GetWorld()->SpawnActor<ABuildings>(BuildingManagerRef->BP_BuildingRoad, HitResult.Location, FRotator(0, 0, 0));
		//	}
		//}
		/* Reference to the building type from the enum */
		if (BuildingWidget->eBuildingTypeToSpawn == BuildingTypes::Road)
		{
			if (BuildingManagerRef->BP_BuildingRoad)
			{
				BuildingSpawned = GetWorld()->SpawnActor<ABuildings>(BuildingManagerRef->BP_BuildingRoad, HitResult.Location, FRotator(0, 0, 0));
			}
		}
		else if (BuildingWidget->eBuildingTypeToSpawn == BuildingTypes::Rail)
		{
			if (BuildingManagerRef->BP_BuildingRail)
			{
				BuildingSpawned = GetWorld()->SpawnActor<ABuildings>(BuildingManagerRef->BP_BuildingRail, HitResult.Location, FRotator(0, 0, 0));
			}
		}
		else if (BuildingWidget->eBuildingTypeToSpawn == BuildingTypes::House)
		{
			if (BuildingManagerRef->BP_BuildingHouse)
			{
				BuildingSpawned = GetWorld()->SpawnActor<ABuildings>(BuildingManagerRef->BP_BuildingHouse, HitResult.Location, FRotator(0, 0, 0));
			}
		}
		else if (BuildingWidget->eBuildingTypeToSpawn == BuildingTypes::Building)
		{
			if (BuildingManagerRef->BP_BuildingBuilding)
			{
				BuildingSpawned = GetWorld()->SpawnActor<ABuildings>(BuildingManagerRef->BP_BuildingBuilding, HitResult.Location, FRotator(0, 0, 0));
			}
		}
		else if (BuildingWidget->eBuildingTypeToSpawn == BuildingTypes::Windmill)
		{
			if (BuildingManagerRef->BP_BuildingWindmill)
			{
				BuildingSpawned = GetWorld()->SpawnActor<ABuildings>(BuildingManagerRef->BP_BuildingWindmill, HitResult.Location, FRotator(0, 0, 0));
			}
		}

		bBuildingBeingSpawned = true; // Allows UpdateBuildingPlacement in Tick()
	}
}


/* SNAP THE BUILDING TO THE NEAREST GRID LOCATION
My Alternative of UpdateBuildingPosition() using the location of the nearest grid cell */
// Called on Tick() if bBuildingBeingSpawned == true
//void AMyPlayerController::UpdateBuildingPosition()
//{
//	/* MOUSE CURSOR */
//	// Mouse location in the world
//	DeprojectMousePositionToWorld(MouseLocation, MouseDirection);
//	// Mouse ray trace
//	TraceStart = MouseLocation;
//	TraceEnd = MouseLocation + (MouseDirection * 10000);
//	// ECC_GameTraceChannel2 corresponds to the 'MyLandscape' channel
//	bool bHitSuccess = GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_GameTraceChannel2, QueryParamsBuilding);
//	if (bHitSuccess)
//	{
//		int32 CellSize = GridManagerRef->CellSize;
//		int32 MouseLocationX = HitResult.Location.X;
//		int32 MouseLocationY = HitResult.Location.Y;
//
//		// ALT#1: GridActor placed at the center of each square (DOES NOT WORK! Probabably need to change Modulo)
//		/*int32 ModuloMouseX = MouseLocationX % (CellSize - (CellSize / 2));
//		int32 ModuloMouseY = MouseLocationY % (CellSize - (CellSize / 2));
//		RoundX = (FGenericPlatformMath::RoundToInt(HitResult.Location.X / CellSize ) * CellSize - (CellSize / 2));
//		RoundY = (FGenericPlatformMath::RoundToInt(HitResult.Location.Y / CellSize ) * CellSize - (CellSize / 2));*/
//
//		// ALT#2: GridActor placed at the corner of each square (check also GridManager)
//		int32 ModuloMouseX = MouseLocationX % CellSize;
//		int32 ModuloMouseY = MouseLocationY % CellSize;
//		RoundX = (FGenericPlatformMath::RoundToInt(HitResult.Location.X / CellSize) * CellSize);
//		RoundY = (FGenericPlatformMath::RoundToInt(HitResult.Location.Y / CellSize) * CellSize);
//
//		// Update the building position
//		BuildingSpawned->Mesh->SetSimulatePhysics(false);
//		BuildingSpawned->SetActorLocation(FVector(RoundX, RoundY, 150));
//
//		// Change colour neighbour GridActors
//		//GridManagerRef->ActualiseGridCellNeighbours();
//	}
//}


/* SNAP THE BUILDING TO THE NEAREST GRID CELL
From the Youtube tutorial TheGameDevelopperChannel
 Called on Tick() if bBuildingBeingSpawned == true */
void AMyPlayerController::UpdateBuildingPosition_TGDC()
{
	// Mouse location in the world
	DeprojectMousePositionToWorld(MouseLocation, MouseDirection);
	// Mouse ray trace
	TraceStart = MouseLocation;
	TraceEnd = MouseLocation + (MouseDirection * 10000);
	// ECC_GameTraceChannel2 corresponds to the 'MyLandscape' channel
	bool bHitSuccess = GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_GameTraceChannel2, QueryParamsBuilding);
	if (bHitSuccess)
	{
		MouseHit = HitResult.Location;
		GridManagerRef->GetClosestGridLocation(MouseHit);

		// Update the building position & remove physics so that the building does not fall due to gravity
		BuildingSpawned->SetActorLocation(GridManagerRef->ClosestPosition + FVector(0.f, 0.f, 150.f));
		BuildingSpawned->Mesh->SetSimulatePhysics(false);

		// Call the function to define what AActorGridCell is the closest
		FVector BuildingSpawnedLocationLocal = BuildingSpawned->GetActorLocation();
		ClosestGridCellLocal = GridManagerRef->GetClosestGridCell(BuildingSpawnedLocationLocal); // using the location of the actor placed

		// Check if the gridcell is occupied to place the building or not
		CallCheckIfBuildingIsPlaceable(ClosestGridCellLocal);
	}
}

// Call CheckIfBuildingIsPlaceable from the BuildingManager class
void AMyPlayerController::CallCheckIfBuildingIsPlaceable(AActorGridCell* ClosestGridCellDuringSpawning)
{
	BuildingManagerRef->CheckIfBuildingIsPlaceable(ClosestGridCellDuringSpawning, BuildingSpawned);
}


/* Place the a building in the world 
My version of PlaceBuildingInWorld() */
//void AMyPlayerController::PlaceBuildingInWorld()
//{
//	if (bCheckIfBuildingIsPlaceable == true)
//	{
//		// Stop Ticking to update the location of the building 
//		bBuildingBeingSpawned = false;
//		// Allow the building created to fall with gravity
//		BuildingSpawned->Mesh->SetSimulatePhysics(true);
//
//		BuildingSpawned->SetActorLocation(GridManagerRef->ClosestPosition + FVector(0.f, 0.f, 150.f));
//
//		/****** Get closest GridCell (from GridManager class) */
//		GridManagerRef->GetClosestGridCell(MouseHit);
//
//		// Setup the type of Building of the newly GridCell occupied
//		BuildingTypes BuildingOccupyingType = BuildingTypes::Placed; //temporary before defining the real type from ActorGridCell
//		GridManagerRef->ClosestGridCell->SetOccupied(BuildingOccupyingType, BuildingSpawned);
//
//		// Call particle emitter in ABuildings
//		CallSpawnDirtParticle();
//		
//		// Reset PhysicsSimulate to false after t time
//		FTimerHandle TimerBuildingFalling;
//		GetWorldTimerManager().SetTimer(TimerBuildingFalling, this, &AMyPlayerController::DisableBuildingPhysics, 1.5f);
//
//	}
//	else
//	{
//		// TO DO: Animation or sound if building overlaps an actor and cannot place it in the world when clicking
//
//	}
//}

/****** PLACE BUILDING IN WORLD: FROM TUTO TGDC VIA GridManager CLASS*/
void AMyPlayerController::PlaceBuildingInWorld_TGDC()
{
	if (bCheckIfBuildingIsPlaceable == true)
	{
		// Stop update the location of the building in Tick() 
		bBuildingBeingSpawned = false;
		// Allow the building created to fall with gravity
		BuildingSpawned->Mesh->SetSimulatePhysics(true);

		//ALT#2 (see UpdateBuildingPlacement_TGDC())
		BuildingSpawned->SetActorLocation(GridManagerRef->ClosestPosition + FVector(0.f, 0.f, 150.f));

		// Call the function to define what AActorGridCell is the closest
		//GridManagerRef->GetClosestGridCell(MouseHit); // using the mouse hit
		FVector BuildingSpawnedLocationLocal = BuildingSpawned->GetActorLocation();
		GridManagerRef->GetClosestGridCell(BuildingSpawnedLocationLocal); // using the location of the actor placed

		//AActorGridCell* ClosestGridCell = GridManagerRef->ClosestGridCell;
		
		// TO DO: Defined the type of building from the button clicked in the UI
		BuildingTypes BuildingOccupyingType = BuildingTypes::Road;
		GridManagerRef->ClosestGridCell->SetOccupied(BuildingOccupyingType, BuildingSpawned);

		// Change material to default
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Default);

		// Change pathways depending on neighbouring roads
		CallAdjustRoadWalkways(ClosestGridCellLocal); // see below
		

		// Call particle emitter in ABuildings
		CallSpawnDirtParticle();

		// Reset PhysicsSimulate to false after t time so that the building do not interacy with the environment
		FTimerHandle TimerBuildingFalling;
		GetWorldTimerManager().SetTimer(TimerBuildingFalling, this, &AMyPlayerController::DisableBuildingPhysics, 1.5f);

	}
	else
	{
		// TO DO: Animation or sound if building overlaps an actor and cannot place it in the world when clicking

	}
}

// Call CheckIfBuildingIsPlaceable from the BuildingManager class
void AMyPlayerController::CallAdjustRoadWalkways(AActorGridCell* ClosestGridCellDuringSpawning)
{
	BuildingManagerRef->AdjustRoadWalkways(ClosestGridCellDuringSpawning, BuildingSpawned);
}

void AMyPlayerController::DisableBuildingPhysics()
{
	BuildingSpawned->Mesh->SetSimulatePhysics(false);

	// Building can be spawned again
	bBuildingIsSpawnable = true;

	if (BuildingWidget->bButtonIsSelected == true)
	{
		SpawnBuilding();
	}

}

// Particle emitter - dust when building is spawned
void AMyPlayerController::CallSpawnDirtParticle()
{
	//ALT#1
	//FVector DirtLocation = FVector(RoundX, RoundY, 40.f);
	// ALT#2
	FVector DirtLocation = GridManagerRef->ClosestPosition + FVector(0.f, 0.f, 40.f);
	BuildingSpawned->SpawnDirtParticle(DirtLocation);
}



/* DEBUD SECTION

FString ActorName = BuildingSpawned->GetActorLabel();
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Silver, FString::Printf(TEXT("Actor: %s"), *ActorName));


*/

