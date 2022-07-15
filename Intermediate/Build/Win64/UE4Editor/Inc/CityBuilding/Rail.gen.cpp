// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Buildings/Rail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRail() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_ARail_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_ARail();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildings();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
// End Cross Module References
	void ARail::StaticRegisterNativesARail()
	{
	}
	UClass* Z_Construct_UClass_ARail_NoRegister()
	{
		return ARail::StaticClass();
	}
	struct Z_Construct_UClass_ARail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABuildings,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARail_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Buildings/Rail.h" },
		{ "ModuleRelativePath", "Buildings/Rail.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARail_Statics::ClassParams = {
		&ARail::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARail, 1193742770);
	template<> CITYBUILDING_API UClass* StaticClass<ARail>()
	{
		return ARail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARail(Z_Construct_UClass_ARail, &ARail::StaticClass, TEXT("/Script/CityBuilding"), TEXT("ARail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
