// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Buildings/Buildings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildings() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildings_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildings();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_UClickHighlightComp_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CITYBUILDING_API UEnum* Z_Construct_UEnum_CityBuilding_BuildingTypes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void ABuildings::StaticRegisterNativesABuildings()
	{
	}
	UClass* Z_Construct_UClass_ABuildings_NoRegister()
	{
		return ABuildings::StaticClass();
	}
	struct Z_Construct_UClass_ABuildings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickHighlightComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickHighlightComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexBuildingWorldArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexBuildingWorldArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_eBuildingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eBuildingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eBuildingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_Selected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_Selected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_Overlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_Overlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirtEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildings/Buildings.h" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Buildings" },
		{ "Comment", "/*UPROPERTY(EditAnywhere)\n\x09\x09USceneComponent* RootComponent;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\n               USceneComponent* RootComponent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Buildings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_ClickHighlightComp_MetaData[] = {
		{ "Category", "Components|Highlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_ClickHighlightComp = { "ClickHighlightComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, ClickHighlightComp), Z_Construct_UClass_UClickHighlightComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_ClickHighlightComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_ClickHighlightComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingLocation_MetaData[] = {
		{ "Category", "Buildings | Attributes" },
		{ "Comment", "/* BUILDING ATTRIBUTES */" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
		{ "ToolTip", "BUILDING ATTRIBUTES" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingLocation = { "BuildingLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, BuildingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "Buildings | Attributes" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingName = { "BuildingName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, BuildingName), METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingType_MetaData[] = {
		{ "Category", "Buildings | Attributes" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, BuildingType), METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_IndexBuildingWorldArray_MetaData[] = {
		{ "Category", "Buildings | Attributes" },
		{ "Comment", "// assign in child class\n" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
		{ "ToolTip", "assign in child class" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_IndexBuildingWorldArray = { "IndexBuildingWorldArray", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, IndexBuildingWorldArray), METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_IndexBuildingWorldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_IndexBuildingWorldArray_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType_MetaData[] = {
		{ "Comment", "// Building type from enum BuildingTypes\n" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
		{ "ToolTip", "Building type from enum BuildingTypes" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType = { "eBuildingType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, eBuildingType), Z_Construct_UEnum_CityBuilding_BuildingTypes, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_M_Default_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_M_Default = { "M_Default", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, M_Default), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_M_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_M_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_M_Selected_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_M_Selected = { "M_Selected", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, M_Selected), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_M_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_M_Selected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_M_Overlap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_M_Overlap = { "M_Overlap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, M_Overlap), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_M_Overlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_M_Overlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildings_Statics::NewProp_DirtEffect_MetaData[] = {
		{ "Category", "Buildings" },
		{ "Comment", "// Spawn dirt particle when building spawned\n" },
		{ "ModuleRelativePath", "Buildings/Buildings.h" },
		{ "ToolTip", "Spawn dirt particle when building spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildings_Statics::NewProp_DirtEffect = { "DirtEffect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildings, DirtEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::NewProp_DirtEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::NewProp_DirtEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_ClickHighlightComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_BuildingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_IndexBuildingWorldArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_eBuildingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_M_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_M_Selected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_M_Overlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildings_Statics::NewProp_DirtEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildings_Statics::ClassParams = {
		&ABuildings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildings, 1958756957);
	template<> CITYBUILDING_API UClass* StaticClass<ABuildings>()
	{
		return ABuildings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildings(Z_Construct_UClass_ABuildings, &ABuildings::StaticClass, TEXT("/Script/CityBuilding"), TEXT("ABuildings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
