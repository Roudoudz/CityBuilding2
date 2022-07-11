// Fill out your copyright notice in the Description page of Project Settings.

#include "CityBuilding/Grid/GridManager.h"

#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Setup/MyPlayerController.h"
#include "Components/TextRenderComponent.h"

#include "Engine/World.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
AGridManager::AGridManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();

	/* REFERENCES */
	ControllerRef = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));


	/* METHODS */
	PopulateGrid();
	PopulateGridCellNeighbours();
}

// Called every frame
//void AGridManager::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}


void AGridManager::PopulateGrid()
{
	GridArray.Empty();

	// ALT#1: GridActor placed at the center of each square
	//GridOffset = ((GridSize * CellSize) / 2) - (CellSize / 2); // center of square
	// ALT#2: GridActor placed at the corner of each square (check also GridManager)
	GridOffset = ((GridSize * CellSize) / 2); // corner of square
	for (int32 x = 0; x < GridSize; x++)
	{
		for (int32 y = 0; y < GridSize; y++)
		{
			// GridPoints at the center of the floor squares
			float XVector = (x * CellSize) - GridOffset;
			float YVector = (y * CellSize) - GridOffset;
			FVector Location = FVector(XVector, YVector, 0);

			CellSpawned = GetWorld()->SpawnActor<AActorGridCell>(ActorGridCellClass, Location, FRotator(0, 0, 0));

			// Add the actor spawned into the array
			GridArray.Add(CellSpawned);
			CellSpawned->InfoText->SetText(FString::Printf(TEXT("X:%d, Y:%d, Index:%d, Name:%s"),
				FGenericPlatformMath::TruncToInt(XVector), FGenericPlatformMath::TruncToInt(YVector), (x * 10 + y), *CellSpawned->GetActorLabel()));
		}
	}
}

// Populate neighbours of the ActorGridCell (I also should draw a diagram of the grid to visualise the logic behing it!)
void AGridManager::PopulateGridCellNeighbours()
{
	for (int32 Index = 0; Index < GridArray.Num(); Index++)
	{
		// Populate South neighbour
		if (Index - GridSize >= 0)
		{
			GridArray[Index]->NeighbourSouth = GridArray[Index - GridSize];
		}
		// Populate North neighbour
		if (Index + GridSize < GridArray.Num())
		{
			GridArray[Index]->NeighbourNorth = GridArray[Index + GridSize];
		}
		// Populate West neighbour
		if (Index != 0 || Index % GridSize != 0.f)
		{
			GridArray[Index]->NeighbourWest = GridArray[Index - 1];
		}
		// Populate East neighbour
		if (Index != GridArray.Num() - 1 && Index + 1 % GridSize != 0.f)
		{
			GridArray[Index]->NeighbourEast = GridArray[Index + 1];
		}
	}
}

// MouseLocation from PlayerController (ALT #1)
void AGridManager::GetClosestGridLocation(FVector MouseLocation)
{
	ClosestPosition = GridArray[0]->GetActorLocation();
	ClosestDistance = FVector::Distance(MouseLocation, GridArray[0]->GetActorLocation());

	for (int i = 0; i < GridArray.Num(); i++)
	{
		float NewClosestDistance = FVector::Distance(GridArray[i]->GetActorLocation(), MouseLocation);
		if (NewClosestDistance < ClosestDistance)
		{
			ClosestPosition = GridArray[i]->GetActorLocation();
			ClosestDistance = NewClosestDistance;
		}
	}
}


// MouseLocation from PlayerController (ALT #2)
AActorGridCell* AGridManager::GetClosestGridCell(FVector BuildingSpawnedLocation)
{
	// Initiate ClosestDistance and ClosestGridCell with some value (first cell of the array)
	ClosestDistance = FVector::Distance(BuildingSpawnedLocation, GridArray[0]->GetActorLocation());
	ClosestGridCell = GridArray[0]; 

	for (int i = 0; i < GridArray.Num(); i++)
	{
		float NewClosestDistance = FVector::Distance(BuildingSpawnedLocation, GridArray[i]->GetActorLocation());
		if (NewClosestDistance < ClosestDistance)
		{
			ClosestGridCell = GridArray[i];
			ClosestDistance = NewClosestDistance;
		}
	}
	return ClosestGridCell;
}




/* DEBUG SECTION */
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("ActorGridCell found")));