// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CityBuilding/Buildings/Buildings.h"
#include "CityBuilding/Grid/ActorGridCell.h"

#include "BuildingRoad.generated.h"

/**
 * 
 */
UCLASS()
class CITYBUILDING_API ABuildingRoad : public ABuildings
{
	GENERATED_BODY()


public:
	ABuildingRoad();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwayNorth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwaySouth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwayWest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwayEast;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwayNW;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwayNE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwaySW;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* PathwaySE;

	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<ABuildings> BP_BuildingRoad;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	

	void SpawnDirtParticle(FVector DirtLocation) override;
};
