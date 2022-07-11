// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h" //needed to cast PlayerController
#include "GameFramework/PlayerController.h" //needed to cast PlayerController
#include "Kismet/GameplayStatics.h" //needed to cast PlayerController

#include "CityBuilding/Setup/CameraPawnRTS.h"

#include "CameraMovementComponent.h"

// Sets default values for this component's properties
UCameraMovementComponent::UCameraMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;

	// Set default attributes
	bDisableCameraMovement = false;
	DefaultMovementSpeed = 30.f;
	DefaultScrollSpeed = 20.f;
	AdjustScrollSpeed = 50.f; // adds that amount to the scroll speed horizontal & vertical
	MovementSpeedModifier = 1.f;
	DefaultZoomLength = 2000.f;
	DeltaZoomSteps = 100.f;
	MaxZoom = 300.f; //closest camera gets to the map
	MinZoom = 2500.f; //Farthest camera gets
	DeltaRotation = FRotator(5.5f, 0.0f, 0.0f); //7.5 is step change to zoom from default (1350) to min (300)
}

// Called when the game starts
void UCameraMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// Get the camera owner
	CameraOwner = Cast<ACameraPawnRTS>(GetOwner()); // Populates owner of the CameraPawnRTS class
	PlayerControllerRef = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0)); // Populates PlayerControllerRef

	/* Set the mouse in the middle of the viewport*/
	int32 ViewPortStartX;
	int32 ViewPortStartY;
	PlayerControllerRef->GetViewportSize(ViewPortStartX, ViewPortStartY);
	PlayerControllerRef->SetMouseLocation(ViewPortStartX / 2, ViewPortStartY / 2);
}

// Called every frame
void UCameraMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Getters
FVector UCameraMovementComponent::GetCameraLocation()
{
	return CameraOwner->GetActorLocation();
}

FVector UCameraMovementComponent::GetFaceDirection()
{
	return CameraOwner->GetActorForwardVector();
}

FRotator UCameraMovementComponent::GetCameraRotation()
{
	return CameraOwner->GetActorRotation();
}

// Setters
float UCameraMovementComponent::SetMovementSpeedModifier(float ModifierAmount)
{
	// Multiply the speed in by 1 (disabled) or 2 (enabled)
	return MovementSpeedModifier = ModifierAmount; 
}

float UCameraMovementComponent::SetMovementSpeed(float MovementSpeedAdjustement)
{
	return DefaultMovementSpeed = MovementSpeedAdjustement;
}

bool UCameraMovementComponent::SetCameraDisable(bool bDisableCamera)
{
	return bDisableCameraMovement = bDisableCamera;
}

// Basic movement controls
/* Movement control WASD */
void UCameraMovementComponent::BasicMovementControl(float AxisValueX, float AxisValueY)
{
	// Set variables used in movement calculation
	float MovementValueX;
	float MovementValueY;
	FVector MovementX;
	FVector MovementY;

	if (!bCameraDisable())
	{
		//This if statement handles diagonal movement, because the following if statements alone are exclusive to each other
		if (AxisValueX != 0 && AxisValueY != 0)
		{
			MovementValueX = AxisValueX * GetCurrentMovementSpeed() * GetSpeedModifier();
			MovementX = FVector(MovementValueX, 0.f, 0.f);
			MovementValueY = AxisValueY * GetCurrentMovementSpeed() * GetSpeedModifier();
			MovementY = FVector(0.f, MovementValueY, 0.f);

			CameraOwner->AddActorLocalOffset(MovementX + MovementY, true); //diagonal movement
		}
		else if (AxisValueX != 0) //input coming in the axis (W = 1 or S = -1 pressed)
		{
			MovementValueX = AxisValueX * GetCurrentMovementSpeed() * GetSpeedModifier();
			MovementX = FVector(MovementValueX, 0.f, 0.f);

			CameraOwner->AddActorLocalOffset(MovementX, true);
		}
		else if(AxisValueY != 0) //input coming in the axis (A = 1 or D = -1 pressed)
		{
			MovementValueY = AxisValueY * GetCurrentMovementSpeed() * GetSpeedModifier();
			MovementY = FVector(0.f, MovementValueY, 0.f);

			CameraOwner->AddActorLocalOffset(MovementY, true);
		}
	}
}

void UCameraMovementComponent::PanCamera(float RotationAmount)
{
	FRotator NewRotation = GetCameraRotation().Add(0, RotationAmount, 0);
	CameraOwner->SetActorRotation(NewRotation); //SetActorRotation is a method from parent class 'Actor.cpp'
}

void UCameraMovementComponent::ResetPan()
{
	CameraOwner->SetActorRotation(FRotator(0.f, 0.f, 0.f));
}

// Edge scroll: X and Y are reversed on screen in the game world
void UCameraMovementComponent::EdgeScroll()
{
	// Variables for movement
	float DeltaSpeedX;
	float DeltaSpeedY;
	FVector MovementX; // used with DeltaSpeedY
	FVector MovementY; // used with DeltaSpeedX

	// Get mouse position
	float MousePositionX = 0.f;
	float MousePositionY = 0.f;

	/* Get the DeltaTime*/
	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);

	PlayerControllerRef->GetMousePosition(MousePositionX, MousePositionY);

	// get viewport size
	int32 ViewPortX; // value 0 (left side of the screen to 1 (right side of the screen)
	int32 ViewPortY; // value 0 (top side of the screen to 1 (bottom side of the screen)
	PlayerControllerRef->GetViewportSize(ViewPortX, ViewPortY);

	// Calculate the proportions of the muse movement (we want them to be updated with the mouse movement)
	float ProportionX = MousePositionX / ViewPortX;
	float ProportionY = MousePositionY / ViewPortY;

	// corners: get proportions from X and Y 
	// Set EdgeScroll speeds based on proportions
	if (ProportionX >= .975 && ProportionY <= .025) // Top right corner
	{
		//7.07 obtained to get 10 as speed for both Y and X movement together. 
		//Pythagor rectangle triangle (A2 x B2 = C2) 
		DeltaSpeedX = sqrt(DefaultScrollSpeed * DefaultScrollSpeed) * GetSpeedModifier(); 
		DeltaSpeedY = sqrt(DefaultScrollSpeed * DefaultScrollSpeed);
		/*Pythagore w/ DefaultScrollSpeed being hypothenuse. -1 is constant to reduce slightly the speed*/

		MovementX = FVector(DeltaSpeedY, 0.f, 0.f); // Reversed x and Y for DeltaSpeed and Movement
		MovementY = FVector(0.f, DeltaSpeedX, 0.f);

		CameraOwner->AddActorLocalOffset(MovementX + MovementY, true);
		SetCameraDisable(true); // prevent the player from moving the pawn together with edgescrolling
	}
	else if (ProportionX >= .975 && ProportionY >= .975) // Bottom right
	{
		DeltaSpeedX = sqrt(DefaultScrollSpeed * DefaultScrollSpeed) * GetSpeedModifier();
		DeltaSpeedY = -sqrt(DefaultScrollSpeed * DefaultScrollSpeed);

		MovementX = FVector(DeltaSpeedY, 0.f, 0.f); // Reversed x and Y for DeltaSpeed and Movement
		MovementY = FVector(0.f, DeltaSpeedX, 0.f);

		CameraOwner->AddActorLocalOffset(MovementX + MovementY, true);
		SetCameraDisable(true); // prevent the player from moving the pawn together with edgescrolling
	}
	else if (ProportionX <= .025 && ProportionY <= .025) // Top left
	{
		DeltaSpeedX = -sqrt(DefaultScrollSpeed * DefaultScrollSpeed) * GetSpeedModifier(); //did not understand where this 7.07 came from
		DeltaSpeedY = sqrt(DefaultScrollSpeed * DefaultScrollSpeed);

		MovementX = FVector(DeltaSpeedY, 0.f, 0.f); // Reversed x and Y for DeltaSpeed and Movement
		MovementY = FVector(0.f, DeltaSpeedX, 0.f);

		CameraOwner->AddActorLocalOffset(MovementX + MovementY, true);
		SetCameraDisable(true); // prevent the player from moving the pawn together with edgescrolling
	}
	else if (ProportionX <= .025 && ProportionY >= .975) // Bottom left
	{
		DeltaSpeedX = -sqrt(DefaultScrollSpeed * DefaultScrollSpeed) * GetSpeedModifier(); //did not understand where this 7.07 came from
		DeltaSpeedY = -sqrt(DefaultScrollSpeed * DefaultScrollSpeed);

		MovementX = FVector(DeltaSpeedY, 0.f, 0.f); // Reversed x and Y for DeltaSpeed and Movement
		MovementY = FVector(0.f, DeltaSpeedX, 0.f);

		CameraOwner->AddActorLocalOffset(MovementX + MovementY, true);
		SetCameraDisable(true); // Disable WASD keys temporarily to prevent the player from moving the pawn together with edgescrolling
	}
	else if(ProportionX >= .975) //Far right
	{
		DeltaSpeedX = DefaultScrollSpeed * GetSpeedModifier() * DeltaTime * AdjustScrollSpeed;
		DeltaSpeedY = 0;

		MovementY = FVector(0.f, DeltaSpeedX, 0.f);
		CameraOwner->AddActorLocalOffset(MovementY, true);
		SetCameraDisable(true);
	}
	else if (ProportionX <= .025) //Far left
	{
		DeltaSpeedX = -DefaultScrollSpeed * GetSpeedModifier() * DeltaTime * AdjustScrollSpeed;
		DeltaSpeedY = 0;

		MovementY = FVector(0.f, DeltaSpeedX, 0.f);
		CameraOwner->AddActorLocalOffset(MovementY, true);
		SetCameraDisable(true);
	}
	else if (ProportionY >= .975) //Bottom
	{
		DeltaSpeedX = 0 ;
		DeltaSpeedY = -DefaultScrollSpeed * GetSpeedModifier() * DeltaTime * AdjustScrollSpeed;

		MovementY = FVector(DeltaSpeedY, 0.f,  0.f);
		CameraOwner->AddActorLocalOffset(MovementY, true);
		SetCameraDisable(true);
	}
	else if (ProportionY <= .025) //Top screen
	{
		DeltaSpeedX = 0;
		DeltaSpeedY = DefaultScrollSpeed * GetSpeedModifier() * DeltaTime * AdjustScrollSpeed;

		MovementY = FVector(DeltaSpeedY, 0.f, 0.f);
		CameraOwner->AddActorLocalOffset(MovementY, true);
		SetCameraDisable(true);
	}
	else
	{
		SetCameraDisable(false);
	}
}

void UCameraMovementComponent::ZoomIn()
{
	if (CameraOwner->GetCurrentArmLength() != MaxZoom)
	{
		CameraOwner->SetArmLength(-1.f * DeltaZoomSteps); //we wnat the arm shorter -> negative
		if (CameraOwner->GetCurrentArmLength() <= DefaultZoomLength)
		{
			CameraOwner->SetArmRotation(DeltaRotation); // Camera gets more parallel to the ground as we zoom in
		}
	}
}

void UCameraMovementComponent::ZoomOut()
{
	if (CameraOwner->GetCurrentArmLength() != MinZoom)
	{
		CameraOwner->SetArmLength(1.f * DeltaZoomSteps); //we wnat the arm shorter -> negative
		if (CameraOwner->GetCurrentArmLength() <= DefaultZoomLength)
		{
			CameraOwner->SetArmRotation(-1.f * DeltaRotation); //Camera will get back to its original rotation as we zoom out
		}
	}
}

void UCameraMovementComponent::ResetZoom()
{
	CameraOwner->SetToDefaultZoom();
}

