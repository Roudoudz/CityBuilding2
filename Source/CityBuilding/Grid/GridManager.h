// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridManager.generated.h"

class AActorGridCell;

UCLASS()
class CITYBUILDING_API AGridManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGridManager();

	/* REFERENCES */
	AActorGridCell* ActorGridCell;
	class AMyPlayerController* ControllerRef;
	AActorGridCell* CellSpawned;

	/* GRID PARAMETERS*/
	UPROPERTY(EditAnywhere, Category = GridSystem)
		int32 GridSize;
	UPROPERTY(EditAnywhere, Category = GridSystem)
		float CellSize;
	UPROPERTY(VisibleAnywhere, Category = GridSystem)
		float GridOffset;

	TArray<AActorGridCell*> GridArray;

	/* GRID ACTORS */
	FName InName;
	UPROPERTY(EditAnywhere)
		TSubclassOf <AActorGridCell> ActorGridCellClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	void PopulateGrid();

	// Get closest position and actor grid cell
	FVector ClosestPosition; // Closest position of GridCell
	float ClosestDistance; // Shorter distance between mouse (spawned building) and GridCell
	AActorGridCell* ClosestGridCell;
	void GetClosestGridLocation(FVector MouseLocation);
	//AActorGridCell* GetClosestGridCell(FVector MouseLocation);
	AActorGridCell* GetClosestGridCell(FVector BuildingSpawnedLocation);

	// Array of neighbouring cells
	TArray<class ABuildings*> tNeighbouringCells;

	void Debug_AddNeighboursToText();

	// Neighbouring actors
	void PopulateGridCellNeighbours();
	void DebugGridCellNeighbours();


private:
};
