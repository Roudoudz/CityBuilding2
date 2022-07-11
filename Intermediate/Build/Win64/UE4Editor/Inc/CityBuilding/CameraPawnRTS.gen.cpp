// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Setup/CameraPawnRTS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraPawnRTS() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_ACameraPawnRTS_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_ACameraPawnRTS();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CITYBUILDING_API UClass* Z_Construct_UClass_UCameraMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACameraPawnRTS::execSetToDefaultZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToDefaultZoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraPawnRTS::execSetArmRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_ChangeAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArmRotation(Z_Param_ChangeAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraPawnRTS::execSetArmLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ChangeAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArmLength(Z_Param_ChangeAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraPawnRTS::execGetCurrentRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCurrentRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraPawnRTS::execGetCurrentArmLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentArmLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraPawnRTS::execGetCameraArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpringArmComponent**)Z_Param__Result=P_THIS->GetCameraArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACameraPawnRTS::execGetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCamera();
		P_NATIVE_END;
	}
	void ACameraPawnRTS::StaticRegisterNativesACameraPawnRTS()
	{
		UClass* Class = ACameraPawnRTS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCamera", &ACameraPawnRTS::execGetCamera },
			{ "GetCameraArm", &ACameraPawnRTS::execGetCameraArm },
			{ "GetCurrentArmLength", &ACameraPawnRTS::execGetCurrentArmLength },
			{ "GetCurrentRotation", &ACameraPawnRTS::execGetCurrentRotation },
			{ "SetArmLength", &ACameraPawnRTS::execSetArmLength },
			{ "SetArmRotation", &ACameraPawnRTS::execSetArmRotation },
			{ "SetToDefaultZoom", &ACameraPawnRTS::execSetToDefaultZoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics
	{
		struct CameraPawnRTS_eventGetCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraPawnRTS_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "/** Returns Camera */" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
		{ "ToolTip", "Returns Camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "GetCamera", nullptr, nullptr, sizeof(CameraPawnRTS_eventGetCamera_Parms), Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_GetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_GetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics
	{
		struct CameraPawnRTS_eventGetCameraArm_Parms
		{
			USpringArmComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraPawnRTS_eventGetCameraArm_Parms, ReturnValue), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "GetCameraArm", nullptr, nullptr, sizeof(CameraPawnRTS_eventGetCameraArm_Parms), Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics
	{
		struct CameraPawnRTS_eventGetCurrentArmLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraPawnRTS_eventGetCurrentArmLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "Comment", "/** Returns length of camera arm */" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
		{ "ToolTip", "Returns length of camera arm" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "GetCurrentArmLength", nullptr, nullptr, sizeof(CameraPawnRTS_eventGetCurrentArmLength_Parms), Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics
	{
		struct CameraPawnRTS_eventGetCurrentRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraPawnRTS_eventGetCurrentRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "Comment", "/** Returns rotation of camera arm */" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
		{ "ToolTip", "Returns rotation of camera arm" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "GetCurrentRotation", nullptr, nullptr, sizeof(CameraPawnRTS_eventGetCurrentRotation_Parms), Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics
	{
		struct CameraPawnRTS_eventSetArmLength_Parms
		{
			float ChangeAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChangeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::NewProp_ChangeAmount = { "ChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraPawnRTS_eventSetArmLength_Parms, ChangeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::NewProp_ChangeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "Comment", "// Setters: change \n" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
		{ "ToolTip", "Setters: change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "SetArmLength", nullptr, nullptr, sizeof(CameraPawnRTS_eventSetArmLength_Parms), Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_SetArmLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_SetArmLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics
	{
		struct CameraPawnRTS_eventSetArmRotation_Parms
		{
			FRotator ChangeAmount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::NewProp_ChangeAmount = { "ChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraPawnRTS_eventSetArmRotation_Parms, ChangeAmount), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::NewProp_ChangeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "SetArmRotation", nullptr, nullptr, sizeof(CameraPawnRTS_eventSetArmRotation_Parms), Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawnRTS, nullptr, "SetToDefaultZoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACameraPawnRTS_NoRegister()
	{
		return ACameraPawnRTS::StaticClass();
	}
	struct Z_Construct_UClass_ACameraPawnRTS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultZoomLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultZoomLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCameraRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraPawnRTS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraPawnRTS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraPawnRTS_GetCamera, "GetCamera" }, // 528612047
		{ &Z_Construct_UFunction_ACameraPawnRTS_GetCameraArm, "GetCameraArm" }, // 97117721
		{ &Z_Construct_UFunction_ACameraPawnRTS_GetCurrentArmLength, "GetCurrentArmLength" }, // 2922438601
		{ &Z_Construct_UFunction_ACameraPawnRTS_GetCurrentRotation, "GetCurrentRotation" }, // 619820102
		{ &Z_Construct_UFunction_ACameraPawnRTS_SetArmLength, "SetArmLength" }, // 2167031243
		{ &Z_Construct_UFunction_ACameraPawnRTS_SetArmRotation, "SetArmRotation" }, // 2891184423
		{ &Z_Construct_UFunction_ACameraPawnRTS_SetToDefaultZoom, "SetToDefaultZoom" }, // 4140393135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Setup/CameraPawnRTS.h" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PawnMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement Component" },
		{ "Comment", "// Camera Movement component declaration will go here\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
		{ "ToolTip", "Camera Movement component declaration will go here" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PawnMovementComponent = { "PawnMovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawnRTS, PawnMovementComponent), Z_Construct_UClass_UCameraMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PawnMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PawnMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Root Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawnRTS, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CollisionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawnRTS, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CameraArm_MetaData[] = {
		{ "Category", "Spring Arm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawnRTS, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultZoomLength_MetaData[] = {
		{ "Category", "Movement: Zoom" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultZoomLength = { "DefaultZoomLength", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawnRTS, DefaultZoomLength), METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultZoomLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultZoomLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultCameraRotation_MetaData[] = {
		{ "Category", "Movement: Zoom" },
		{ "Comment", "//Needed here and in CameraComponent\n" },
		{ "ModuleRelativePath", "Setup/CameraPawnRTS.h" },
		{ "ToolTip", "Needed here and in CameraComponent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultCameraRotation = { "DefaultCameraRotation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawnRTS, DefaultCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultCameraRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraPawnRTS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PawnMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CollisionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_CameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultZoomLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawnRTS_Statics::NewProp_DefaultCameraRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraPawnRTS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraPawnRTS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraPawnRTS_Statics::ClassParams = {
		&ACameraPawnRTS::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraPawnRTS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraPawnRTS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawnRTS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraPawnRTS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraPawnRTS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraPawnRTS, 3415596114);
	template<> CITYBUILDING_API UClass* StaticClass<ACameraPawnRTS>()
	{
		return ACameraPawnRTS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraPawnRTS(Z_Construct_UClass_ACameraPawnRTS, &ACameraPawnRTS::StaticClass, TEXT("/Script/CityBuilding"), TEXT("ACameraPawnRTS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraPawnRTS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
