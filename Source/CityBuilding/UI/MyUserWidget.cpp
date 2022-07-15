// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/UI/MyUserWidget.h"

#include "CityBuilding/Buildings/BuildingRoad.h"
#include "CityBuilding/Setup/MyPlayerController.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UMyUserWidget::NativeConstruct()
{

}

void UMyUserWidget::NativeOnInitialized()
{
	/* Ref PlayerController*/
	ControllerRef = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	ButtonRoad->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonRoad_Pressed);
	ButtonRail->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonRail_Pressed);
	ButtonHouse->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonHouse_Pressed);
	ButtonBuilding->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonBuilding_Pressed);
	ButtonWindmill->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonWindmill_Pressed);
}

void UMyUserWidget::ButtonRoad_Pressed()
{
	if (ControllerRef->bBuildingBeingSpawned == true)
	{
		ControllerRef->BuildingSpawned->Destroy();

		ButtonClicked = ButtonRoad; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		// If the building spawned was road, then do not spawn it again...
		if (ButtonSelected == ButtonClicked)
		{
			ControllerRef->bBuildingBeingSpawned = false;
			ControllerRef->bBuildingIsSpawnable = true;
		}
		//... else spawn the raod
		else
		{
			ButtonClicked = ButtonRoad; //needs to be before ToggleButtonSelected()
			ToggleButtonSelected();

			eBuildingTypeToSpawn = BuildingTypes::Road;
			ControllerRef->ToggleSpawnBuilding();
		}
	}
	else if (ControllerRef->bBuildingBeingSpawned == false)
	{
		ButtonClicked = ButtonRoad; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		eBuildingTypeToSpawn = BuildingTypes::Road;
		ControllerRef->ToggleSpawnBuilding();
	}
}

void UMyUserWidget::ButtonRail_Pressed()
{
	if (ControllerRef->bBuildingBeingSpawned == true)
	{
		ControllerRef->BuildingSpawned->Destroy();

		ButtonClicked = ButtonRail; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		// If the building spawned was rail, then do not spawn it again...
		if (ButtonSelected == ButtonClicked)
		{
			ControllerRef->bBuildingBeingSpawned = false;
			ControllerRef->bBuildingIsSpawnable = true;
		}
		//... else spawn the rail
		else
		{
			ButtonClicked = ButtonRail; //needs to be before ToggleButtonSelected()
			ToggleButtonSelected();

			eBuildingTypeToSpawn = BuildingTypes::Rail;
			ControllerRef->ToggleSpawnBuilding();
		}
	}
	else if (ControllerRef->bBuildingBeingSpawned == false)
	{
		ButtonClicked = ButtonRail; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		eBuildingTypeToSpawn = BuildingTypes::Rail;
		ControllerRef->ToggleSpawnBuilding();
	}
}

void UMyUserWidget::ButtonHouse_Pressed()
{
	if (ControllerRef->bBuildingBeingSpawned == true)
	{
		ControllerRef->BuildingSpawned->Destroy();
		ControllerRef->bBuildingBeingSpawned = false;
		ControllerRef->bBuildingIsSpawnable = true;
	}
	else if (ControllerRef->bBuildingBeingSpawned == false)
	{
		ButtonClicked = ButtonHouse; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		eBuildingTypeToSpawn = BuildingTypes::House;
		ControllerRef->ToggleSpawnBuilding();
	}
}

void UMyUserWidget::ButtonBuilding_Pressed()
{
	if (ControllerRef->bBuildingBeingSpawned == true)
	{
		ControllerRef->BuildingSpawned->Destroy();
		ControllerRef->bBuildingBeingSpawned = false;
		ControllerRef->bBuildingIsSpawnable = true;
	}
	else if (ControllerRef->bBuildingBeingSpawned == false)
	{
		ButtonClicked = ButtonBuilding; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		eBuildingTypeToSpawn = BuildingTypes::Building;
		ControllerRef->ToggleSpawnBuilding();
	}
}

void UMyUserWidget::ButtonWindmill_Pressed()
{
	if (ControllerRef->bBuildingBeingSpawned == true)
	{
		ControllerRef->BuildingSpawned->Destroy();
		ControllerRef->bBuildingBeingSpawned = false;
		ControllerRef->bBuildingIsSpawnable = true;
	}
	else if (ControllerRef->bBuildingBeingSpawned == false)
	{
		ButtonClicked = ButtonWindmill; //needs to be before ToggleButtonSelected()
		ToggleButtonSelected();

		eBuildingTypeToSpawn = BuildingTypes::Windmill;
		ControllerRef->ToggleSpawnBuilding();
	}
}


void UMyUserWidget::ToggleButtonSelected()
{
	if (bButtonIsSelected == false)
	{
		ButtonClicked->SetBackgroundColor(FLinearColor(0.f, 1.f, 0.f, 1.f)); //Set to selected
		ButtonSelected = ButtonClicked;
		bButtonIsSelected = true;
	}
	else
	{
		if (ButtonClicked == ButtonSelected)
		{
			ButtonClicked->SetBackgroundColor(FLinearColor(1.f, 1.f, 1.f, 1.f)); //Set to unselected
			bButtonIsSelected = false;
			if (ControllerRef->bBuildingBeingSpawned == true)
			{
				ControllerRef->BuildingSpawned->Destroy();
				ControllerRef->bBuildingBeingSpawned = false;
				ControllerRef->bBuildingIsSpawnable = true;
			}
		}
		else
		{
			ButtonClicked->SetBackgroundColor(FLinearColor(0.f, 1.f, 0.f, 1.f)); //Set to selected
			ButtonSelected->SetBackgroundColor(FLinearColor(1.f, 1.f, 1.f, 1.f)); //Set to unselected
			ButtonSelected = ButtonClicked;
			bButtonIsSelected = true;
		}
	}
}



