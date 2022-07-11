// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/BuildingRoad.h"

#include "CityBuilding/Components/ClickHighlightComp.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Setup/MyPlayerController.h"

#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"


ABuildingRoad::ABuildingRoad()
{
	Capsule->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	//Mesh->SetRelativeScale3D(FVector(3.9, 3.9, 0.05));
	//Mesh->SetWorldScale3D(FVector(3.9, 3.9, 0.05));
	Mesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));


	PathwayNorth = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayNorth"));
	PathwayNorth->SetupAttachment(Mesh);
	PathwayNorth->SetRelativeScale3D(FVector(0.1, 0.8, 1));
	PathwayNorth->SetRelativeLocation(FVector(45, 0, 100));

	PathwayEast = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayEast"));
	PathwayEast->SetupAttachment(Mesh);
	PathwayEast->SetRelativeScale3D(FVector(0.8, 0.1, 1));
	PathwayEast->SetRelativeLocation(FVector(0, 45, 100));

	PathwaySouth = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwaySouth"));
	PathwaySouth->SetupAttachment(Mesh);
	PathwaySouth->SetRelativeScale3D(FVector(0.1, 0.8, 1));
	PathwaySouth->SetRelativeLocation(FVector(-45, 0, 100));

	PathwayWest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayWest"));
	PathwayWest->SetupAttachment(Mesh);
	PathwayWest->SetRelativeScale3D(FVector(0.8, 0.1, 1));
	PathwayWest->SetRelativeLocation(FVector(0, -45, 100));

	PathwayNE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayNE"));
	PathwayNE->SetupAttachment(Mesh);
	PathwayNE->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwayNE->SetRelativeLocation(FVector(45, 45, 100));

	PathwayNW = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayNW"));
	PathwayNW->SetupAttachment(Mesh);
	PathwayNW->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwayNW->SetRelativeLocation(FVector(45, -45, 100));

	PathwaySE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwaySE"));
	PathwaySE->SetupAttachment(Mesh);
	PathwaySE->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwaySE->SetRelativeLocation(FVector(-45, 45, 100));

	PathwaySW = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwaySW"));
	PathwaySW->SetupAttachment(Mesh);
	PathwaySW->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwaySW->SetRelativeLocation(FVector(-45, -45, 100));
}

void ABuildingRoad::BeginPlay()
{
	Super::BeginPlay();

	eBuildingType = BuildingTypes::Road;
}


void ABuildingRoad::SpawnDirtParticle(FVector DirtLocation)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(500, 0, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(-500, 0, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(0, 500, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(0, -500, 0), FRotator(0.f, 0.f, 0.f));
}