// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Engine/DataTable.h"

#include "BuildingManager.generated.h"


class AActorGridCell;
class ABuildings;


// DataTable are UStruct with more stuff inside
USTRUCT(BlueprintType)
struct FBuildingManagerStruct : public FTableRowBase
{
	GENERATED_BODY()

		// Building placed in the world
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FString BuildingName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int32 IndexBuildingInWorld = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FVector BuildingLocation = { 0.f, 0.f, 0.f };
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		ABuildings* BuildingRef = nullptr;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	//	BuildingTypes BuildingType; // enum from ActorGridCell.h
	// Grid cell 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 IndexGridCell = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FVector GridCellLocation = { 0.f, 0.f, 0.f };
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		AActorGridCell* GridCellRef = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool bCellIsOccupied = false;
};


UCLASS()
class CITYBUILDING_API ABuildingManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuildingManager();

	/* REFERENCES */
	class AMyPlayerController* ControllerRef;

	/* DATA TABLE */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Buildings")
		class UDataTable* BuildingManagerDT;
	void UpdateBuildingManagerDT();
	void DisplayInfoBuildingManagerDT(ABuildings* TouchedActor);


	/* ROAD BUILDING */
	bool bAdjacentRoads = false; //check is the building is placeable

	void CheckIfBuildingIsPlaceable(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned);
	void CheckAdjacentRoads(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned);

	void AdjustRoadWalkways(AActorGridCell* ClosestGridCell, ABuildings* BuildingSpawned);


	/* ACTORS TO SPAWN*/
	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<class ABuildings> BP_BuildingRoad;
	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<class ABuildings> BP_BuildingRail;
	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<class ABuildings> BP_BuildingHouse;
	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<class ABuildings> BP_BuildingBuilding;
	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<class ABuildings> BP_BuildingWindmill;


	/* DEBUG */
	FString OccupyingTypeNorth = TEXT("Default");
	FString OccupyingTypeSouth = TEXT("Default");
	FString OccupyingTypeEast = TEXT("Default");
	FString OccupyingTypeWest = TEXT("Default");


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
