// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CityBuilding/Setup/CameraPawnRTS.h"
#include "CameraMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CITYBUILDING_API UCameraMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCameraMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**Get attached pawn*/
	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
		ACameraPawnRTS* CameraOwner; // Declares the owner of the CameraPawnRTS class
	/**Get characetr controller ref*/
	UPROPERTY(BlueprintReadWrite)
		APlayerController* PlayerControllerRef;

protected:
	// Atributes

	//Bools
	/**Is movement disabled?*/
	UPROPERTY(Category = "Movement Variables", BlueprintReadOnly)
		bool bDisableCameraMovement;

	//Movement speeds
	/** How fast camera moves */
	UPROPERTY(Category = "Movement Variables: Movement speeds", BlueprintReadWrite)
		float DefaultMovementSpeed;
	UPROPERTY(Category = "Movement Variables: Movement speeds", BlueprintReadWrite)
		float DefaultScrollSpeed;
	UPROPERTY(Category = "Movement Variables: Movement speeds", BlueprintReadWrite)
		float AdjustScrollSpeed;
	/** Modifies default movement speed when called */
	UPROPERTY(Category = "Movement Variables: Movement speeds", BlueprintReadWrite)
		float MovementSpeedModifier;
	// Camera direction
	/** Gets forward direction of camera pawn */
	UPROPERTY(Category = "Movement Variables: Movement speeds", BlueprintReadWrite)
		FVector FaceDirection;

	// Zoom: needs both here and in CameraPawn
	/** Default camera arm length */
	UPROPERTY(Category = "Movement Variables: Zoom", BlueprintReadWrite)
		float DefaultZoomLength;
	/** Amount camera arm changes */
	UPROPERTY(Category = "Movement Variables: Zoom", BlueprintReadWrite)
		float DeltaZoomSteps;
	/** Amount rotation changes */
	UPROPERTY(Category = "Movement Variables: Zoom", BlueprintReadWrite)
		FRotator DeltaRotation;
	/** Farthest camera can get on zoom out*/
	UPROPERTY(Category = "Movement Variables: Zoom", BlueprintReadWrite)
		float MaxZoom;
	/* Closest camera on zoom in*/
	UPROPERTY(Category = "Movement Variables: Zoom", BlueprintReadWrite)
		float MinZoom;


public:
	// Methods
	// GETTERS
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Speed") //Blueprint Pure because getter
		FORCEINLINE float GetCurrentMovementSpeed() { return DefaultMovementSpeed; } 
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Speed")
		FORCEINLINE float GetSpeedModifier() { return MovementSpeedModifier; } // 1 or 2 to multiply the speed
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Speed")
		FORCEINLINE bool bCameraDisable() { return bDisableCameraMovement; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Direction")
		FVector GetCameraLocation();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Direction")
		FVector GetFaceDirection();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Direction")
		FRotator GetCameraRotation();


	// SETTERS
	UFUNCTION(BlueprintCallable, Category = "Camera Speed")
		float SetMovementSpeedModifier(float ModifierAmount);
	UFUNCTION(BlueprintCallable, Category = "Camera Speed")
		float SetMovementSpeed(float MovementSpeedAdjustement);
	UFUNCTION(BlueprintCallable, Category = "Camera Speed")
		bool SetCameraDisable(bool bDisableCamera);


	// Utility: part that makes the camera move
	// virtual only in the forward declaration
	UFUNCTION(BlueprintCallable, Category = "Camera Movement")
		virtual void BasicMovementControl(float AxisValueX, float AxisValueY);
	UFUNCTION(BlueprintCallable, Category = "Camera Movement")
		virtual void PanCamera(float RotationAmount);
	UFUNCTION(BlueprintCallable, Category = "Camera Movement")
		virtual void ResetPan();
	UFUNCTION(BlueprintCallable, Category = "Camera Movement")
		virtual void EdgeScroll();
	UFUNCTION(BlueprintCallable, Category = "Camera Zoom")
		virtual void ZoomIn();
	UFUNCTION(BlueprintCallable, Category = "Camera Zoom")
		virtual void ZoomOut();
	UFUNCTION(BlueprintCallable, Category = "Camera Zoom")
		virtual void ResetZoom();

};
