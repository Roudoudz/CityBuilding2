// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"

#include "CityBuilding/Components/CameraMovementComponent.h"
#include "CameraPawnRTS.h"

// Sets default values
ACameraPawnRTS::ACameraPawnRTS()
{
	// Set defaults
	DefaultZoomLength = 2000.f;
	DefaultCameraRotation = FRotator(-55.f, 0.f,0.f); //Pitch(Y), Yaw(Z), Roll(X)

	// Set root component and size
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
	SetRootComponent(CollisionSphere);
	CollisionSphere->InitSphereRadius(32.f);
	CollisionSphere->SetWorldScale3D(FVector(0.25,0.25,0.25));
	// collision profile name: used for map boundaries

	//Default settings for inheriting controller rotation
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Camera arm
	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->SetupAttachment(RootComponent);
	//CameraArm->AbsoluteRotation = false; // Rotate arm (and camera) when pawn rotates
	CameraArm->TargetArmLength = DefaultZoomLength;
	CameraArm->SetRelativeRotation(DefaultCameraRotation);
	CameraArm->bDoCollisionTest = false;
	CameraArm->bEnableCameraLag = true;
	CameraArm->bEnableCameraRotationLag = true;
	CameraArm->bInheritPitch = false;

	//Create camera
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	PlayerCamera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);

 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Attach movement component
	PawnMovementComponent = CreateDefaultSubobject<UCameraMovementComponent>(TEXT("CameraPawnMovementComponent"));
}

// Called when the game starts or when spawned
void ACameraPawnRTS::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACameraPawnRTS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/** GETTERS */
float ACameraPawnRTS::GetCurrentArmLength()
{
	return CameraArm->TargetArmLength;
}

FRotator ACameraPawnRTS::GetCurrentRotation()
{
	return CameraArm->GetTargetRotation();
}

/** SETTERS */
void ACameraPawnRTS::SetArmLength(float ChangeAmount)
{
	CameraArm->TargetArmLength += ChangeAmount;
}

void ACameraPawnRTS::SetArmRotation(FRotator ChangeAmount)
{
	const FRotator RotationMax = FRotator(-25., 0.f, 0.f); // how close to the ground the camera gets
	const FRotator RotationMin = DefaultCameraRotation;

	//Get x, the rotation change
	FRotator NewRotation = FRotator(CameraArm->GetRelativeRotation() + ChangeAmount);

	//Clamp the pitch of NewRotation
	NewRotation = NewRotation.Pitch < RotationMin.Pitch ? RotationMin : NewRotation.Pitch < RotationMax.Pitch ? NewRotation : RotationMax;

	CameraArm->SetRelativeRotation(NewRotation);
}

void ACameraPawnRTS::SetToDefaultZoom()
{
	CameraArm->TargetArmLength = DefaultZoomLength;
	CameraArm->SetRelativeRotation(DefaultCameraRotation);
}



