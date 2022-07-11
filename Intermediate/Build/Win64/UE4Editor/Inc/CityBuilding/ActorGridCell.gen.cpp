// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Grid/ActorGridCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorGridCell() {}
// Cross Module References
	CITYBUILDING_API UEnum* Z_Construct_UEnum_CityBuilding_BuildingTypes();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	CITYBUILDING_API UClass* Z_Construct_UClass_AActorGridCell_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_AActorGridCell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* BuildingTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CityBuilding_BuildingTypes, Z_Construct_UPackage__Script_CityBuilding(), TEXT("BuildingTypes"));
		}
		return Singleton;
	}
	template<> CITYBUILDING_API UEnum* StaticEnum<BuildingTypes>()
	{
		return BuildingTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BuildingTypes(BuildingTypes_StaticEnum, TEXT("/Script/CityBuilding"), TEXT("BuildingTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CityBuilding_BuildingTypes_Hash() { return 567338755U; }
	UEnum* Z_Construct_UEnum_CityBuilding_BuildingTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CityBuilding();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BuildingTypes"), 0, Get_Z_Construct_UEnum_CityBuilding_BuildingTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BuildingTypes::None", (int64)BuildingTypes::None },
				{ "BuildingTypes::Zoned", (int64)BuildingTypes::Zoned },
				{ "BuildingTypes::Placed", (int64)BuildingTypes::Placed },
				{ "BuildingTypes::Road", (int64)BuildingTypes::Road },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Stores the tye of building this cell can be occupied by\n" },
				{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "BuildingTypes::None" },
				{ "Placed.DisplayName", "Placed" },
				{ "Placed.Name", "BuildingTypes::Placed" },
				{ "Road.DisplayName", "Road" },
				{ "Road.Name", "BuildingTypes::Road" },
				{ "ToolTip", "Stores the tye of building this cell can be occupied by" },
				{ "Zoned.DisplayName", "Zoned" },
				{ "Zoned.Name", "BuildingTypes::Zoned" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CityBuilding,
				nullptr,
				"BuildingTypes",
				"BuildingTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AActorGridCell::StaticRegisterNativesAActorGridCell()
	{
	}
	UClass* Z_Construct_UClass_AActorGridCell_NoRegister()
	{
		return AActorGridCell::StaticClass();
	}
	struct Z_Construct_UClass_AActorGridCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoText2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoText2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_Selected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_Selected;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_eOccupyingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOccupyingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOccupyingType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorGridCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid/ActorGridCell.h" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ActorGridCell" },
		{ "Comment", "/* COMPONENTS */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorGridCell, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText_MetaData[] = {
		{ "Category", "ActorGridCell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText = { "InfoText", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorGridCell, InfoText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText2_MetaData[] = {
		{ "Category", "ActorGridCell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText2 = { "InfoText2", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorGridCell, InfoText2), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Default_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/* GRID ACTORS */" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
		{ "ToolTip", "GRID ACTORS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Default = { "M_Default", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorGridCell, M_Default), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Selected_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Selected = { "M_Selected", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorGridCell, M_Selected), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Selected_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType_MetaData[] = {
		{ "Category", "Status" },
		{ "Comment", "/* STATUS OF THE ACTOR *///bool bIsOccupied = false;\n" },
		{ "ModuleRelativePath", "Grid/ActorGridCell.h" },
		{ "ToolTip", "STATUS OF THE ACTOR //bool bIsOccupied = false;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType = { "eOccupyingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorGridCell, eOccupyingType), Z_Construct_UEnum_CityBuilding_BuildingTypes, METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorGridCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_InfoText2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_M_Selected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGridCell_Statics::NewProp_eOccupyingType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorGridCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorGridCell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorGridCell_Statics::ClassParams = {
		&AActorGridCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorGridCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorGridCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorGridCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorGridCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorGridCell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorGridCell, 3820906363);
	template<> CITYBUILDING_API UClass* StaticClass<AActorGridCell>()
	{
		return AActorGridCell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorGridCell(Z_Construct_UClass_AActorGridCell, &AActorGridCell::StaticClass, TEXT("/Script/CityBuilding"), TEXT("AActorGridCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorGridCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
