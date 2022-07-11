// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClickHighlightComp.generated.h"


class UMaterialInterface;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CITYBUILDING_API UClickHighlightComp : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UClickHighlightComp();

	class ABuildings* BuildingRef;
	class AMyPlayerController* ControllerRef;
	class UStaticMeshComponent* BuildingMesh;
	class ABuildingManager* BuildingManagerRef;

	// Building selection & highlight
	bool bBuildingIsSelected = false;
	// Store building clicked into array
	UPROPERTY(EditAnywhere, Category = Material)
		UMaterialInterface* HIghlightGreen;


	UFUNCTION()
		void OnMouseClicked(AActor* TouchedActor, FKey ButtonPressed);
	UFUNCTION()
		void MouseOverBegin(AActor* TouchedActor);
	UFUNCTION()
		void MouseOverEnd(AActor* TouchedActor);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:
};
