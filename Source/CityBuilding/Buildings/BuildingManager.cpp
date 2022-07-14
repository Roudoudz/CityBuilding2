// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/BuildingManager.h"

#include "CityBuilding/Buildings/Buildings.h"
#include "CityBuilding/Buildings/BuildingRoad.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Setup/MyPlayerController.h"

#include "Kismet/GameplayStatics.h"


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


void ABuildingManager::CheckIfBuildingIsPlaceable(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	// if GridCell underneath the spawnable building is occupied, then prevent from spawning
	if (ClosestGridCell->OccupyingType != BuildingTypes::None)
	{
		BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
		ControllerRef->bCheckIfBuildingIsPlaceable = false;
	}
	// if GridCell underneath the spawnable building is NOT occupied, then check adjacent cells building type
	if (ClosestGridCell->OccupyingType == BuildingTypes::None)
	{
		// Check in BuildingManager if the corners are road -> prevent  the building to be placed
		CheckAdjacentRoads(ClosestGridCell, BuildingSpawned);
		if (bAdjacentRoads == true)
		{
			BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Overlap);
			ControllerRef->bCheckIfBuildingIsPlaceable = false;
		}
		// ... if the corners are NOT road -> place the building
		else if (bAdjacentRoads == false)
		{
			BuildingSpawned->Mesh->SetMaterial(0, BuildingSpawned->M_Selected);
			ControllerRef->bCheckIfBuildingIsPlaceable = true;
		}
	}
}

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
		bAdjacentRoads = true;
	}
	// If there are roads at N, W and NW, prevent from placing the building
	else if (ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourNorth->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		bAdjacentRoads = true;
	}
	// If there are roads at S, E and SE, prevent from placing the building
	else if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		bAdjacentRoads = true;
	}
	// If there are roads at S, W and SW, prevent from placing the building
	else if (ClosestGridCell->NeighbourSouth->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourWest->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourSouth->NeighbourWest->OccupyingType == BuildingTypes::Road)
	{
		bAdjacentRoads = true;
	}
	else
	{
		bAdjacentRoads = false;
	}
}

void ABuildingManager::AdjustRoadWalkways(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned)
{
	// If there are roads at the diagonals
	// NORTH
	if (ClosestGridCell->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourNorth->OccupyingType == BuildingTypes::Road)
	{
		// Hide north pathway of the road spawned
		ABuildingRoad* RoadSpawned = Cast<ABuildingRoad>(BuildingSpawned);
		RoadSpawned->PathwayNorth->SetVisibility(false);
		// Hide south pathway of the northern neighbouring road
		ABuildingRoad* NorthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourNorth->OccupyingActor);
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
		ABuildingRoad* RoadSpawned = Cast<ABuildingRoad>(BuildingSpawned);
		RoadSpawned->PathwaySouth->SetVisibility(false);
		// Hide north pathway of the southern neighbouring road
		ABuildingRoad* SouthNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourSouth->OccupyingActor);
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
		ABuildingRoad* RoadSpawned = Cast<ABuildingRoad>(BuildingSpawned);
		RoadSpawned->PathwayWest->SetVisibility(false);
		// Hide east pathway of the nort western road
		ABuildingRoad* WestNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourWest->OccupyingActor);
		if (WestNeighbourRoad)
		{
			WestNeighbourRoad->PathwayEast->SetVisibility(false);
			WestNeighbourRoad->RoadlineHalfLeft->SetVisibility(true);
		}
				 
		// Adjust roadlines
		RoadSpawned->Roadline->SetRelativeRotation(FRotator(0, 0, 0));

	}
	// EAST
	if (ClosestGridCell->OccupyingType == BuildingTypes::Road &&
		ClosestGridCell->NeighbourEast->OccupyingType == BuildingTypes::Road)
	{
		// Hide east pathway of the road spawned
		ABuildingRoad* RoadSpawned = Cast<ABuildingRoad>(BuildingSpawned);
		RoadSpawned->PathwayEast->SetVisibility(false);
		// Hide west pathway of the eastern neighbouring road
		ABuildingRoad* EastNeighbourRoad = Cast<ABuildingRoad>(ClosestGridCell->NeighbourEast->OccupyingActor);
		if (EastNeighbourRoad)
		{
			EastNeighbourRoad->PathwayWest->SetVisibility(false);
			EastNeighbourRoad->RoadlineHalfRight->SetVisibility(true);
		}
		// Adjust roadlines
		RoadSpawned->Roadline->SetRelativeRotation(FRotator(0, 0, 0));
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
	FBuildingManagerStruct* AttackMontage = BuildingManagerDT->FindRow<FBuildingManagerStruct>(FName(TEXT("NewRow")), ContextString, true);
	if (AttackMontage)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("BuildingName: %s"), *AttackMontage->BuildingName));
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("IndexGridCell: %d"), AttackMontage->IndexGridCell));
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("IndexBuildingWorld: %d"), AttackMontage->IndexBuildingInWorld));
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("BuildingLocation: %s"), *AttackMontage->BuildingLocation.ToString()));
	}
}

// Called from 'ClickHighlightComp.cpp'
void ABuildingManager::DisplayInfoBuildingManagerDT(ABuildings* TouchedActor)
{
	// TO DO: USE REF OF THE ACTOR TOUHCED TO FIND ITS CORRESPONDING INFO IN THE DT


}