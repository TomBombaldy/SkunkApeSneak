// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashGamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBashGamemode() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode();
BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister();
BASHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLoadLevelParams **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLoadLevelParams;
class UScriptStruct* FLoadLevelParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLoadLevelParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLoadLevelParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadLevelParams, (UObject*)Z_Construct_UPackage__Script_BashCore(), TEXT("LoadLevelParams"));
	}
	return Z_Registration_Info_UScriptStruct_FLoadLevelParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLoadLevelParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelToOpenName_MetaData[] = {
		{ "Category", "LoadLevel" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelToOpen_MetaData[] = {
		{ "Category", "LoadLevel" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToOpenName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelToOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadLevelParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewProp_LevelToOpenName = { "LevelToOpenName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadLevelParams, LevelToOpenName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelToOpenName_MetaData), NewProp_LevelToOpenName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewProp_LevelToOpen = { "LevelToOpen", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadLevelParams, LevelToOpen), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelToOpen_MetaData), NewProp_LevelToOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadLevelParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewProp_LevelToOpenName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewProp_LevelToOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadLevelParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	nullptr,
	&NewStructOps,
	"LoadLevelParams",
	Z_Construct_UScriptStruct_FLoadLevelParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelParams_Statics::PropPointers),
	sizeof(FLoadLevelParams),
	alignof(FLoadLevelParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadLevelParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelParams()
{
	if (!Z_Registration_Info_UScriptStruct_FLoadLevelParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLoadLevelParams.InnerSingleton, Z_Construct_UScriptStruct_FLoadLevelParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLoadLevelParams.InnerSingleton;
}
// ********** End ScriptStruct FLoadLevelParams ****************************************************

// ********** Begin Class ABashGamemode Function OnEnterTransitionFinish ***************************
struct Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called after the circular wipe\n" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
		{ "ToolTip", "Called after the circular wipe" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "OnEnterTransitionFinish", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABashGamemode::execOnEnterTransitionFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnterTransitionFinish();
	P_NATIVE_END;
}
// ********** End Class ABashGamemode Function OnEnterTransitionFinish *****************************

// ********** Begin Class ABashGamemode Function OpenLevel *****************************************
struct Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "OpenLevel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABashGamemode_OpenLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABashGamemode::execOpenLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenLevel();
	P_NATIVE_END;
}
// ********** End Class ABashGamemode Function OpenLevel *******************************************

// ********** Begin Class ABashGamemode Function PlayTransitionEffects *****************************
struct Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "PlayTransitionEffects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABashGamemode::execPlayTransitionEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayTransitionEffects();
	P_NATIVE_END;
}
// ********** End Class ABashGamemode Function PlayTransitionEffects *******************************

// ********** Begin Class ABashGamemode Function TransitionToLevel *********************************
struct Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics
{
	struct BashGamemode_eventTransitionToLevel_Parms
	{
		FLoadLevelParams loadLevelParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LoadLevel" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_loadLevelParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::NewProp_loadLevelParams = { "loadLevelParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashGamemode_eventTransitionToLevel_Parms, loadLevelParams), Z_Construct_UScriptStruct_FLoadLevelParams, METADATA_PARAMS(0, nullptr) }; // 1199184576
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::NewProp_loadLevelParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "TransitionToLevel", Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::BashGamemode_eventTransitionToLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::BashGamemode_eventTransitionToLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABashGamemode_TransitionToLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_TransitionToLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABashGamemode::execTransitionToLevel)
{
	P_GET_STRUCT(FLoadLevelParams,Z_Param_loadLevelParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TransitionToLevel(Z_Param_loadLevelParams);
	P_NATIVE_END;
}
// ********** End Class ABashGamemode Function TransitionToLevel ***********************************

// ********** Begin Class ABashGamemode ************************************************************
void ABashGamemode::StaticRegisterNativesABashGamemode()
{
	UClass* Class = ABashGamemode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnterTransitionFinish", &ABashGamemode::execOnEnterTransitionFinish },
		{ "OpenLevel", &ABashGamemode::execOpenLevel },
		{ "PlayTransitionEffects", &ABashGamemode::execPlayTransitionEffects },
		{ "TransitionToLevel", &ABashGamemode::execTransitionToLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABashGamemode;
UClass* ABashGamemode::GetPrivateStaticClass()
{
	using TClass = ABashGamemode;
	if (!Z_Registration_Info_UClass_ABashGamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BashGamemode"),
			Z_Registration_Info_UClass_ABashGamemode.InnerSingleton,
			StaticRegisterNativesABashGamemode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABashGamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABashGamemode_NoRegister()
{
	return ABashGamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABashGamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BashGamemode.h" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircularWipeClass_MetaData[] = {
		{ "Category", "BashGamemode" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircularWipeWidget_MetaData[] = {
		{ "Category", "BashGamemode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CircularWipeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CircularWipeWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish, "OnEnterTransitionFinish" }, // 960802673
		{ &Z_Construct_UFunction_ABashGamemode_OpenLevel, "OpenLevel" }, // 3378913662
		{ &Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects, "PlayTransitionEffects" }, // 1406427169
		{ &Z_Construct_UFunction_ABashGamemode_TransitionToLevel, "TransitionToLevel" }, // 1525822195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABashGamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass = { "CircularWipeClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABashGamemode, CircularWipeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCircularWipeWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircularWipeClass_MetaData), NewProp_CircularWipeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget = { "CircularWipeWidget", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABashGamemode, CircularWipeWidget), Z_Construct_UClass_UCircularWipeWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircularWipeWidget_MetaData), NewProp_CircularWipeWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABashGamemode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABashGamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABashGamemode_Statics::ClassParams = {
	&ABashGamemode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABashGamemode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABashGamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABashGamemode()
{
	if (!Z_Registration_Info_UClass_ABashGamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABashGamemode.OuterSingleton, Z_Construct_UClass_ABashGamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABashGamemode.OuterSingleton;
}
ABashGamemode::ABashGamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABashGamemode);
ABashGamemode::~ABashGamemode() {}
// ********** End Class ABashGamemode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h__Script_BashCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLoadLevelParams::StaticStruct, Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewStructOps, TEXT("LoadLevelParams"), &Z_Registration_Info_UScriptStruct_FLoadLevelParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadLevelParams), 1199184576U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABashGamemode, ABashGamemode::StaticClass, TEXT("ABashGamemode"), &Z_Registration_Info_UClass_ABashGamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABashGamemode), 1867278654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h__Script_BashCore_3537925303(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h__Script_BashCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h__Script_BashCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h__Script_BashCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
