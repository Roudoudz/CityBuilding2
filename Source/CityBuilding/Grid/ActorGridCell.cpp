// Fill out your copyright notice in the Description page of Project Settings.

#include "CityBuilding/Grid/ActorGridCell.h"

#include "CityBuilding/Grid/GridManager.h"

#include "Components/TextRenderComponent.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
AActorGridCell::AActorGridCell()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Mesh->SetupAttachment(RootComponent);

	InfoText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("InfoText"));
	InfoText->SetupAttachment(Mesh);

	InfoText2 = CreateDefaultSubobject<UTextRenderComponent>(TEXT("InfoText2"));
	InfoText2->SetupAttachment(Mesh);

	OccupyingType = BuildingTypes::None;
}

// Called when the game starts or when spawned
void AActorGridCell::BeginPlay()
{
	Super::BeginPlay();

	/* REFERENCES */
	GridManagerRef = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
	if (!GridManagerRef)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("NO GRID MANAGER ACTOR FOUND. PLACE ONE IN THE LEVEL!")));
	}
}

// Called from PlayerController
void AActorGridCell::SetOccupied(BuildingTypes BuildingOccupyingType, ABuildings* OccupyingBuildingRef)
{
	//bIsOccupied = true;
	// Type of actor occupying the grid cell
	OccupyingType = BuildingOccupyingType;
	// Ref to the actor occupying the grid cell
	OccupyingActor = OccupyingBuildingRef;

	//DebugSetOccupy();
}

void AActorGridCell::DebugSetOccupy()
{
	if (NeighbourSouth)
	{
		NeighbourSouth->Mesh->SetMaterial(0, M_Selected);
	}
	if (NeighbourNorth)
	{
		NeighbourNorth->Mesh->SetMaterial(0, M_Selected);
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Silver, FString::Printf(TEXT("Neighbour North: %s"), *NeighbourNorth->GetActorLabel()));
	}
	if (NeighbourWest)
	{
		NeighbourWest->Mesh->SetMaterial(0, M_Selected);
	}
	if (NeighbourEast)
	{
		NeighbourEast->Mesh->SetMaterial(0, M_Selected);
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Silver, FString::Printf(TEXT("Neighbour East: %s"), *NeighbourEast->GetActorLabel()));
	}
}


// DeBUG
/*

GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Silver, FString::Printf(TEXT("Neighbour North: %s"), *NeighbourEast->GetActorLabel()));

*/