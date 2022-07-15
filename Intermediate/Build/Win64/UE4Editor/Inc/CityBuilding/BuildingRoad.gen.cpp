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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalStraight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalStraight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_RoadLine_Straight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_D_RoadLine_Straight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_RoadLine_East_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_D_RoadLine_East;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_RoadLine_West_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_D_RoadLine_West;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalStraight_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09UStaticMeshComponent* Roadline;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09UStaticMeshComponent* RoadlineHalfRight;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09UStaticMeshComponent* RoadlineHalfLeft;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       UStaticMeshComponent* Roadline;\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\n       UStaticMeshComponent* RoadlineHalfRight;\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\n       UStaticMeshComponent* RoadlineHalfLeft;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalStraight = { "DecalStraight", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, DecalStraight), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalStraight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalStraight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalRight_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalRight = { "DecalRight", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, DecalRight), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalLeft_MetaData[] = {
		{ "Category", "BuildingRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalLeft = { "DecalLeft", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, DecalLeft), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_Straight_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_Straight = { "D_RoadLine_Straight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, D_RoadLine_Straight), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_Straight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_Straight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_East_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_East = { "D_RoadLine_East", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, D_RoadLine_East), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_East_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_East_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_West_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Buildings/BuildingRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_West = { "D_RoadLine_West", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingRoad, D_RoadLine_West), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_West_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_West_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalStraight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_DecalLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_Straight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_East,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingRoad_Statics::NewProp_D_RoadLine_West,
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
	IMPLEMENT_CLASS(ABuildingRoad, 642293047);
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
