// Fill out your copyright notice in the Description page of Project Settings.

#include "CityBuilding/Buildings/Buildings.h"

#include "CityBuilding/Components/ClickHighlightComp.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#include "CityBuilding/Setup/MyPlayerController.h"

#include "Components/CapsuleComponent.h"
#include "Components/TimelineComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ABuildings::ABuildings()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetupAttachment(RootComponent);
	

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Capsule);

	// Create Components
	ClickHighlightComp = CreateDefaultSubobject<UClickHighlightComp>(TEXT("ClickHighlightComp"));
}


// Called when the game starts or when spawned
void ABuildings::BeginPlay()
{
	Super::BeginPlay();

	/* REFERENCES */
	ControllerRef = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	GridCellRef = Cast<AActorGridCell>(UGameplayStatics::GetActorOfClass(GetWorld(), AActorGridCell::StaticClass()));

	// Material
	Mesh->SetMaterial(0, M_Default);

	// Setup building type 'none' as default
	eBuildingType = BuildingTypes::None;

}

// Called from MyPlayerController
void ABuildings::SpawnDirtParticle(FVector DirtLocation)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(50, 0, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(-50, 0, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(0, 50, 0), FRotator(0.f, 0.f, 0.f));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DirtEffect, DirtLocation + FVector(0, -50, 0), FRotator(0.f, 0.f, 0.f));
}

// Called every frame
//void ABuildings::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
