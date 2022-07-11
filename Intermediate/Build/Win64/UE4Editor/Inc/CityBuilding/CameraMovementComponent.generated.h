// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
#ifdef CITYBUILDING_CameraMovementComponent_generated_h
#error "CameraMovementComponent.generated.h already included, missing '#pragma once' in CameraMovementComponent.h"
#endif
#define CITYBUILDING_CameraMovementComponent_generated_h

#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_SPARSE_DATA
#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetZoom); \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execEdgeScroll); \
	DECLARE_FUNCTION(execResetPan); \
	DECLARE_FUNCTION(execPanCamera); \
	DECLARE_FUNCTION(execBasicMovementControl); \
	DECLARE_FUNCTION(execSetCameraDisable); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execSetMovementSpeedModifier); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetFaceDirection); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execbCameraDisable); \
	DECLARE_FUNCTION(execGetSpeedModifier); \
	DECLARE_FUNCTION(execGetCurrentMovementSpeed);


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetZoom); \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execEdgeScroll); \
	DECLARE_FUNCTION(execResetPan); \
	DECLARE_FUNCTION(execPanCamera); \
	DECLARE_FUNCTION(execBasicMovementControl); \
	DECLARE_FUNCTION(execSetCameraDisable); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execSetMovementSpeedModifier); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetFaceDirection); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execbCameraDisable); \
	DECLARE_FUNCTION(execGetSpeedModifier); \
	DECLARE_FUNCTION(execGetCurrentMovementSpeed);


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraMovementComponent(); \
	friend struct Z_Construct_UClass_UCameraMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(UCameraMovementComponent)


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCameraMovementComponent(); \
	friend struct Z_Construct_UClass_UCameraMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(UCameraMovementComponent)


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraMovementComponent(UCameraMovementComponent&&); \
	NO_API UCameraMovementComponent(const UCameraMovementComponent&); \
public:


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraMovementComponent(UCameraMovementComponent&&); \
	NO_API UCameraMovementComponent(const UCameraMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraMovementComponent)


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDisableCameraMovement() { return STRUCT_OFFSET(UCameraMovementComponent, bDisableCameraMovement); } \
	FORCEINLINE static uint32 __PPO__DefaultMovementSpeed() { return STRUCT_OFFSET(UCameraMovementComponent, DefaultMovementSpeed); } \
	FORCEINLINE static uint32 __PPO__DefaultScrollSpeed() { return STRUCT_OFFSET(UCameraMovementComponent, DefaultScrollSpeed); } \
	FORCEINLINE static uint32 __PPO__AdjustScrollSpeed() { return STRUCT_OFFSET(UCameraMovementComponent, AdjustScrollSpeed); } \
	FORCEINLINE static uint32 __PPO__MovementSpeedModifier() { return STRUCT_OFFSET(UCameraMovementComponent, MovementSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__FaceDirection() { return STRUCT_OFFSET(UCameraMovementComponent, FaceDirection); } \
	FORCEINLINE static uint32 __PPO__DefaultZoomLength() { return STRUCT_OFFSET(UCameraMovementComponent, DefaultZoomLength); } \
	FORCEINLINE static uint32 __PPO__DeltaZoomSteps() { return STRUCT_OFFSET(UCameraMovementComponent, DeltaZoomSteps); } \
	FORCEINLINE static uint32 __PPO__DeltaRotation() { return STRUCT_OFFSET(UCameraMovementComponent, DeltaRotation); } \
	FORCEINLINE static uint32 __PPO__MaxZoom() { return STRUCT_OFFSET(UCameraMovementComponent, MaxZoom); } \
	FORCEINLINE static uint32 __PPO__MinZoom() { return STRUCT_OFFSET(UCameraMovementComponent, MinZoom); }


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_11_PROLOG
#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_RPC_WRAPPERS \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_INCLASS \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYBUILDING_API UClass* StaticClass<class UCameraMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CityBuilding_Source_CityBuilding_Components_CameraMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
