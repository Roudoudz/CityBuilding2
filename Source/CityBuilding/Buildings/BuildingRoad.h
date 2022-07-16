// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CityBuilding/Buildings/Buildings.h"
#include "CityBuilding/Grid/ActorGridCell.h"

#include "BuildingRoad.generated.h"

class UStaticMeshComponent;
 

UCLASS()
class CITYBUILDING_API ABuildingRoad : public ABuildings
{
	GENERATED_BODY()


public:
	ABuildingRoad();

	UPROPERTY(EditDefaultsOnly, Category = "MeshSetup")
	FVector ScalePathway;
	UPROPERTY(EditDefaultsOnly, Category = "MeshSetup")
	float PathwayLocZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwayNorth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwaySouth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwayWest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwayEast;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwayNW;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwayNE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwaySW;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PathwaySE;

	/* DECALS */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UDecalComponent* Roadline;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UDecalComponent* RoadlineCurve;
	// Materials
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* MRoadlineStraight;
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* MRoadlineCurve;
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* MThreeLines;
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* MFourLines;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	

	void SpawnDirtParticle(FVector DirtLocation) override;
};
