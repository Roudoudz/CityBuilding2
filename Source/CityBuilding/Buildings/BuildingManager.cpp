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
#define Yellow(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT(x)));}
#define Yellow0(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, TEXT(x));}
#define Red(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT(x));}
#define Blue(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT(x));}
#define Silver(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Silver, TEXT(x));}


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
	RoadSpawned = Cast<ABuildingRoad>(BuildingSpawned);
	NorthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourNorth->OccupyingActor);
	SouthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourSouth->OccupyingActor);
	EastNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourEast->OccupyingActor);
	WestNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourWest->OccupyingActor);

	 //Add neighbouring road actors (if present) into the array 
	tNeighbouringRoads.Empty();

	tNeighbouringRoads.Add(RoadSpawned);
	if (NorthNeighbourRoad)
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
	}

	//Add neighbouring grid cells (if present) into the array 
	tNeighbouringGridCells.Empty();

	tNeighbouringGridCells.Add(ClosestGridCell);

	if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road)
	{
		tNeighbouringGridCells.Add(ClosestGridCell->NeighbourNorth);
	}
	if (ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		tNeighbouringGridCells.Add(ClosestGridCell->NeighbourEast);
	}
	if (ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		tNeighbouringGridCells.Add(ClosestGridCell->NeighbourWest);
	}
	if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road)
	{
		tNeighbouringGridCells.Add(ClosestGridCell->NeighbourSouth);
	}

	// Debug
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("Number neighbouring grid cells: %d"), tNeighbouringGridCells.Num()));

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
	------------------------------------------------------------------------------------------------------------------------------
	|							 3 ROADLINES:                                                   2 ROADLINES:				     |
	|   Rotation angle (P,Y,R):  (90,0,0)   (90,270,0)    (90,180,0)   (90,90,0)  |  (90,90,0)  (90,180,0)  (90,270,0) (90,0,0)  |
	|   Scheme neighbour cells:   xxx          x             x            x       |     xx         xx           x         x      |
	|							   x           xx           xxx          xx       |     x           x          xx         xx     |
	|										   x                          x                                                      |
	------------------------------------------------------------------------------------------------------------------------------
	*/


	// Check each AGridCell (with occupying actor of type ABuildingRoad) in the array tNeighbouringRoads and adjust roadlines
	for (AActorGridCell* IndexGridCells : tNeighbouringGridCells)
	{
		ABuildingRoad* IndexRoad = Cast<ABuildingRoad>(IndexGridCells->OccupyingActor);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Number neighbouring roads: %s"), *IndexRoad->GetActorLabel()));

		/*	IF A ROAD HAS 4 NEIGHBOURS */
		if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MFourLines);
			continue;
		}
		
		/*	IF A ROAD HAS 3 NEIGHBOURS */
		// North, East, West neighbours
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			Blue("3 lines - N,E,W");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 180, 0));
			continue;
		}
		// South, East, West neighbours
		else if (IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			Blue("3 lines - S,E,W");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 0, 0));
			continue;
		}
		// North, South, East neighbours
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			Blue("3 lines - N,E,S");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 270, 0));
			continue;
		}
		// North, South, West neighbours
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			Blue("3 lines - N,S,W");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MThreeLines);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 90, 0));
			continue;
		}

		/*	IF A ROAD HAS 2 NEIGHBOURS */
		// NORTH & SOUTH (->rotate)
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			Blue("2 lines - N,S");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineStraight);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 90, 0));
			continue;
		}
		// NORTH & EAST
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			Blue("2 lines - N,E");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 0, 0));
			continue;
		}
		// NORTH & WEST
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			Blue("2 lines - N,W");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 270, 0));
			continue;
		}
		// SOUTH & EAST
		else if (IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			Blue("2 lines - S,E");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 90, 0));
			continue;
		}
		// SOUTH & WEST
		else if (IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			Blue("2 lines - S,W");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineCurve);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 180, 0));
			continue;
		}
		// EAST & WEST (-> DO NOT ROTATE)
		else if (IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road &&
			IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road)
		{
			Blue("2 lines - E,W");
			continue;
		}

		/*	IF A ROAD HAS 1 NEIGHBOUR */
		// NORTH OR SOUTH (-> rotate)
		else if (IndexGridCells->NeighbourNorth->OccupyingType == BuildingTypes::Road ||
		IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			Blue("1 line - N or S");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineStraight);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 90, 0));
			continue;
		}
		/*else if (IndexGridCells->NeighbourSouth->OccupyingType == BuildingTypes::Road)
		{
			Blue("1 line - N or S");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineStraight);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 90, 0));
			continue;
		}*/
		// EAST OR WEST (-> DO NOT rotate)
		else if (IndexGridCells->NeighbourEast->OccupyingType == BuildingTypes::Road ||
			IndexGridCells->NeighbourWest->OccupyingType == BuildingTypes::Road)
		{
			Blue("1 line - E or W");
			IndexRoad->Roadline->SetMaterial(0, RoadSpawned->MRoadlineStraight);
			IndexRoad->Roadline->SetWorldRotation(FRotator(90, 0, 0));
			continue;
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