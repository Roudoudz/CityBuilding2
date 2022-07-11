// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Pawn.h"
#include "CameraPawnRTS.generated.h"

class UCameraMovementComponent;

UCLASS()
class CITYBUILDING_API ACameraPawnRTS : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACameraPawnRTS();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Camera Movement component declaration will go here
	UPROPERTY(Category = "Movement Component", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraMovementComponent* PawnMovementComponent;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

// Attributes
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root Comp")
		class USphereComponent* CollisionSphere;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class UCameraComponent* PlayerCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spring Arm")
		class USpringArmComponent* CameraArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement: Zoom")
		float DefaultZoomLength; //Needed here and in CameraComponent
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement: Zoom")
		FRotator DefaultCameraRotation;


public:
	// Getters
	/** Returns Camera */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category= "Getters")
		FORCEINLINE class UCameraComponent* GetCamera() const { return PlayerCamera; }
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
		FORCEINLINE class USpringArmComponent* GetCameraArm() const { return CameraArm; }
	/** Returns length of camera arm */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Zoom")
		float GetCurrentArmLength();
	/** Returns rotation of camera arm */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Camera Zoom")
		FRotator GetCurrentRotation();

	// Setters: change 
	UFUNCTION(BlueprintCallable, Category = "Camera Zoom")
		virtual void SetArmLength(float ChangeAmount);
	UFUNCTION(BlueprintCallable, Category = "Camera Zoom")
		virtual void SetArmRotation(FRotator ChangeAmount);
	UFUNCTION(BlueprintCallable, Category = "Camera Zoom")
		virtual void SetToDefaultZoom();

};
