// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cutscenes/MinigameCutsceneManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameCutsceneManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCutsceneManager();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCutsceneManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMinigameCutsceneManager Function EndCutscene ****************************
struct Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cutscene" },
		{ "Comment", "// To be called by the cutscene to end the cutscene.\n// This prompts the minigame to continue with minigame flow (e.g. starting the game or transitioning to board)\n" },
		{ "ModuleRelativePath", "Public/Cutscenes/MinigameCutsceneManager.h" },
		{ "ToolTip", "To be called by the cutscene to end the cutscene.\nThis prompts the minigame to continue with minigame flow (e.g. starting the game or transitioning to board)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameCutsceneManager, nullptr, "EndCutscene", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameCutsceneManager::execEndCutscene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndCutscene();
	P_NATIVE_END;
}
// ********** End Class UMinigameCutsceneManager Function EndCutscene ******************************

// ********** Begin Class UMinigameCutsceneManager Function GetWorld *******************************
struct Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics
{
	struct MinigameCutsceneManager_eventGetWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cutscene" },
		{ "ModuleRelativePath", "Public/Cutscenes/MinigameCutsceneManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCutsceneManager_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameCutsceneManager, nullptr, "GetWorld", Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::MinigameCutsceneManager_eventGetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::MinigameCutsceneManager_eventGetWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameCutsceneManager::execGetWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
	P_NATIVE_END;
}
// ********** End Class UMinigameCutsceneManager Function GetWorld *********************************

// ********** Begin Class UMinigameCutsceneManager Function OnStartCutscene ************************
struct MinigameCutsceneManager_eventOnStartCutscene_Parms
{
	AMinigameBase* Minigame;
};
static FName NAME_UMinigameCutsceneManager_OnStartCutscene = FName(TEXT("OnStartCutscene"));
void UMinigameCutsceneManager::OnStartCutscene(AMinigameBase* Minigame)
{
	UFunction* Func = FindFunctionChecked(NAME_UMinigameCutsceneManager_OnStartCutscene);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MinigameCutsceneManager_eventOnStartCutscene_Parms Parms;
		Parms.Minigame=Minigame;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnStartCutscene_Implementation(Minigame);
	}
}
struct Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called by the minigame when the cutscene should begin playing\n" },
		{ "ModuleRelativePath", "Public/Cutscenes/MinigameCutsceneManager.h" },
		{ "ToolTip", "Called by the minigame when the cutscene should begin playing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCutsceneManager_eventOnStartCutscene_Parms, Minigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::NewProp_Minigame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameCutsceneManager, nullptr, "OnStartCutscene", Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::PropPointers), sizeof(MinigameCutsceneManager_eventOnStartCutscene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MinigameCutsceneManager_eventOnStartCutscene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameCutsceneManager::execOnStartCutscene)
{
	P_GET_OBJECT(AMinigameBase,Z_Param_Minigame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartCutscene_Implementation(Z_Param_Minigame);
	P_NATIVE_END;
}
// ********** End Class UMinigameCutsceneManager Function OnStartCutscene **************************

// ********** Begin Class UMinigameCutsceneManager *************************************************
void UMinigameCutsceneManager::StaticRegisterNativesUMinigameCutsceneManager()
{
	UClass* Class = UMinigameCutsceneManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndCutscene", &UMinigameCutsceneManager::execEndCutscene },
		{ "GetWorld", &UMinigameCutsceneManager::execGetWorld },
		{ "OnStartCutscene", &UMinigameCutsceneManager::execOnStartCutscene },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMinigameCutsceneManager;
UClass* UMinigameCutsceneManager::GetPrivateStaticClass()
{
	using TClass = UMinigameCutsceneManager;
	if (!Z_Registration_Info_UClass_UMinigameCutsceneManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameCutsceneManager"),
			Z_Registration_Info_UClass_UMinigameCutsceneManager.InnerSingleton,
			StaticRegisterNativesUMinigameCutsceneManager,
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
	return Z_Registration_Info_UClass_UMinigameCutsceneManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UMinigameCutsceneManager_NoRegister()
{
	return UMinigameCutsceneManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMinigameCutsceneManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages the behavior of minigame cutscenes when the minigame ends or completes.\n */" },
		{ "IncludePath", "Cutscenes/MinigameCutsceneManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cutscenes/MinigameCutsceneManager.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Manages the behavior of minigame cutscenes when the minigame ends or completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSpawnPlayers_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "Comment", "/* If true, players will be spawned by the minigame before the cutscene starts.\n\x09* This can be helpful in having the cutscene transition smoothly into gameplay, but\n\x09* isn't necessary if cutscene uses something else to represent players.\n\x09*\n\x09* If this cutscene is an end cutscene, players will already be spawned in their end-of-minigame state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Cutscenes/MinigameCutsceneManager.h" },
		{ "ToolTip", "If true, players will be spawned by the minigame before the cutscene starts.\n      * This can be helpful in having the cutscene transition smoothly into gameplay, but\n      * isn't necessary if cutscene uses something else to represent players.\n      *\n      * If this cutscene is an end cutscene, players will already be spawned in their end-of-minigame state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMinigame_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "ModuleRelativePath", "Public/Cutscenes/MinigameCutsceneManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldSpawnPlayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawnPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMinigame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameCutsceneManager_EndCutscene, "EndCutscene" }, // 926466827
		{ &Z_Construct_UFunction_UMinigameCutsceneManager_GetWorld, "GetWorld" }, // 1914722519
		{ &Z_Construct_UFunction_UMinigameCutsceneManager_OnStartCutscene, "OnStartCutscene" }, // 1592340952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameCutsceneManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMinigameCutsceneManager_Statics::NewProp_bShouldSpawnPlayers_SetBit(void* Obj)
{
	((UMinigameCutsceneManager*)Obj)->bShouldSpawnPlayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinigameCutsceneManager_Statics::NewProp_bShouldSpawnPlayers = { "bShouldSpawnPlayers", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMinigameCutsceneManager), &Z_Construct_UClass_UMinigameCutsceneManager_Statics::NewProp_bShouldSpawnPlayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldSpawnPlayers_MetaData), NewProp_bShouldSpawnPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameCutsceneManager_Statics::NewProp_CurrentMinigame = { "CurrentMinigame", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameCutsceneManager, CurrentMinigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMinigame_MetaData), NewProp_CurrentMinigame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameCutsceneManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameCutsceneManager_Statics::NewProp_bShouldSpawnPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameCutsceneManager_Statics::NewProp_CurrentMinigame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCutsceneManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinigameCutsceneManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCutsceneManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameCutsceneManager_Statics::ClassParams = {
	&UMinigameCutsceneManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMinigameCutsceneManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCutsceneManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCutsceneManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameCutsceneManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameCutsceneManager()
{
	if (!Z_Registration_Info_UClass_UMinigameCutsceneManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameCutsceneManager.OuterSingleton, Z_Construct_UClass_UMinigameCutsceneManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameCutsceneManager.OuterSingleton;
}
UMinigameCutsceneManager::UMinigameCutsceneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameCutsceneManager);
UMinigameCutsceneManager::~UMinigameCutsceneManager() {}
// ********** End Class UMinigameCutsceneManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameCutsceneManager, UMinigameCutsceneManager::StaticClass, TEXT("UMinigameCutsceneManager"), &Z_Registration_Info_UClass_UMinigameCutsceneManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameCutsceneManager), 3810835787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h__Script_MinigameCore_2379261775(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
