// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class ABuildings;

UCLASS()
class CITYBUILDING_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Constructor
	AMyPlayerController();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	/* REFERENCES */
	class ACameraPawnRTS* CameraPawnRef;
	class UCameraMovementComponent* CameraMovementRef;
	class APostProcessVolume* PostProcessVolRef;
	UPROPERTY(EditAnywhere, Category = "Building|Class")
		TSubclassOf<ABuildings> BuildingsClassRef;
	class AGridManager* GridManagerRef;
	class ABuildingManager* BuildingManagerRef;

	AWorldSettings* MyWorldSetting;

	/* PLAYER INPUTS*/
	void CallMouseLeftClick();
	void CallMouseRightClick();

	// Mouse location Ray-casting
	FVector MouseLocation;
	FVector MouseHit;
	FVector MouseDirection;
	FHitResult HitResult;
	FVector TraceStart;
	FVector TraceEnd;
	FCollisionQueryParams QueryParamsBuilding;

	/* CREATING BUILDINGS */
	bool bBuildingIsSpawnable = true;
	bool bBuildingBeingSpawned = false;
	UPROPERTY(EditAnywhere, Category = "Building|Spawn")
		int32 HeightSpawnBuilding = 50;

	ABuildings* BuildingSpawned;
	UPROPERTY(VisibleAnywhere, Category = Building)
		TArray<ABuildings*> BuildingsInWorldArray;
	UPROPERTY(VisibleAnywhere, Category = "Building|Selection")
		TArray<ABuildings*> ArrayBuildingSelected; // updated at runtime in 'ClickHighlighComp'

	/* DT BUILDING MANAGER:
	ADD PARAMETERS OF THE BUILDING NEWLY PLACED IN THE WORLD IN THE DATA TABLE 'BuildingManager' */
	// Index in the GridArray of the GridCellActor where the building has been placed 
	int32 IndexGridArrayBuildingPlaced;
	FVector BuildingLocation;
	int32 BuildingIndex;
	FString BuildingName;


	/*** BUILDING SPAWNING & PLACEMENT IN THE WORLD */
	void ToggleSpawnBuilding();
	UFUNCTION(BlueprintCallable)
		void SpawnBuilding();
	//void UpdateBuildingPosition(); // My alternative
	void UpdateBuildingPosition_TGDC(); //From Youtube tuto TheGameDevChannel (TGDC)
	// Snap the building to the nearest grid point
	int32 RoundX;
	int32 RoundY;

	class AActorGridCell* ClosestGridCellLocal;

	// Placement in the world
	// void PlaceBuildingInWorld(); // My alternative
	void PlaceBuildingInWorld_TGDC(); //From Youtube tuto TheGameDevChannel (TGDC)

	bool bCheckIfBuildingIsPlaceable = false;
	void CallCheckIfBuildingIsPlaceable(class AActorGridCell* ClosestGridCellDuringSpawning);

	void CallAdjustRoadWalkways(AActorGridCell* ClosestGridCellDuringSpawning);

	void DisableBuildingPhysics();
	void CallSpawnDirtParticle();


	/*** WIDGETS  **/
	// BUILDINGS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<class UMyUserWidget> BP_BuildingWidgetRef;
	// Variable to hold the asset after creating it
	UPROPERTY(BlueprintReadWrite, Category = "Widgets")
		UMyUserWidget* BuildingWidget;

	
	void CallBuildingWidget_ButtonRoad_Pressed();
	void CallBuildingWidget_ButtonRail_Pressed();
	void CallBuildingWidget_ButtonHouse_Pressed();

protected:
	void BeginPlay();
};
