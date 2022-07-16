// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/BuildingRoad.h"

//#include "CityBuilding/Setup/MyPlayerController.h"

#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"


ABuildingRoad::ABuildingRoad()
{
	ScalePathway = { 0.1, 0.8, 1 };
	PathwayLocZ = 90;

	Capsule->SetCapsuleRadius(10.f);
	Capsule->SetCapsuleHalfHeight(5.f);
	Capsule->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	//Mesh->SetRelativeScale3D(FVector(9.9, 9.9, 0.05));
	Mesh->SetWorldScale3D(FVector(9.9, 9.9, 0.05));
	//Mesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	// PATHWAYS
	PathwayNorth = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayNorth"));
	PathwayNorth->SetupAttachment(Mesh);
	PathwayNorth->SetRelativeScale3D(ScalePathway);
	PathwayNorth->SetRelativeLocation(FVector(45, 0, PathwayLocZ));
	PathwayNorth->SetRelativeRotation(FRotator(0, 0, 0));

	PathwayEast = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayEast"));
	PathwayEast->SetupAttachment(Mesh);
	PathwayEast->SetRelativeScale3D(ScalePathway);
	PathwayEast->SetRelativeLocation(FVector(0, 45, PathwayLocZ));
	PathwayEast->SetRelativeRotation(FRotator(0, 90, 0));

	PathwaySouth = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwaySouth"));
	PathwaySouth->SetupAttachment(Mesh);
	PathwaySouth->SetRelativeScale3D(ScalePathway);
	PathwaySouth->SetRelativeLocation(FVector(-45, 0, PathwayLocZ));
	PathwaySouth->SetRelativeRotation(FRotator(0, 0, 0));

	PathwayWest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayWest"));
	PathwayWest->SetupAttachment(Mesh);
	PathwayWest->SetRelativeScale3D(ScalePathway);
	PathwayWest->SetRelativeLocation(FVector(0, -45, PathwayLocZ));
	PathwayWest->SetRelativeRotation(FRotator(0, 90, 0));

	PathwayNE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayNE"));
	PathwayNE->SetupAttachment(Mesh);
	PathwayNE->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwayNE->SetRelativeLocation(FVector(45, 45, PathwayLocZ));

	PathwayNW = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwayNW"));
	PathwayNW->SetupAttachment(Mesh);
	PathwayNW->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwayNW->SetRelativeLocation(FVector(45, -45, PathwayLocZ));

	PathwaySE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwaySE"));
	PathwaySE->SetupAttachment(Mesh);
	PathwaySE->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwaySE->SetRelativeLocation(FVector(-45, 45, PathwayLocZ));

	PathwaySW = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PathwaySW"));
	PathwaySW->SetupAttachment(Mesh);
	PathwaySW->SetRelativeScale3D(FVector(0.1, 0.1, 1));
	PathwaySW->SetRelativeLocation(FVector(-45, -45, PathwayLocZ));

	// ROAD LINES
	Roadline = CreateDefaultSubobject<UDecalComponent>("RoadlineStraight");
	Roadline->SetupAttachment(Mesh);
	Roadline->DecalSize = FVector(3.f, 40.f, 8000.f);
	Roadline->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
	Roadline->SetRelativeLocation(FVector(0.f, 0.f, 0.0f));
	Roadline->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	Roadline->SetVisibility(true);

	/*RoadlineCurve = CreateDefaultSubobject<UDecalComponent>("RoadlineCurve");
	RoadlineCurve->SetupAttachment(Mesh);
	RoadlineCurve->DecalSize = FVector(3.f, 40.f, 8000.f);
	RoadlineCurve->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
	RoadlineCurve->SetRelativeLocation(FVector(0.f, 0.f, 0.0f));
	RoadlineCurve->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	RoadlineCurve->SetVisibility(false);*/
}

void ABuildingRoad::BeginPlay()
{
	Super::BeginPlay();

	// Used to define the type of building in ActorGridCell
	eBuildingType = BuildingTypes::Road;
}


void ABuildingRoad::SpawnDirtParticle(FVector DirtLocation)
{
	// Middle section
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(500, 0, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(-500, 0, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(0, 500, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(0, -500, 0), FRotator(0.f, 0.f, 0.f));
	// Corners
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(500, 500, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(-500, 500, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(-500, -500, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(500, -500, 0), FRotator(0.f, 0.f, 0.f));
}