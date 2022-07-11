// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYBUILDING_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define CITYBUILDING_MyPlayerController_generated_h

#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_SPARSE_DATA
#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBuilding);


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBuilding);


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController)


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_PRIVATE_PROPERTY_OFFSET
#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_11_PROLOG
#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_RPC_WRAPPERS \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_INCLASS \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYBUILDING_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CityBuilding_Source_CityBuilding_Setup_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
