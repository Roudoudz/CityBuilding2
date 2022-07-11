// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Components/CameraMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraMovementComponent() {}
// Cross Module References
	CITYBUILDING_API UClass* Z_Construct_UClass_UCameraMovementComponent_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_UCameraMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CITYBUILDING_API UClass* Z_Construct_UClass_ACameraPawnRTS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCameraMovementComponent::execResetZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetZoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execEdgeScroll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EdgeScroll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execResetPan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execPanCamera)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PanCamera(Z_Param_RotationAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execBasicMovementControl)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValueX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValueY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BasicMovementControl(Z_Param_AxisValueX,Z_Param_AxisValueY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execSetCameraDisable)
	{
		P_GET_UBOOL(Z_Param_bDisableCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCameraDisable(Z_Param_bDisableCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execSetMovementSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MovementSpeedAdjustement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetMovementSpeed(Z_Param_MovementSpeedAdjustement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execSetMovementSpeedModifier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ModifierAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetMovementSpeedModifier(Z_Param_ModifierAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execGetCameraRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execGetFaceDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFaceDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execGetCameraLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execbCameraDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->bCameraDisable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execGetSpeedModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeedModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraMovementComponent::execGetCurrentMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMovementSpeed();
		P_NATIVE_END;
	}
	void UCameraMovementComponent::StaticRegisterNativesUCameraMovementComponent()
	{
		UClass* Class = UCameraMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BasicMovementControl", &UCameraMovementComponent::execBasicMovementControl },
			{ "bCameraDisable", &UCameraMovementComponent::execbCameraDisable },
			{ "EdgeScroll", &UCameraMovementComponent::execEdgeScroll },
			{ "GetCameraLocation", &UCameraMovementComponent::execGetCameraLocation },
			{ "GetCameraRotation", &UCameraMovementComponent::execGetCameraRotation },
			{ "GetCurrentMovementSpeed", &UCameraMovementComponent::execGetCurrentMovementSpeed },
			{ "GetFaceDirection", &UCameraMovementComponent::execGetFaceDirection },
			{ "GetSpeedModifier", &UCameraMovementComponent::execGetSpeedModifier },
			{ "PanCamera", &UCameraMovementComponent::execPanCamera },
			{ "ResetPan", &UCameraMovementComponent::execResetPan },
			{ "ResetZoom", &UCameraMovementComponent::execResetZoom },
			{ "SetCameraDisable", &UCameraMovementComponent::execSetCameraDisable },
			{ "SetMovementSpeed", &UCameraMovementComponent::execSetMovementSpeed },
			{ "SetMovementSpeedModifier", &UCameraMovementComponent::execSetMovementSpeedModifier },
			{ "ZoomIn", &UCameraMovementComponent::execZoomIn },
			{ "ZoomOut", &UCameraMovementComponent::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics
	{
		struct CameraMovementComponent_eventBasicMovementControl_Parms
		{
			float AxisValueX;
			float AxisValueY;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValueX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValueY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::NewProp_AxisValueX = { "AxisValueX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventBasicMovementControl_Parms, AxisValueX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::NewProp_AxisValueY = { "AxisValueY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventBasicMovementControl_Parms, AxisValueY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::NewProp_AxisValueX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::NewProp_AxisValueY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Movement" },
		{ "Comment", "// Utility: part that makes the camera move\n// virtual only in the forward declaration\n" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Utility: part that makes the camera move\nvirtual only in the forward declaration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "BasicMovementControl", nullptr, nullptr, sizeof(CameraMovementComponent_eventBasicMovementControl_Parms), Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics
	{
		struct CameraMovementComponent_eventbCameraDisable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraMovementComponent_eventbCameraDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraMovementComponent_eventbCameraDisable_Parms), &Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Speed" },
		{ "Comment", "// 1 or 2 to multiply the speed\n" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "1 or 2 to multiply the speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "bCameraDisable", nullptr, nullptr, sizeof(CameraMovementComponent_eventbCameraDisable_Parms), Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Movement" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "EdgeScroll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics
	{
		struct CameraMovementComponent_eventGetCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Direction" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "GetCameraLocation", nullptr, nullptr, sizeof(CameraMovementComponent_eventGetCameraLocation_Parms), Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics
	{
		struct CameraMovementComponent_eventGetCameraRotation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Direction" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "GetCameraRotation", nullptr, nullptr, sizeof(CameraMovementComponent_eventGetCameraRotation_Parms), Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics
	{
		struct CameraMovementComponent_eventGetCurrentMovementSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventGetCurrentMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Speed" },
		{ "Comment", "// Methods\n// GETTERS\n//Blueprint Pure because getter\n" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Methods\nGETTERS\nBlueprint Pure because getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "GetCurrentMovementSpeed", nullptr, nullptr, sizeof(CameraMovementComponent_eventGetCurrentMovementSpeed_Parms), Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics
	{
		struct CameraMovementComponent_eventGetFaceDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventGetFaceDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Direction" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "GetFaceDirection", nullptr, nullptr, sizeof(CameraMovementComponent_eventGetFaceDirection_Parms), Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics
	{
		struct CameraMovementComponent_eventGetSpeedModifier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventGetSpeedModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Speed" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "GetSpeedModifier", nullptr, nullptr, sizeof(CameraMovementComponent_eventGetSpeedModifier_Parms), Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics
	{
		struct CameraMovementComponent_eventPanCamera_Parms
		{
			float RotationAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventPanCamera_Parms, RotationAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::NewProp_RotationAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Movement" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "PanCamera", nullptr, nullptr, sizeof(CameraMovementComponent_eventPanCamera_Parms), Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_PanCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_PanCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_ResetPan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_ResetPan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Movement" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_ResetPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "ResetPan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_ResetPan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_ResetPan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_ResetPan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_ResetPan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_ResetZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_ResetZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_ResetZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "ResetZoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_ResetZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_ResetZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_ResetZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_ResetZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics
	{
		struct CameraMovementComponent_eventSetCameraDisable_Parms
		{
			bool bDisableCamera;
			bool ReturnValue;
		};
		static void NewProp_bDisableCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCamera;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_bDisableCamera_SetBit(void* Obj)
	{
		((CameraMovementComponent_eventSetCameraDisable_Parms*)Obj)->bDisableCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_bDisableCamera = { "bDisableCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraMovementComponent_eventSetCameraDisable_Parms), &Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_bDisableCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraMovementComponent_eventSetCameraDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraMovementComponent_eventSetCameraDisable_Parms), &Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_bDisableCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Speed" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "SetCameraDisable", nullptr, nullptr, sizeof(CameraMovementComponent_eventSetCameraDisable_Parms), Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics
	{
		struct CameraMovementComponent_eventSetMovementSpeed_Parms
		{
			float MovementSpeedAdjustement;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedAdjustement;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::NewProp_MovementSpeedAdjustement = { "MovementSpeedAdjustement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventSetMovementSpeed_Parms, MovementSpeedAdjustement), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventSetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::NewProp_MovementSpeedAdjustement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Speed" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "SetMovementSpeed", nullptr, nullptr, sizeof(CameraMovementComponent_eventSetMovementSpeed_Parms), Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics
	{
		struct CameraMovementComponent_eventSetMovementSpeedModifier_Parms
		{
			float ModifierAmount;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifierAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::NewProp_ModifierAmount = { "ModifierAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventSetMovementSpeedModifier_Parms, ModifierAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraMovementComponent_eventSetMovementSpeedModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::NewProp_ModifierAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Speed" },
		{ "Comment", "// SETTERS\n" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "SETTERS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "SetMovementSpeedModifier", nullptr, nullptr, sizeof(CameraMovementComponent_eventSetMovementSpeedModifier_Parms), Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "ZoomIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraMovementComponent_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraMovementComponent_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Zoom" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraMovementComponent_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraMovementComponent, nullptr, "ZoomOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraMovementComponent_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraMovementComponent_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraMovementComponent_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraMovementComponent_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraMovementComponent_NoRegister()
	{
		return UCameraMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerControllerRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCameraMovement_MetaData[];
#endif
		static void NewProp_bDisableCameraMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCameraMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultScrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultScrollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustScrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustScrollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultZoomLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultZoomLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaZoomSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaZoomSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinZoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraMovementComponent_BasicMovementControl, "BasicMovementControl" }, // 1075852081
		{ &Z_Construct_UFunction_UCameraMovementComponent_bCameraDisable, "bCameraDisable" }, // 386457510
		{ &Z_Construct_UFunction_UCameraMovementComponent_EdgeScroll, "EdgeScroll" }, // 2077067509
		{ &Z_Construct_UFunction_UCameraMovementComponent_GetCameraLocation, "GetCameraLocation" }, // 3664041436
		{ &Z_Construct_UFunction_UCameraMovementComponent_GetCameraRotation, "GetCameraRotation" }, // 3988376951
		{ &Z_Construct_UFunction_UCameraMovementComponent_GetCurrentMovementSpeed, "GetCurrentMovementSpeed" }, // 2941651810
		{ &Z_Construct_UFunction_UCameraMovementComponent_GetFaceDirection, "GetFaceDirection" }, // 2841870588
		{ &Z_Construct_UFunction_UCameraMovementComponent_GetSpeedModifier, "GetSpeedModifier" }, // 135285367
		{ &Z_Construct_UFunction_UCameraMovementComponent_PanCamera, "PanCamera" }, // 3441551773
		{ &Z_Construct_UFunction_UCameraMovementComponent_ResetPan, "ResetPan" }, // 3626851489
		{ &Z_Construct_UFunction_UCameraMovementComponent_ResetZoom, "ResetZoom" }, // 4227489201
		{ &Z_Construct_UFunction_UCameraMovementComponent_SetCameraDisable, "SetCameraDisable" }, // 330079788
		{ &Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeed, "SetMovementSpeed" }, // 2199567029
		{ &Z_Construct_UFunction_UCameraMovementComponent_SetMovementSpeedModifier, "SetMovementSpeedModifier" }, // 429911461
		{ &Z_Construct_UFunction_UCameraMovementComponent_ZoomIn, "ZoomIn" }, // 2095908154
		{ &Z_Construct_UFunction_UCameraMovementComponent_ZoomOut, "ZoomOut" }, // 563626969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CameraMovementComponent.h" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_CameraOwner_MetaData[] = {
		{ "Category", "CameraMovementComponent" },
		{ "Comment", "/**Get attached pawn*/" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Get attached pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_CameraOwner = { "CameraOwner", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, CameraOwner), Z_Construct_UClass_ACameraPawnRTS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_CameraOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_CameraOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_PlayerControllerRef_MetaData[] = {
		{ "Category", "CameraMovementComponent" },
		{ "Comment", "/**Get characetr controller ref*/" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Get characetr controller ref" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_PlayerControllerRef = { "PlayerControllerRef", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, PlayerControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_PlayerControllerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_PlayerControllerRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "Comment", "/**Is movement disabled?*/" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Is movement disabled?" },
	};
#endif
	void Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement_SetBit(void* Obj)
	{
		((UCameraMovementComponent*)Obj)->bDisableCameraMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement = { "bDisableCameraMovement", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCameraMovementComponent), &Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultMovementSpeed_MetaData[] = {
		{ "Category", "Movement Variables: Movement speeds" },
		{ "Comment", "/** How fast camera moves */" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "How fast camera moves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultMovementSpeed = { "DefaultMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, DefaultMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultScrollSpeed_MetaData[] = {
		{ "Category", "Movement Variables: Movement speeds" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultScrollSpeed = { "DefaultScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, DefaultScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultScrollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_AdjustScrollSpeed_MetaData[] = {
		{ "Category", "Movement Variables: Movement speeds" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_AdjustScrollSpeed = { "AdjustScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, AdjustScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_AdjustScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_AdjustScrollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MovementSpeedModifier_MetaData[] = {
		{ "Category", "Movement Variables: Movement speeds" },
		{ "Comment", "/** Modifies default movement speed when called */" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Modifies default movement speed when called" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MovementSpeedModifier = { "MovementSpeedModifier", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, MovementSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MovementSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MovementSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_FaceDirection_MetaData[] = {
		{ "Category", "Movement Variables: Movement speeds" },
		{ "Comment", "/** Gets forward direction of camera pawn */" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Gets forward direction of camera pawn" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_FaceDirection = { "FaceDirection", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, FaceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_FaceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_FaceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultZoomLength_MetaData[] = {
		{ "Category", "Movement Variables: Zoom" },
		{ "Comment", "/** Default camera arm length */" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Default camera arm length" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultZoomLength = { "DefaultZoomLength", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, DefaultZoomLength), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultZoomLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultZoomLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaZoomSteps_MetaData[] = {
		{ "Category", "Movement Variables: Zoom" },
		{ "Comment", "/** Amount camera arm changes */" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Amount camera arm changes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaZoomSteps = { "DeltaZoomSteps", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, DeltaZoomSteps), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaZoomSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaZoomSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Movement Variables: Zoom" },
		{ "Comment", "/** Amount rotation changes */" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Amount rotation changes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MaxZoom_MetaData[] = {
		{ "Category", "Movement Variables: Zoom" },
		{ "Comment", "/** Farthest camera can get on zoom out*/" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Farthest camera can get on zoom out" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MaxZoom = { "MaxZoom", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, MaxZoom), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MaxZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MaxZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MinZoom_MetaData[] = {
		{ "Category", "Movement Variables: Zoom" },
		{ "Comment", "/* Closest camera on zoom in*/" },
		{ "ModuleRelativePath", "Components/CameraMovementComponent.h" },
		{ "ToolTip", "Closest camera on zoom in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MinZoom = { "MinZoom", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraMovementComponent, MinZoom), METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MinZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MinZoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_CameraOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_PlayerControllerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_bDisableCameraMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultScrollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_AdjustScrollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MovementSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_FaceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DefaultZoomLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaZoomSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MaxZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMovementComponent_Statics::NewProp_MinZoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraMovementComponent_Statics::ClassParams = {
		&UCameraMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraMovementComponent, 282411687);
	template<> CITYBUILDING_API UClass* StaticClass<UCameraMovementComponent>()
	{
		return UCameraMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraMovementComponent(Z_Construct_UClass_UCameraMovementComponent, &UCameraMovementComponent::StaticClass, TEXT("/Script/CityBuilding"), TEXT("UCameraMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
