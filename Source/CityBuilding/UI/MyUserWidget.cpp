// Fill out your copyright notice in the Description page of Project Settings.


#include "CityBuilding/UI/MyUserWidget.h"

#include "Components/Button.h"


void UMyUserWidget::NativeConstruct()
{
}

void UMyUserWidget::NativeOnInitialized()
{
	ButtonRoad->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonRoad_Pressed);
	ButtonRail->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonRail_Pressed);
	ButtonHouse->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonHouse_Pressed);
	ButtonBuilding->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonBuilding_Pressed);
	ButtonWindmill->OnClicked.AddDynamic(this, &UMyUserWidget::ButtonWindmill_Pressed);
}

void UMyUserWidget::ButtonRoad_Pressed()
{
	ButtonClicked = ButtonRoad;
	ToggleButtonSelected();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("Road pressed")));
}

void UMyUserWidget::ButtonRail_Pressed()
{
	ButtonClicked = ButtonRail;
	ToggleButtonSelected();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("Rail pressed")));
}

void UMyUserWidget::ButtonHouse_Pressed()
{
	ButtonClicked = ButtonHouse;
	ToggleButtonSelected();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("House pressed")));
}

void UMyUserWidget::ButtonBuilding_Pressed()
{
	ButtonClicked = ButtonBuilding;
	ToggleButtonSelected();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("Building pressed")));
}

void UMyUserWidget::ButtonWindmill_Pressed()
{
	ButtonClicked = ButtonWindmill;
	ToggleButtonSelected();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("Windmill pressed")));
}

void UMyUserWidget::ToggleButtonSelected()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, FString::Printf(TEXT("Toggle Button")));

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



