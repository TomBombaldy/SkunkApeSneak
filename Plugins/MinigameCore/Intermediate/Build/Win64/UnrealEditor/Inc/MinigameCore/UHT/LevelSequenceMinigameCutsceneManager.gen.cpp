// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cutscenes/LevelSequenceMinigameCutsceneManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLevelSequenceMinigameCutsceneManager() {}

// ********** Begin Cross Module References ********************************************************
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager();
MINIGAMECORE_API UClass* Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCutsceneManager();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULevelSequenceMinigameCutsceneManager Function InitializeLevelSequence ***
struct LevelSequenceMinigameCutsceneManager_eventInitializeLevelSequence_Parms
{
	ALevelSequenceActor* SequenceActor;
};
static FName NAME_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence = FName(TEXT("InitializeLevelSequence"));
void ULevelSequenceMinigameCutsceneManager::InitializeLevelSequence(ALevelSequenceActor* SequenceActor)
{
	UFunction* Func = FindFunctionChecked(NAME_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LevelSequenceMinigameCutsceneManager_eventInitializeLevelSequence_Parms Parms;
		Parms.SequenceActor=SequenceActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeLevelSequence_Implementation(SequenceActor);
	}
}
struct Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Initializes level sequence actor\n// By default, binds the first minigame capture to the \"Camera\" binding tag\n// If bBindSpawnedPlayersToSequence is true, spawned players are bound to binding tags \"Player0\", \"Player1\", \"Player2\", and \"Player3\" \n" },
		{ "ModuleRelativePath", "Public/Cutscenes/LevelSequenceMinigameCutsceneManager.h" },
		{ "ToolTip", "Initializes level sequence actor\nBy default, binds the first minigame capture to the \"Camera\" binding tag\nIf bBindSpawnedPlayersToSequence is true, spawned players are bound to binding tags \"Player0\", \"Player1\", \"Player2\", and \"Player3\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::NewProp_SequenceActor = { "SequenceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceMinigameCutsceneManager_eventInitializeLevelSequence_Parms, SequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::NewProp_SequenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager, nullptr, "InitializeLevelSequence", Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::PropPointers), sizeof(LevelSequenceMinigameCutsceneManager_eventInitializeLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LevelSequenceMinigameCutsceneManager_eventInitializeLevelSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceMinigameCutsceneManager::execInitializeLevelSequence)
{
	P_GET_OBJECT(ALevelSequenceActor,Z_Param_SequenceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeLevelSequence_Implementation(Z_Param_SequenceActor);
	P_NATIVE_END;
}
// ********** End Class ULevelSequenceMinigameCutsceneManager Function InitializeLevelSequence *****

// ********** Begin Class ULevelSequenceMinigameCutsceneManager Function OnLevelSequenceComplete ***
static FName NAME_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete = FName(TEXT("OnLevelSequenceComplete"));
void ULevelSequenceMinigameCutsceneManager::OnLevelSequenceComplete()
{
	UFunction* Func = FindFunctionChecked(NAME_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnLevelSequenceComplete_Implementation();
	}
}
struct Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called when the level sequence is finished\n" },
		{ "ModuleRelativePath", "Public/Cutscenes/LevelSequenceMinigameCutsceneManager.h" },
		{ "ToolTip", "Called when the level sequence is finished" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager, nullptr, "OnLevelSequenceComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceMinigameCutsceneManager::execOnLevelSequenceComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelSequenceComplete_Implementation();
	P_NATIVE_END;
}
// ********** End Class ULevelSequenceMinigameCutsceneManager Function OnLevelSequenceComplete *****

// ********** Begin Class ULevelSequenceMinigameCutsceneManager ************************************
void ULevelSequenceMinigameCutsceneManager::StaticRegisterNativesULevelSequenceMinigameCutsceneManager()
{
	UClass* Class = ULevelSequenceMinigameCutsceneManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeLevelSequence", &ULevelSequenceMinigameCutsceneManager::execInitializeLevelSequence },
		{ "OnLevelSequenceComplete", &ULevelSequenceMinigameCutsceneManager::execOnLevelSequenceComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager;
UClass* ULevelSequenceMinigameCutsceneManager::GetPrivateStaticClass()
{
	using TClass = ULevelSequenceMinigameCutsceneManager;
	if (!Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LevelSequenceMinigameCutsceneManager"),
			Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager.InnerSingleton,
			StaticRegisterNativesULevelSequenceMinigameCutsceneManager,
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
	return Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_NoRegister()
{
	return ULevelSequenceMinigameCutsceneManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A minigame cutscene that uses a level sequence. The level sequence should have Possessable bindings (Player0, Player1, etc.)\n */" },
		{ "IncludePath", "Cutscenes/LevelSequenceMinigameCutsceneManager.h" },
		{ "ModuleRelativePath", "Public/Cutscenes/LevelSequenceMinigameCutsceneManager.h" },
		{ "ToolTip", "A minigame cutscene that uses a level sequence. The level sequence should have Possessable bindings (Player0, Player1, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "ModuleRelativePath", "Public/Cutscenes/LevelSequenceMinigameCutsceneManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBindSpawnedPlayersToSequence_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "Comment", "// If this is true and bShouldSpawnPlayers, the spawned players will be bound to the level sequence\n" },
		{ "ModuleRelativePath", "Public/Cutscenes/LevelSequenceMinigameCutsceneManager.h" },
		{ "ToolTip", "If this is true and bShouldSpawnPlayers, the spawned players will be bound to the level sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
	static void NewProp_bBindSpawnedPlayersToSequence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindSpawnedPlayersToSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_InitializeLevelSequence, "InitializeLevelSequence" }, // 389447672
		{ &Z_Construct_UFunction_ULevelSequenceMinigameCutsceneManager_OnLevelSequenceComplete, "OnLevelSequenceComplete" }, // 3016669322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceMinigameCutsceneManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceMinigameCutsceneManager, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequence_MetaData), NewProp_LevelSequence_MetaData) };
void Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::NewProp_bBindSpawnedPlayersToSequence_SetBit(void* Obj)
{
	((ULevelSequenceMinigameCutsceneManager*)Obj)->bBindSpawnedPlayersToSequence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::NewProp_bBindSpawnedPlayersToSequence = { "bBindSpawnedPlayersToSequence", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelSequenceMinigameCutsceneManager), &Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::NewProp_bBindSpawnedPlayersToSequence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBindSpawnedPlayersToSequence_MetaData), NewProp_bBindSpawnedPlayersToSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::NewProp_LevelSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::NewProp_bBindSpawnedPlayersToSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMinigameCutsceneManager,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::ClassParams = {
	&ULevelSequenceMinigameCutsceneManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager.OuterSingleton, Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceMinigameCutsceneManager);
ULevelSequenceMinigameCutsceneManager::~ULevelSequenceMinigameCutsceneManager() {}
// ********** End Class ULevelSequenceMinigameCutsceneManager **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_LevelSequenceMinigameCutsceneManager_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceMinigameCutsceneManager, ULevelSequenceMinigameCutsceneManager::StaticClass, TEXT("ULevelSequenceMinigameCutsceneManager"), &Z_Registration_Info_UClass_ULevelSequenceMinigameCutsceneManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceMinigameCutsceneManager), 3497913969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_LevelSequenceMinigameCutsceneManager_h__Script_MinigameCore_312564148(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_LevelSequenceMinigameCutsceneManager_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_LevelSequenceMinigameCutsceneManager_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
