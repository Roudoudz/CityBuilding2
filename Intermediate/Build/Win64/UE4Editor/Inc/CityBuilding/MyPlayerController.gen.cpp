// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Setup/MyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CITYBUILDING_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayerController::execSpawnBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBuilding();
		P_NATIVE_END;
	}
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
		UClass* Class = AMyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnBuilding", &AMyPlayerController::execSpawnBuilding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerController_SpawnBuilding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SpawnBuilding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SpawnBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "SpawnBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SpawnBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SpawnBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_SpawnBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SpawnBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightSpawnBuilding_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeightSpawnBuilding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingsInWorldArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingsInWorldArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildingsInWorldArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayBuildingSelected_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayBuildingSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayBuildingSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_BuildingWidgetRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_BuildingWidgetRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerController_SpawnBuilding, "SpawnBuilding" }, // 2819391298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Setup/MyPlayerController.h" },
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HeightSpawnBuilding_MetaData[] = {
		{ "Category", "Building|Spawn" },
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HeightSpawnBuilding = { "HeightSpawnBuilding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, HeightSpawnBuilding), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HeightSpawnBuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HeightSpawnBuilding_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray_Inner = { "BuildingsInWorldArray", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABuildings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray = { "BuildingsInWorldArray", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, BuildingsInWorldArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected_Inner = { "ArrayBuildingSelected", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABuildings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected_MetaData[] = {
		{ "Category", "Building|Selection" },
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected = { "ArrayBuildingSelected", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, ArrayBuildingSelected), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BP_BuildingWidgetRef_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/*** WIDGETS  **/// BUILDINGS\n" },
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
		{ "ToolTip", "WIDGETS  *// BUILDINGS" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BP_BuildingWidgetRef = { "BP_BuildingWidgetRef", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, BP_BuildingWidgetRef), Z_Construct_UClass_UMyUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BP_BuildingWidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BP_BuildingWidgetRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingWidget_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "// Variable to hold the asset after creating it\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Setup/MyPlayerController.h" },
		{ "ToolTip", "Variable to hold the asset after creating it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingWidget = { "BuildingWidget", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, BuildingWidget), Z_Construct_UClass_UMyUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HeightSpawnBuilding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingsInWorldArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ArrayBuildingSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BP_BuildingWidgetRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_BuildingWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerController, 1119323753);
	template<> CITYBUILDING_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerController(Z_Construct_UClass_AMyPlayerController, &AMyPlayerController::StaticClass, TEXT("/Script/CityBuilding"), TEXT("AMyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
