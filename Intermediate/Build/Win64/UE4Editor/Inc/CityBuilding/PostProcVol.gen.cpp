// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/PostProcVol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcVol() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_APostProcVol_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_APostProcVol();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
// End Cross Module References
	void APostProcVol::StaticRegisterNativesAPostProcVol()
	{
	}
	UClass* Z_Construct_UClass_APostProcVol_NoRegister()
	{
		return APostProcVol::StaticClass();
	}
	struct Z_Construct_UClass_APostProcVol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostProcVol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APostProcessVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcVol_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "PostProcessVolume" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Advanced Collision Volume Brush Attachment Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "PostProcVol.h" },
		{ "ModuleRelativePath", "PostProcVol.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostProcVol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostProcVol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostProcVol_Statics::ClassParams = {
		&APostProcVol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostProcVol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcVol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostProcVol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostProcVol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostProcVol, 1086997713);
	template<> CITYBUILDING_API UClass* StaticClass<APostProcVol>()
	{
		return APostProcVol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostProcVol(Z_Construct_UClass_APostProcVol, &APostProcVol::StaticClass, TEXT("/Script/CityBuilding"), TEXT("APostProcVol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostProcVol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
