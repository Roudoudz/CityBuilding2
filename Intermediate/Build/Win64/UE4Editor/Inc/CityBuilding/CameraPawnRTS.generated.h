// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
class USpringArmComponent;
class UCameraComponent;
#ifdef CITYBUILDING_CameraPawnRTS_generated_h
#error "CameraPawnRTS.generated.h already included, missing '#pragma once' in CameraPawnRTS.h"
#endif
#define CITYBUILDING_CameraPawnRTS_generated_h

#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_SPARSE_DATA
#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetToDefaultZoom); \
	DECLARE_FUNCTION(execSetArmRotation); \
	DECLARE_FUNCTION(execSetArmLength); \
	DECLARE_FUNCTION(execGetCurrentRotation); \
	DECLARE_FUNCTION(execGetCurrentArmLength); \
	DECLARE_FUNCTION(execGetCameraArm); \
	DECLARE_FUNCTION(execGetCamera);


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetToDefaultZoom); \
	DECLARE_FUNCTION(execSetArmRotation); \
	DECLARE_FUNCTION(execSetArmLength); \
	DECLARE_FUNCTION(execGetCurrentRotation); \
	DECLARE_FUNCTION(execGetCurrentArmLength); \
	DECLARE_FUNCTION(execGetCameraArm); \
	DECLARE_FUNCTION(execGetCamera);


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraPawnRTS(); \
	friend struct Z_Construct_UClass_ACameraPawnRTS_Statics; \
public: \
	DECLARE_CLASS(ACameraPawnRTS, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(ACameraPawnRTS)


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACameraPawnRTS(); \
	friend struct Z_Construct_UClass_ACameraPawnRTS_Statics; \
public: \
	DECLARE_CLASS(ACameraPawnRTS, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(ACameraPawnRTS)


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraPawnRTS(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraPawnRTS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraPawnRTS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraPawnRTS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraPawnRTS(ACameraPawnRTS&&); \
	NO_API ACameraPawnRTS(const ACameraPawnRTS&); \
public:


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraPawnRTS(ACameraPawnRTS&&); \
	NO_API ACameraPawnRTS(const ACameraPawnRTS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraPawnRTS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraPawnRTS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraPawnRTS)


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionSphere() { return STRUCT_OFFSET(ACameraPawnRTS, CollisionSphere); } \
	FORCEINLINE static uint32 __PPO__PlayerCamera() { return STRUCT_OFFSET(ACameraPawnRTS, PlayerCamera); } \
	FORCEINLINE static uint32 __PPO__CameraArm() { return STRUCT_OFFSET(ACameraPawnRTS, CameraArm); } \
	FORCEINLINE static uint32 __PPO__DefaultZoomLength() { return STRUCT_OFFSET(ACameraPawnRTS, DefaultZoomLength); } \
	FORCEINLINE static uint32 __PPO__DefaultCameraRotation() { return STRUCT_OFFSET(ACameraPawnRTS, DefaultCameraRotation); }


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_12_PROLOG
#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_RPC_WRAPPERS \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_INCLASS \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_INCLASS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYBUILDING_API UClass* StaticClass<class ACameraPawnRTS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CityBuilding_Source_CityBuilding_Setup_CameraPawnRTS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
