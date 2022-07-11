// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"

#include "CityBuilding/Grid/ActorGridCell.h"

#include "Buildings.generated.h"

UCLASS()
class CITYBUILDING_API ABuildings : public AActor
{
	GENERATED_BODY() // Cannot be moved from this line!!!

public:
	// Sets default values for this actor's properties
	ABuildings();

	/* REFERENCES */
	class AMyPlayerController* ControllerRef;
	class AActorGridCell* GridCellRef;
	
	/*UPROPERTY(EditAnywhere)
		USceneComponent* RootComponent;*/
	UPROPERTY(EditAnywhere)
		class UCapsuleComponent* Capsule;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, Category = "Components|Highlight")
		class UClickHighlightComp* ClickHighlightComp;

	/* BUILDING ATTRIBUTES */
	UPROPERTY(VisibleAnywhere, Category = "Buildings | Attributes")
		FVector BuildingLocation;
	UPROPERTY(VisibleAnywhere, Category = "Buildings | Attributes")
		FString BuildingName;
	UPROPERTY(VisibleAnywhere, Category = "Buildings | Attributes")
		FString BuildingType; // assign in child class
	UPROPERTY(VisibleAnywhere, Category = "Buildings | Attributes")
		int32 IndexBuildingWorldArray;

	// Building type from enum BuildingTypes
	UPROPERTY()
		TEnumAsByte<BuildingTypes> eBuildingType;

	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* M_Default;
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* M_Selected;
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* M_Overlap;

	// Spawn dirt particle when building spawned
	UPROPERTY(EditAnywhere)
		UParticleSystem* DirtEffect; // needs to be filled with the particle animation
	virtual void SpawnDirtParticle(FVector DirtLocation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;



};
