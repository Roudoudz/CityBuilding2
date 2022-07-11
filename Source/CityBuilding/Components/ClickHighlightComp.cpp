// Fill out your copyright notice in the Description page of Project Settings.

#include "ClickHighlightComp.h"

#include "CityBuilding/Buildings/Buildings.h"
#include "CityBuilding/Buildings/BuildingManager.h"
#include "CityBuilding/Setup/MyPlayerController.h"

#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UClickHighlightComp::UClickHighlightComp()
{
}


// Called when the game starts
void UClickHighlightComp::BeginPlay()
{
	Super::BeginPlay();

	/* REFERENCES */
	BuildingRef = Cast<ABuildings>(GetOwner());
	BuildingMesh = BuildingRef->Mesh;
	ControllerRef = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	BuildingManagerRef = Cast<ABuildingManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ABuildingManager::StaticClass()));

	/* DELEGATE */
	//BuildingRef->OnClicked.AddUniqueDynamic(this, &UClickHighlightComp::OnMouseClicked);
	BuildingRef->OnClicked.AddDynamic(this, &UClickHighlightComp::OnMouseClicked);
	BuildingRef->OnBeginCursorOver.AddDynamic(this, &UClickHighlightComp::MouseOverBegin);
	BuildingRef->OnEndCursorOver.AddDynamic(this, &UClickHighlightComp::MouseOverEnd);

	if (BuildingRef)
	{
		FString BuildingRefNme = BuildingRef->GetActorLabel();
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Actor found %s"), *BuildingRefNme));
	}
}

void UClickHighlightComp::OnMouseClicked(AActor* TouchedActor, FKey ButtonPressed)
{
	if (BuildingMesh && ControllerRef->bBuildingBeingSpawned == false && TouchedActor->IsA<ABuildings>())
	{
		ABuildings* BuildingClicked = Cast<ABuildings>(GetOwner());
		if (bBuildingIsSelected == false)
		{
			BuildingMesh->SetMaterial(0, BuildingRef->M_Selected);
			// Add newly selected building into array
			ControllerRef->ArrayBuildingSelected.Add(BuildingClicked);
		}
		else
		{
			BuildingMesh->SetMaterial(0, BuildingRef->M_Default);
			// Add newly selected building into array
			ControllerRef->ArrayBuildingSelected.Remove(BuildingClicked);
		}
		// Toggle selected/deselected
		bBuildingIsSelected = !bBuildingIsSelected;

		// Data table BuildingManager
		BuildingManagerRef->DisplayInfoBuildingManagerDT(BuildingClicked);

	}
}

// Highlight when started to be hovered
void UClickHighlightComp::MouseOverBegin(AActor* TouchedActor)
{
	if (BuildingMesh && TouchedActor->IsA<ABuildings>())
	{
		if (ControllerRef->bBuildingBeingSpawned == false) {
			// Activate the  Highlight Postprocess material
			BuildingMesh->SetRenderCustomDepth(true);
		}
	}
}

// Unhighlight when stopped to be hovered
void UClickHighlightComp::MouseOverEnd(AActor* TouchedActor)
{
	if (BuildingMesh && TouchedActor->IsA<ABuildings>())
	{
		// Deactivate the Highlight Postprocess material
		BuildingMesh->SetRenderCustomDepth(false);
	}
}


