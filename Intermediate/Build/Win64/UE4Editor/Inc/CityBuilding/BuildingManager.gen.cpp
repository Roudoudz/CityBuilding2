// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBuilding/Buildings/BuildingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingManager() {}
// Cross Module References
	CITYBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingManagerStruct();
	UPackage* Z_Construct_UPackage__Script_CityBuilding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildings_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_AActorGridCell_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildingManager_NoRegister();
	CITYBUILDING_API UClass* Z_Construct_UClass_ABuildingManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FBuildingManagerStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuildingManagerStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBuildingManagerStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CITYBUILDING_API uint32 Get_Z_Construct_UScriptStruct_FBuildingManagerStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingManagerStruct, Z_Construct_UPackage__Script_CityBuilding(), TEXT("BuildingManagerStruct"), sizeof(FBuildingManagerStruct), Get_Z_Construct_UScriptStruct_FBuildingManagerStruct_Hash());
	}
	return Singleton;
}
template<> CITYBUILDING_API UScriptStruct* StaticStruct<FBuildingManagerStruct>()
{
	return FBuildingManagerStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildingManagerStruct(FBuildingManagerStruct::StaticStruct, TEXT("/Script/CityBuilding"), TEXT("BuildingManagerStruct"), false, nullptr, nullptr);
static struct FScriptStruct_CityBuilding_StaticRegisterNativesFBuildingManagerStruct
{
	FScriptStruct_CityBuilding_StaticRegisterNativesFBuildingManagerStruct()
	{
		UScriptStruct::DeferCppStructOps<FBuildingManagerStruct>(FName(TEXT("BuildingManagerStruct")));
	}
} ScriptStruct_CityBuilding_StaticRegisterNativesFBuildingManagerStruct;
	struct Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexBuildingInWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexBuildingInWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexGridCell_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexGridCell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridCellLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridCellLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridCellRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridCellRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCellIsOccupied_MetaData[];
#endif
		static void NewProp_bCellIsOccupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCellIsOccupied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// DataTable are UStruct with more stuff inside\n" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
		{ "ToolTip", "DataTable are UStruct with more stuff inside" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingManagerStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "Comment", "// Building placed in the world\n" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
		{ "ToolTip", "Building placed in the world" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingName = { "BuildingName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, BuildingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexBuildingInWorld_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexBuildingInWorld = { "IndexBuildingInWorld", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, IndexBuildingInWorld), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexBuildingInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexBuildingInWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingLocation_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingLocation = { "BuildingLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, BuildingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingRef_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingRef = { "BuildingRef", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, BuildingRef), Z_Construct_UClass_ABuildings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexGridCell_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)\n//\x09""BuildingTypes BuildingType; // enum from ActorGridCell.h\n// Grid cell \n" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly)\n       BuildingTypes BuildingType;  enum from ActorGridCell.h\n Grid cell" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexGridCell = { "IndexGridCell", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, IndexGridCell), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexGridCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexGridCell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellLocation_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellLocation = { "GridCellLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, GridCellLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellRef_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellRef = { "GridCellRef", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildingManagerStruct, GridCellRef), Z_Construct_UClass_AActorGridCell_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied_MetaData[] = {
		{ "Category", "BuildingManagerStruct" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied_SetBit(void* Obj)
	{
		((FBuildingManagerStruct*)Obj)->bCellIsOccupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied = { "bCellIsOccupied", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBuildingManagerStruct), &Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexBuildingInWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_BuildingRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_IndexGridCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_GridCellRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::NewProp_bCellIsOccupied,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BuildingManagerStruct",
		sizeof(FBuildingManagerStruct),
		alignof(FBuildingManagerStruct),
		Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingManagerStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildingManagerStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CityBuilding();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildingManagerStruct"), sizeof(FBuildingManagerStruct), Get_Z_Construct_UScriptStruct_FBuildingManagerStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildingManagerStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildingManagerStruct_Hash() { return 1113744716U; }
	void ABuildingManager::StaticRegisterNativesABuildingManager()
	{
	}
	UClass* Z_Construct_UClass_ABuildingManager_NoRegister()
	{
		return ABuildingManager::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingManagerDT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingManagerDT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CityBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildings/BuildingManager.h" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingManager_Statics::NewProp_BuildingManagerDT_MetaData[] = {
		{ "Category", "Buildings" },
		{ "Comment", "/* DATA TABLE */" },
		{ "ModuleRelativePath", "Buildings/BuildingManager.h" },
		{ "ToolTip", "DATA TABLE" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingManager_Statics::NewProp_BuildingManagerDT = { "BuildingManagerDT", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingManager, BuildingManagerDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingManager_Statics::NewProp_BuildingManagerDT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingManager_Statics::NewProp_BuildingManagerDT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingManager_Statics::NewProp_BuildingManagerDT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingManager_Statics::ClassParams = {
		&ABuildingManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingManager, 3968304604);
	template<> CITYBUILDING_API UClass* StaticClass<ABuildingManager>()
	{
		return ABuildingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingManager(Z_Construct_UClass_ABuildingManager, &ABuildingManager::StaticClass, TEXT("/Script/CityBuilding"), TEXT("ABuildingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
