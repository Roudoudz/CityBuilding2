// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CityBuilding/Buildings/Buildings.h"
#include "Rail.generated.h"

/**
 * 
 */
UCLASS()
class CITYBUILDING_API ARail : public ABuildings
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	
	void SpawnDirtParticle(FVector DirtLocation) override;
	
};
