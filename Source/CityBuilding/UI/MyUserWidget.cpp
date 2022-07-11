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
	ToggleButtonSelected();
	
	//ButtonClicked = ButtonRoad;
	eBuildingTypeToSpawn = BuildingTypes::Road;
	ControllerRef->ToggleSpawnBuilding();
}

void UMyUserWidget::ButtonRail_Pressed()
{
	ToggleButtonSelected();
	
	//ButtonClicked = ButtonRail;
	eBuildingTypeToSpawn = BuildingTypes::Rail;
	ControllerRef->ToggleSpawnBuilding();
}

void UMyUserWidget::ButtonHouse_Pressed()
{
	//ButtonClicked = ButtonHouse;
	ToggleButtonSelected();

	eBuildingTypeToSpawn = BuildingTypes::House;
	ControllerRef->ToggleSpawnBuilding();
}

void UMyUserWidget::ButtonBuilding_Pressed()
{
	//ButtonClicked = ButtonBuilding;
	ToggleButtonSelected();

	eBuildingTypeToSpawn = BuildingTypes::Building;
	ControllerRef->ToggleSpawnBuilding();
}

void UMyUserWidget::ButtonWindmill_Pressed()
{
	//ButtonClicked = ButtonWindmill;
	ToggleButtonSelected();

	eBuildingTypeToSpawn = BuildingTypes::Windmill;
	ControllerRef->ToggleSpawnBuilding();
}


void UMyUserWidget::ToggleButtonSelected()
{
	if (bButtonIsSelected == false)
	{
		ButtonClicked->SetBackgroundColor(FLinearColor(0.f, 1.f, 0.f, 1.f));
		ButtonSelected = ButtonClicked;
		bButtonIsSelected = true;
	}
	else
	{
		if (ButtonClicked == ButtonSelected)
		{
			ButtonClicked->SetBackgroundColor(FLinearColor(1.f, 1.f, 1.f, 1.f));
			bButtonIsSelected = false;
			if (ControllerRef->bBuildingBeingSpawned == true)
			{
				ControllerRef->BuildingSpawned->Destroy();
				ControllerRef->bBuildingBeingSpawned = false;
			}
		}
		else
		{
			ButtonClicked->SetBackgroundColor(FLinearColor(0.f, 1.f, 0.f, 1.f));
			ButtonSelected->SetBackgroundColor(FLinearColor(1.f, 1.f, 1.f, 1.f));
			ButtonSelected = ButtonClicked;
			bButtonIsSelected = true;
		}
	}
}



