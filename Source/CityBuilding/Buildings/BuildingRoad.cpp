// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/BuildingRoad.h"

#include "CityBuilding/Components/ClickHighlightComp.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Setup/MyPlayerController.h"

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
	//Roadline = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Roadline"));
	//Roadline->SetupAttachment(Mesh);
	//Roadline->SetRelativeScale3D(FVector(0.1, 1, 0.05));
	//Roadline->SetRelativeLocation(FVector(0, 0, 100));
	//Roadline->SetRelativeRotation(FRotator(0, 90, 0)); //(Y,X,Z)

	//RoadlineHalfRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoadlineHalfRight"));
	//RoadlineHalfRight->SetupAttachment(Roadline);
	//RoadlineHalfRight->SetWorldScale3D(FVector(1, 0.5, 1));
	//RoadlineHalfRight->SetRelativeLocation(FVector(250, 0, 100)); //(Y,X,Z)
	//RoadlineHalfRight->SetRelativeRotation(FRotator(0, 90, 0));

	//RoadlineHalfLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoadlineHalfLeft"));
	//RoadlineHalfLeft->SetupAttachment(Roadline);
	//RoadlineHalfLeft->SetWorldScale3D(FVector(1, 0.5, 1));
	//RoadlineHalfLeft->SetRelativeLocation(FVector(-250, 0, 100)); //(Y,X,Z)
	//RoadlineHalfLeft->SetRelativeRotation(FRotator(0, 90, 0));

	//DecalStraight = CreateDefaultSubobject<UDecalComponent>("DecalStraight");
	//DecalStraight->SetupAttachment(RootComponent);
	//DecalStraight->DecalSize = FVector(40.f, 80.f, 80.f);
	////DecalStraight->SetRelativeScale3D(FVector(3.f, 5.3f, 5.3f));
	//DecalStraight->SetRelativeLocation(FVector(0.f, 0.f, 0.0f));
	//DecalStraight->SetRelativeRotation(FRotator(0.f, 0.f, 0.f).Quaternion());
	//DecalStraight->SetVisibility(true);

	/*DecalRight = CreateDefaultSubobject<UDecalComponent>("DecalRight");
	DecalRight->SetupAttachment(RootComponent);
	DecalRight->DecalSize = FVector(15.f, 15.f, 15.f);
	DecalRight->SetRelativeScale3D(FVector(3.f, 5.3f, 5.3f));
	DecalRight->SetRelativeLocation(FVector(0.f, 0.f, 0.0f));
	DecalRight->SetRelativeRotation(FRotator(90.f, 0.f, 0.f).Quaternion());
	DecalRight->SetVisibility(false);

	DecalLeft = CreateDefaultSubobject<UDecalComponent>("DecalLeft");
	DecalLeft->SetupAttachment(RootComponent);
	DecalLeft->DecalSize = FVector(10.f, 20.f, 10.f);
	DecalLeft->SetRelativeScale3D(FVector(3.f, 5.3f, 5.3f));
	DecalLeft->SetRelativeLocation(FVector(0.f, 0.f, 0.0f));
	DecalLeft->SetRelativeRotation(FRotator(90.f, 0.f, 0.f).Quaternion());
	DecalLeft->SetVisibility(false);*/

}

void ABuildingRoad::BeginPlay()
{
	Super::BeginPlay();

	// Hie the half road line sections
	//RoadlineHalfRight->SetVisibility(false);
	//RoadlineHalfLeft->SetVisibility(false);

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