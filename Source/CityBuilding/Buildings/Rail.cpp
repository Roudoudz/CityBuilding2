// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/Rail.h"

#include "Kismet/GameplayStatics.h"



void ARail::BeginPlay()
{
	Super::BeginPlay();

	// Used to define the type of building in ActorGridCell
	eBuildingType = BuildingTypes::Rail;
}

void ARail::SpawnDirtParticle(FVector DirtLocation)
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
