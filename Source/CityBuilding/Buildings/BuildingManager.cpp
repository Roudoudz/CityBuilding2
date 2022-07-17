// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/BuildingManager.h"

#include "CityBuilding/Buildings/Buildings.h"
#include "CityBuilding/Buildings/BuildingRoad.h"
#include "CityBuilding/Buildings/Rail.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Setup/MyPlayerController.h"

#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"

// Macros to call debug text. Syntax: Colour("My text)
#define Yellow(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT(x)));}
#define Yellow0(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, TEXT(x));}
#define Red(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT(x));}
#define Blue(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT(x));}
#define Silver(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Silver, TEXT(x));}


// Sets default values
ABuildingManager::ABuildingManager()
{
	// Load BuildingManager DataTable
	static ConstructorHelpers::FObjectFinder<UDataTable> BuildingManagerDTObject(TEXT("DataTable'/Game/GameObjects/Buildings/BuildingManagerDT.BuildingManagerDT'"));
	if (BuildingManagerDTObject.Succeeded())
	{
		BuildingManagerDT = BuildingManagerDTObject.Object;
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Red, FString::Printf(TEXT("NO BUILDING MANAGER DATA TABLE FOUND!")));
	}
}


// Called when the game starts or when spawned
void ABuildingManager::BeginPlay()
{
	Super::BeginPlay();
	
	/* Ref PlayerController*/
	ControllerRef = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (!BP_BuildingRoad || !BP_BuildingRail || !BP_BuildingHouse || !BP_BuildingBuilding || !BP_BuildingWindmill)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("BUILDING CLASS(ES) REFERENCE(S) MISSING IN BUILDING MANAGER!")));
	}
}

// Called dring Tick() while the building is spawned
void ABuildingManager::CheckIfBuildingIsPlaceable(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	// if GridCell underneath the spawnable building is occupied, then prevent from spawning
	if (ClosestGridCell->OccupyingType != BuildingTypes::None)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
	}

	// if GridCell underneath the spawnable building is NOT occupied, then check adjacent cells building type
	else if (ClosestGridCell->OccupyingType == BuildingTypes::None)
	{
		// IF BUILDING SPAWNED IS A ROAD
		if (BuildingSpawned->IsA<ABuildingRoad>())
		{
			// Check in BuildingManager if the corners are road -> prevent  the building to be placed
			CheckAdjacentRoads(ClosestGridCell, BuildingSpawned);
		}
		// IF BUILDING SPAWNED IS A RAIL
		else if (BuildingSpawned->IsA<ARail>())
		{
			CheckAdjacentRails(ClosestGridCell, BuildingSpawned);
		}
		// IF BUILDING SPAWNED IS OTHER THAN LISTED ABOVE
		else
		{
			BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Selected);
			ControllerRef->bCheckIfBuildingIsPlaceable = true;
		}
	}
}

//   ROADS    ///
//***************
// Check the adjacent grid cells to know if the road is placeable
void ABuildingManager::CheckAdjacentRoads(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	/* DEBUG (called in PLayerController) */
	OccupyingTypeNorth = StaticEnum<BuildingTypes>()->GetValueAsString(ClosestGridCell->NeighbourNorth->OccupyingType);
	OccupyingTypeSouth = StaticEnum<BuildingTypes>()->GetValueAsString(ClosestGridCell->NeighbourSouth->OccupyingType);
	OccupyingTypeEast = StaticEnum<BuildingTypes>()->GetValueAsString(ClosestGridCell->NeighbourEast->OccupyingType);
	OccupyingTypeWest = StaticEnum<BuildingTypes>()->GetValueAsString(ClosestGridCell->NeighbourWest->OccupyingType);

	// If there are roads at N, E and NE, prevent from placing the building
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
		//bAdjacentRoads = true;
		return;
	}
	// If there are roads at N, W and NW, prevent from placing the building
	else if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
		//bAdjacentRoads = true;
		return;
	}
	// If there are roads at S, E and SE, prevent from placing the building
	else if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
		//bAdjacentRoads = true;
		return;
	}
	// If there are roads at S, W and SW, prevent from placing the building
	else if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
		//bAdjacentRoads = true;
		return;
	}
	// Allow the building to be placed
	else
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Default);
		ControllerRef->bCheckIfBuildingIsPlaceable = true;
		//bAdjacentRoads = false;
	}
}

void ABuildingManager::AdjustRoadFeatures(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	NorthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourNorth->OccupyingActor);
	SouthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourSouth->OccupyingActor);
	EastNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourEast->OccupyingActor);
	WestNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourWest->OccupyingActor);
	// Add neighbouring road actors (if present) into the array
	/*if (NorthNeighbourRoad)
	{
		tNeighbouringRoads.Add(NorthNeighbourRoad);
	}
	if (SouthNeighbourRoad)
	{
		tNeighbouringRoads.Add(SouthNeighbourRoad);
	}
	if (EastNeighbourRoad)
	{
		tNeighbouringRoads.Add(EastNeighbourRoad);
	}
	if (WestNeighbourRoad)
	{
		tNeighbouringRoads.Add(WestNeighbourRoad);
	}*/

	RoadSpawned = Cast<ABuildingRoad>(BuildingSpawned);

	AdjustRoadWalkways(ClosestGridCell, BuildingSpawned);
	AdjustRoadline(ClosestGridCell, BuildingSpawned);

}

void ABuildingManager::AdjustRoadWalkways(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	// If there are roads at the diagonals
	// NORTH
	if (ClosestGridCell->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road)
	{
		// Hide north pathway of the road spawned
		RoadSpawned->PathwayNorth->SetVisibility(false);
		// Hide south pathway of the northern neighbouring road
		NorthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourNorth->OccupyingActor);
		if (NorthNeighbourRoad)
		{
			NorthNeighbourRoad->PathwaySouth->SetVisibility(false);
		}
	}
	// SOUTH
	if (ClosestGridCell->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road)
	{
		// Hide south pathway of the road spawned
		RoadSpawned->PathwaySouth->SetVisibility(false);
		// Hide north pathway of the southern neighbouring road
		SouthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourSouth->OccupyingActor);
		if (SouthNeighbourRoad)
		{
			SouthNeighbourRoad->PathwayNorth->SetVisibility(false);
		}
	}
	// WEST
	if (ClosestGridCell->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		// Hide west pathway of the road spawned
		RoadSpawned->PathwayWest->SetVisibility(false);
		// Hide east pathway of the nort western road
		WestNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourWest->OccupyingActor);
		if (WestNeighbourRoad)
		{
			WestNeighbourRoad->PathwayEast->SetVisibility(false);
		}
	}
	// EAST
	if (ClosestGridCell->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		// Hide east pathway of the road spawned
		RoadSpawned->PathwayEast->SetVisibility(false);
		// Hide west pathway of the eastern neighbouring road
		EastNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourEast->OccupyingActor);
		if (EastNeighbourRoad)
		{
			EastNeighbourRoad->PathwayWest->SetVisibility(false);
		}
	}
}

void ABuildingManager::AdjustRoadline(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	/* ROTATION SCHEMES FOR ROADLINES DECAL - SetWorldRotation()
	---------------------------------------------------------------------------------------------------------------------------
	|							 3 ROADLINES:                                    2 ROADLINES:								  |
	|   Rotation angle (P,Y,R):  (90,0,0)   (90,270,0)    (90,180,0)   (90,90,0)  |    270°:      180°:       90°:      0°:   |
	|   Scheme neighbour cells:    xxx          x             x            x      |     xx         xx           x        x    |
	|							   x           xx           xxx          xx      |     x           x          xx        xx    |
	|										   x                          x                                                   |
	-------------------------------------------------------------------------------------------------------------------------
    */


	/*	SPAWNED BUILDING HAS 4 NEIGHBOURS */
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MFourLines);
		return;
	}

	/*	SPAWNED BUILDING HAS 3 NEIGHBOURS */
	// North, East, West
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road )
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
		return;
	}
	// South, East, West
	if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 270));
		return;
	}
	// North, South, East
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
		return;
	}
	// North, South, West
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
		return;
	}

	/*	SPAWNED BUILDING HAS 2 NEIGHBOURS */
	// If Spawned building has North & South neighbours, rotate
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 90));

		// If North neighbour has East neighbour AND South neighbour has East neighbour
		if (ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 90, 0));

			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MRoadlineCurve);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 270));
			SouthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MRoadlineCurve);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
			return;
		} 
		// If North has neighbour West AND south has neighbour West
		if (ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 90, 0));

			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MRoadlineCurve);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			SouthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MRoadlineCurve);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
			return;
		}
	}
	//If building spawned with neighbour North & East
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
		return;
	}
	//If building spawned with neighbour North & West
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
		return;
	}
	//If building spawned with neighbour South & East
	if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 270));
		return;
	}
	//If building spawned with neighbour South & West
	if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		RoadSpawned->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
		return;
	}

	//If building spawned with neighbour East & West, DO NOT ROTATE
	if (ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		// IF EAST NEIGHBOUR HAS 3 NEIGHBOURS
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MFourLines);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
			return;
		}

		// IF EAST NEIGHBOUR HAS 2 NEIGHBOURS
		// If East neighbour has North neighbour AND west neighbour has North neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180)); // should be 90
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90)); // should be 0

			return;
		}

		// If East neighbour has North neighbour AND west neighbour has North neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));

			return;
		}
		// If East neighbour has North neighbour AND west neighbour has South neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 270));

			return;
		}
		// If East neighbour has South neighbour AND west neighbour has South neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 270)); //????? Should be 180
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0)); //???? should be 270
			return;
		}
		// If East neighbour has South neighbour AND west neighbour has North neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
			return;
		}
	}

	///// SPAWNED BUILDING HAS 1 NEIGHBOUR
	// WEST NEIGHBOUR
	if (ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		// 3 NEIGHBOURS
		// If West cell has North, South and West neighbour, change material to Four lines
		if (ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MFourLines);
			//WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// 2 NEIGHBOURS
		// If West cell has North & South neighbour, change material
		if (ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MThreeLines);
			WestNeighbourRoad->Roadline->SetWorldRotation(FRotator(90, 270, 0));

			return;
		}
		// If West cell has West & South neighbour, change material
		if (ClosestGridCell->NeighbourWest->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MThreeLines);
			WestNeighbourRoad->Roadline->SetWorldRotation(FRotator(90, 0, 0)); //(pitch, yaw, roll) 
			return;
		}
		// If West cell has North & West neighbour, change material
		if (ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourWest->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MThreeLines);
			WestNeighbourRoad->Roadline->SetWorldRotation(FRotator(90, 180, 0));
			return;
		}
		// 1 NEIGHBOUR
		// If West cell has North neighbour, change material
		if (ClosestGridCell->NeighbourWest->NeighbourNorth->OccupyingType == BuildingTypes::Road)
		{
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
			return;
		}
		// If the West cell has a South neighbour, change material
		if (ClosestGridCell->NeighbourWest->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			WestNeighbourRoad->Roadline->SetMaterial(0, WestNeighbourRoad->MRoadlineCurve);
			WestNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
			return;
		}
	}
	// EAST NEIGHBOUR
	if (ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		// 3 NEIGHBOURS
		// If East cell has North, South and East neighbour, change material to Four lines
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MFourLines);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// 2 NEIGHBOURS
		// If EAST cell has North & South neighbour, change material of EAST neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MThreeLines);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0)); 
			return;
		}
		// If EAST cell has East & South neighbour, change material of EAST neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourEast->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MThreeLines);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0)); //???? should be 270
			return;
		}
		// If EAST cell has East & North neighbour, change material of EAST neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourEast->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MThreeLines);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180)); //????should be 90
			return;
		}
		// 1 NEIGHBOUR
		// If the East cell has a North neighbour, change material of EAST neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourNorth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// If the East cell has a South neighbour, change material of EAST neighbour
		if (ClosestGridCell->NeighbourEast->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			EastNeighbourRoad->Roadline->SetMaterial(0, EastNeighbourRoad->MRoadlineCurve);
			EastNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 270));
			return;
		}
	}
	// NORTH NEIGHBOUR
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road)
	{
		// Rotate road sign of the spawned actor (because North)
		//RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 90, 0));
		RoadSpawned->Roadline->SetWorldRotation(FRotator(0, 90, 0));
		
		// NORTH NEIGHBOUR WITH 3 neighbours
		// If North cell has North, East and West neighbour, change material to Four lines
		if (ClosestGridCell->NeighbourNorth->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MFourLines);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// NORTH NEIGHBOUR WITH 2 neighbours
		// If North cell has North & East neighbour, change material
		if (ClosestGridCell->NeighbourNorth->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MThreeLines);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// If North cell has North & West neighbour, change material
		if (ClosestGridCell->NeighbourNorth->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MThreeLines);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180)); // ?????? should be 90
			return;
		}
		// If North cell has East & West neighbour, change material
		if (ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MThreeLines);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0)); // ?????? should be 270
			return;
		}
		// NORTH NEIGHBOUR WITH 1 NEIGHBOUR
		// If North cell has East neighbour
		if (ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MRoadlineCurve);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 270));
			return;
		}
		// If the North cell has a West neighbour
		if (ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			NorthNeighbourRoad->Roadline->SetMaterial(0, NorthNeighbourRoad->MRoadlineCurve);
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// NORTH NEIGHBOUR WITH 0 NEIGHBOUR -> rotate
		if (ClosestGridCell->NeighbourNorth->NeighbourNorth->OccupyingType == BuildingTypes::None)
		{
			NorthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 90, 0));
		}
	}
	// SOUTH NEIGHBOUR
	if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road)
	{
		// Rotate road sign of the spawned actor...
		RoadSpawned->Roadline->AddRelativeRotation(FRotator(0, 90, 0));
		
		// 3 NEIGHBOURS
		// If South cell has South, West & East neighbour, change material South cell
		if (ClosestGridCell->NeighbourSouth->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			SouthNeighbourRoad->Roadline->SetMaterial(0, SouthNeighbourRoad->MFourLines);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
			return;
		}
		// 2 NEIGHBOURS
		// If South cell has South & West neighbour, change material south cell
		if (ClosestGridCell->NeighbourSouth->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			SouthNeighbourRoad->Roadline->SetMaterial(0, SouthNeighbourRoad->MThreeLines);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
			return;
		}
		// If South cell has South & East neighbour, change material south cell
		if (ClosestGridCell->NeighbourSouth->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			SouthNeighbourRoad->Roadline->SetMaterial(0, SouthNeighbourRoad->MThreeLines);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180));
			return;
		}
		// If South cell has East & West neighbour, change material south cell
		if (ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road &&
			ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			SouthNeighbourRoad->Roadline->SetMaterial(0, SouthNeighbourRoad->MThreeLines);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 180)); //???? should be (0,0,90)
			return;
		}
		// 1 NEIGHBOUR
		// If SOUTH cell has East neighbour
		if (ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			SouthNeighbourRoad->Roadline->SetMaterial(0, SouthNeighbourRoad->MRoadlineCurve);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 0));
			return;
		}
		// If the SOUTH cell has a South neighbour
		if (ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			SouthNeighbourRoad->Roadline->SetMaterial(0, SouthNeighbourRoad->MRoadlineCurve);
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 0, 90));
			return;
		}
		// SOUTH NEIGHBOUR WITH 0 NEIGHBOUR -> rotate
		if (ClosestGridCell->NeighbourSouth->NeighbourSouth->OccupyingType == BuildingTypes::None)
		{
			SouthNeighbourRoad->Roadline->AddRelativeRotation(FRotator(0, 90, 0));
		}
	}
}


//   RAILS    ///
//***************
// Check the adjacent grid cells to know if the road is placeable
void ABuildingManager::CheckAdjacentRails(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	// Rail placeable if no other building type is in all the neighbouring cells
	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::None &&
		ClosestGridCell->NeighbourNorth->NeighbourEast->OccupyingType == BuildingTypes::None)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Default);
		ControllerRef->bCheckIfBuildingIsPlaceable = true;
		//bAdjacentRoads = false;
		return;
	}
	// PLACEABLE when rail in N, S, W or E
	else if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Rail ||
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Rail ||
		ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Rail ||
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Rail)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Default);
		ControllerRef->bCheckIfBuildingIsPlaceable = true;
		//bAdjacentRails = false;
	}
	// NOT PLACEABLE
	else
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
		//bAdjacentRoads = true;
	}

}

void ABuildingManager::AdjustRailDirection(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	ARail* RailSpawned = Cast<ARail>(BuildingSpawned);

	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Rail ||
	ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Rail )
	{
		RailSpawned->Mesh->SetRelativeRotation (FRotator(0, 90, 0));
	}
}

void ABuildingManager::UpdateBuildingManagerDT()
{
	FBuildingManagerStruct NewRowDT;
	NewRowDT.IndexBuildingInWorld = ControllerRef->BuildingsInWorldArray.Num();
	NewRowDT.IndexGridCell = ControllerRef->IndexGridArrayBuildingPlaced;
	NewRowDT.BuildingLocation = ControllerRef->BuildingLocation;
	NewRowDT.BuildingRef = ControllerRef->BuildingSpawned;
	NewRowDT.BuildingName = ControllerRef->BuildingName;

	// call AddRow to insert the record
	BuildingManagerDT->AddRow(FName(TEXT("NewRow")), NewRowDT);

	// Source - calling data table
	static const FString ContextString(TEXT("Context string"));
	FBuildingManagerStruct* BuildManageStruct = BuildingManagerDT->FindRow<FBuildingManagerStruct>(FName(TEXT("NewRow")), ContextString, true);
	if (BuildManageStruct)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("BuildingName: %s"), *BuildManageStruct->BuildingName));
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("IndexGridCell: %d"), BuildManageStruct->IndexGridCell));
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("IndexBuildingWorld: %d"), BuildManageStruct->IndexBuildingInWorld));
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("BuildingLocation: %s"), *BuildManageStruct->BuildingLocation.ToString()));
	}
}

// Called from 'ClickHighlightComp.cpp'
void ABuildingManager::DisplayInfoBuildingManagerDT(ABuildings* TouchedActor)
{
	// TO DO: USE REF OF THE ACTOR TOUHCED TO FIND ITS CORRESPONDING INFO IN THE DT


}