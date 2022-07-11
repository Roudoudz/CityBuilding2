// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Components/ClickHighlightComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickHighlightComp() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_UClickHighlightComp_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_UClickHighlightComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UClickHighlightComp::execMouseOverEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_TouchedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseOverEnd(Z_Param_TouchedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClickHighlightComp::execMouseOverBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_TouchedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseOverBegin(Z_Param_TouchedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClickHighlightComp::execOnMouseClicked)
	{
		P_GET_OBJECT(AActor,Z_Param_TouchedActor);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseClicked(Z_Param_TouchedActor,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	void UClickHighlightComp::StaticRegisterNativesUClickHighlightComp()
	{
		UClass* Class = UClickHighlightComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MouseOverBegin", &UClickHighlightComp::execMouseOverBegin },
			{ "MouseOverEnd", &UClickHighlightComp::execMouseOverEnd },
			{ "OnMouseClicked", &UClickHighlightComp::execOnMouseClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics
	{
		struct ClickHighlightComp_eventMouseOverBegin_Parms
		{
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClickHighlightComp_eventMouseOverBegin_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::NewProp_TouchedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ClickHighlightComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClickHighlightComp, nullptr, "MouseOverBegin", nullptr, nullptr, sizeof(ClickHighlightComp_eventMouseOverBegin_Parms), Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics
	{
		struct ClickHighlightComp_eventMouseOverEnd_Parms
		{
			AActor* TouchedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClickHighlightComp_eventMouseOverEnd_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::NewProp_TouchedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ClickHighlightComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClickHighlightComp, nullptr, "MouseOverEnd", nullptr, nullptr, sizeof(ClickHighlightComp_eventMouseOverEnd_Parms), Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics
	{
		struct ClickHighlightComp_eventOnMouseClicked_Parms
		{
			AActor* TouchedActor;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClickHighlightComp_eventOnMouseClicked_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClickHighlightComp_eventOnMouseClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ClickHighlightComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClickHighlightComp, nullptr, "OnMouseClicked", nullptr, nullptr, sizeof(ClickHighlightComp_eventOnMouseClicked_Parms), Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClickHighlightComp_NoRegister()
	{
		return UClickHighlightComp::StaticClass();
	}
	struct Z_Construct_UClass_UClickHighlightComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HIghlightGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HIghlightGreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClickHighlightComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClickHighlightComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClickHighlightComp_MouseOverBegin, "MouseOverBegin" }, // 1625301247
		{ &Z_Construct_UFunction_UClickHighlightComp_MouseOverEnd, "MouseOverEnd" }, // 2285610805
		{ &Z_Construct_UFunction_UClickHighlightComp_OnMouseClicked, "OnMouseClicked" }, // 3304966740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickHighlightComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ClickHighlightComp.h" },
		{ "ModuleRelativePath", "Components/ClickHighlightComp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClickHighlightComp_Statics::NewProp_HIghlightGreen_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Store building clicked into array\n" },
		{ "ModuleRelativePath", "Components/ClickHighlightComp.h" },
		{ "ToolTip", "Store building clicked into array" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClickHighlightComp_Statics::NewProp_HIghlightGreen = { "HIghlightGreen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClickHighlightComp, HIghlightGreen), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClickHighlightComp_Statics::NewProp_HIghlightGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClickHighlightComp_Statics::NewProp_HIghlightGreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClickHighlightComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClickHighlightComp_Statics::NewProp_HIghlightGreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClickHighlightComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickHighlightComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClickHighlightComp_Statics::ClassParams = {
		&UClickHighlightComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClickHighlightComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClickHighlightComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClickHighlightComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClickHighlightComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClickHighlightComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClickHighlightComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClickHighlightComp, 743571132);
	template<> CITYBUILDING_API UClass* StaticClass<UClickHighlightComp>()
	{
		return UClickHighlightComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClickHighlightComp(Z_Construct_UClass_UClickHighlightComp, &UClickHighlightComp::StaticClass, TEXT("/Script/CityBuilding"), TEXT("UClickHighlightComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClickHighlightComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
