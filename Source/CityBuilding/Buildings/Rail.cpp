// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/Buildings/Rail.h"

void ARail::BeginPlay()
{
	Super::BeginPlay();

	// Used to define the type of building in ActorGridCell
	eBuildingType = BuildingTypes::Rail;
}

void ARail::SpawnDirtParticle(FVector DirtLocation)
{
}
