// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYBUILDING_ActorGridCell_generated_h
#error "ActorGridCell.generated.h already included, missing '#pragma once' in ActorGridCell.h"
#endif
#define CITYBUILDING_ActorGridCell_generated_h

#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_SPARSE_DATA
#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_RPC_WRAPPERS
#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorGridCell(); \
	friend struct Z_Construct_UClass_AActorGridCell_Statics; \
public: \
	DECLARE_CLASS(AActorGridCell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(AActorGridCell)


#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAActorGridCell(); \
	friend struct Z_Construct_UClass_AActorGridCell_Statics; \
public: \
	DECLARE_CLASS(AActorGridCell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBuilding"), NO_API) \
	DECLARE_SERIALIZER(AActorGridCell)


#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorGridCell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorGridCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorGridCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorGridCell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorGridCell(AActorGridCell&&); \
	NO_API AActorGridCell(const AActorGridCell&); \
public:


#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorGridCell(AActorGridCell&&); \
	NO_API AActorGridCell(const AActorGridCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorGridCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorGridCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorGridCell)


#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_PRIVATE_PROPERTY_OFFSET
#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_25_PROLOG
#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_RPC_WRAPPERS \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_INCLASS \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_PRIVATE_PROPERTY_OFFSET \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_SPARSE_DATA \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_INCLASS_NO_PURE_DECLS \
	CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYBUILDING_API UClass* StaticClass<class AActorGridCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CityBuilding_Source_CityBuilding_Grid_ActorGridCell_h


#define FOREACH_ENUM_BUILDINGTYPES(op) \
	op(BuildingTypes::None) \
	op(BuildingTypes::Zoned) \
	op(BuildingTypes::Placed) \
	op(BuildingTypes::Road) \
	op(BuildingTypes::Rail) \
	op(BuildingTypes::House) \
	op(BuildingTypes::Building) \
	op(BuildingTypes::Windmill) 

enum class BuildingTypes;
template<> CITYBUILDING_API UEnum* StaticEnum<BuildingTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
