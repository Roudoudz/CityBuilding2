// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Buildings/BuildingRoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingRoad() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildingRoad_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildingRoad();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildings();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ABuildingRoad::StaticRegisterNativesABuildingRoad()
	{
	}
	UClass* Z_Construct_UClass_ABuildingRoad_NoRegister()
	{
		return ABuildingRoad::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingRoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalePathway_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalePathway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwayLocZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathwayLocZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwayNorth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwayNorth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwaySouth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwaySouth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwayWest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwayWest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwayEast_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwayEast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwayNW_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwayNW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwayNE_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwayNE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwaySW_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwaySW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathwaySE_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathwaySE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roadline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Roadline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRoadlineStraight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRoadlineStraight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRoadlineCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRoadlineCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MThreeLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MThreeLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MFourLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MFourLines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingRoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABuildings,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildings/BuildingRoad.h" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_ScalePathway_MetaData[] = {
		{ "Category", "MeshSetup" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_ScalePathway = { "ScalePathway", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, ScalePathway), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_ScalePathway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_ScalePathway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayLocZ_MetaData[] = {
		{ "Category", "MeshSetup" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayLocZ = { "PathwayLocZ", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwayLocZ), METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayLocZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayLocZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNorth_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNorth = { "PathwayNorth", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwayNorth), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNorth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNorth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySouth_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySouth = { "PathwaySouth", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwaySouth), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySouth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySouth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayWest_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayWest = { "PathwayWest", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwayWest), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayWest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayWest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayEast_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayEast = { "PathwayEast", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwayEast), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayEast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayEast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNW_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNW = { "PathwayNW", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwayNW), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNE_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNE = { "PathwayNE", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwayNE), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySW_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySW = { "PathwaySW", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwaySW), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySE_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySE = { "PathwaySE", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, PathwaySE), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_Roadline_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "Comment", "/* DECALS */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
		{ "ToolTip", "DECALS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_Roadline = { "Roadline", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, Roadline), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_Roadline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_Roadline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineStraight_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09UDecalComponent* RoadlineCurve;\n// Materials\n" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       UDecalComponent* RoadlineCurve;\n Materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineStraight = { "MRoadlineStraight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, MRoadlineStraight), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineStraight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineStraight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineCurve_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineCurve = { "MRoadlineCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, MRoadlineCurve), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MThreeLines_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MThreeLines = { "MThreeLines", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, MThreeLines), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MThreeLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MThreeLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MFourLines_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MFourLines = { "MFourLines", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, MFourLines), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MFourLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MFourLines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_ScalePathway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayLocZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNorth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySouth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayWest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayEast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwayNE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_PathwaySE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_Roadline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineStraight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MRoadlineCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MThreeLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_MFourLines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingRoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingRoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingRoad_Statics::ClassParams = {
		&ABuildingRoad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildingRoad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingRoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingRoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingRoad, 4266637320);
	template<> CITYBUILDING_API UClass* StaticClass<ABuildingRoad>()
	{
		return ABuildingRoad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingRoad(Z_Construct_UClass_ABuildingRoad, &ABuildingRoad::StaticClass, TEXT("/Script/CityBuilding"), TEXT("ABuildingRoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingRoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
