// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class CITYBUILDING_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/* PROPERTIES */
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* ButtonRoad;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* ButtonRail;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* ButtonHouse;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* ButtonBuilding;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* ButtonWindmill;

	/* METHODS */
	UButton* ButtonClicked;
	UButton* ButtonSelected;
	bool bButtonIsSelected = false;

	UFUNCTION()
		void ButtonRoad_Pressed();
	UFUNCTION()
		void ButtonRail_Pressed();
	UFUNCTION()
		void ButtonHouse_Pressed();
	UFUNCTION()
		void ButtonBuilding_Pressed();
	UFUNCTION()
		void ButtonWindmill_Pressed();

	void ToggleButtonSelected();

protected:
	virtual void NativeConstruct() override;
	void NativeOnInitialized() override;

};
