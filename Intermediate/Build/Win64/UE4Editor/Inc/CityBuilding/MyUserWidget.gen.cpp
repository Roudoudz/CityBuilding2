// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/UI/MyUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_UMyUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyUserWidget::execButtonWindmill_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonWindmill_Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execButtonBuilding_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonBuilding_Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execButtonHouse_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonHouse_Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execButtonRail_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonRail_Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execButtonRoad_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonRoad_Pressed();
		P_NATIVE_END;
	}
	void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
	{
		UClass* Class = UMyUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonBuilding_Pressed", &UMyUserWidget::execButtonBuilding_Pressed },
			{ "ButtonHouse_Pressed", &UMyUserWidget::execButtonHouse_Pressed },
			{ "ButtonRail_Pressed", &UMyUserWidget::execButtonRail_Pressed },
			{ "ButtonRoad_Pressed", &UMyUserWidget::execButtonRoad_Pressed },
			{ "ButtonWindmill_Pressed", &UMyUserWidget::execButtonWindmill_Pressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "ButtonBuilding_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "ButtonHouse_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "ButtonRail_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "ButtonRoad_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "ButtonWindmill_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
	{
		return UMyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonRoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonRoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonRail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonRail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonHouse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonHouse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonBuilding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonBuilding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWindmill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonWindmill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_ButtonBuilding_Pressed, "ButtonBuilding_Pressed" }, // 2320889977
		{ &Z_Construct_UFunction_UMyUserWidget_ButtonHouse_Pressed, "ButtonHouse_Pressed" }, // 703537362
		{ &Z_Construct_UFunction_UMyUserWidget_ButtonRail_Pressed, "ButtonRail_Pressed" }, // 802801827
		{ &Z_Construct_UFunction_UMyUserWidget_ButtonRoad_Pressed, "ButtonRoad_Pressed" }, // 1960550920
		{ &Z_Construct_UFunction_UMyUserWidget_ButtonWindmill_Pressed, "ButtonWindmill_Pressed" }, // 3977411859
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MyUserWidget.h" },
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRoad_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "Comment", "/* PROPERTIES */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
		{ "ToolTip", "PROPERTIES" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRoad = { "ButtonRoad", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ButtonRoad), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRail_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRail = { "ButtonRail", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ButtonRail), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonHouse_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonHouse = { "ButtonHouse", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ButtonHouse), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonHouse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonHouse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonBuilding_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonBuilding = { "ButtonBuilding", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ButtonBuilding), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonBuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonBuilding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonWindmill_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonWindmill = { "ButtonWindmill", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ButtonWindmill), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonWindmill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonWindmill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonRail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonHouse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonBuilding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ButtonWindmill,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
		&UMyUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyUserWidget, 32881162);
	template<> CITYBUILDING_API UClass* StaticClass<UMyUserWidget>()
	{
		return UMyUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyUserWidget(Z_Construct_UClass_UMyUserWidget, &UMyUserWidget::StaticClass, TEXT("/Script/CityBuilding"), TEXT("UMyUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
