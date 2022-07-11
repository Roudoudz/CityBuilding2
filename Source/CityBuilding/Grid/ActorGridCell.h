// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorGridCell.generated.h"

// Stores the tye of building this cell can be occupied by
UENUM()
enum class BuildingTypes
{
	None	UMETA(DisplayName = "None"),
	Zoned   UMETA(DisplayName = "Zoned"),
	Placed  UMETA(DisplayName = "Placed"),
	Road    UMETA(DisplayName = "Road"),
	Rail    UMETA(DisplayName = "Rail"),
	House    UMETA(DisplayName = "House"),
	Building    UMETA(DisplayName = "Building"),
	Windmill    UMETA(DisplayName = "Windmill"),
};

class ABuildings;

UCLASS()
class CITYBUILDING_API AActorGridCell : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AActorGridCell();

	/* REFERENCES */
	class AGridManager* GridManagerRef;

	/* COMPONENTS */
	UPROPERTY(EditDefaultsOnly)
		class UStaticMeshComponent* Mesh;
	UPROPERTY(EditDefaultsOnly)
		class UTextRenderComponent* InfoText;
	UPROPERTY(EditDefaultsOnly)
		UTextRenderComponent* InfoText2;

	/* GRID ACTORS */
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* M_Default;
	UPROPERTY(EditAnywhere, Category = "Material")
		UMaterialInterface* M_Selected;

	// Reference to neighbouring GridCell actors
	AActorGridCell* NeighbourNorth = nullptr;
	AActorGridCell* NeighbourSouth = nullptr;
	AActorGridCell* NeighbourWest = nullptr;
	AActorGridCell* NeighbourEast = nullptr;

	/* STATUS OF THE ACTOR */
	//bool bIsOccupied = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
		TEnumAsByte<BuildingTypes> eOccupyingType;

	ABuildings* OccupyingActor;
	BuildingTypes OccupyingType;

	void SetOccupied(BuildingTypes BuildingOccupyingType, ABuildings* OccupyingBuildingRef);
	void DebugSetOccupy();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
