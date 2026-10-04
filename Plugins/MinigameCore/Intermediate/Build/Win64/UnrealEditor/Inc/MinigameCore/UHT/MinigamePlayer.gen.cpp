// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/MinigamePlayer.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigamePlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigamePlayer Function OnPlayerSpawned *********************************
static FName NAME_AMinigamePlayer_OnPlayerSpawned = FName(TEXT("OnPlayerSpawned"));
void AMinigamePlayer::OnPlayerSpawned()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigamePlayer_OnPlayerSpawned);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called when the minigame creates the player. This happens before OnMinigameStart is called\n" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
		{ "ToolTip", "Called when the minigame creates the player. This happens before OnMinigameStart is called" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigamePlayer, nullptr, "OnPlayerSpawned", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigamePlayer Function OnPlayerSpawned ***********************************

// ********** Begin Class AMinigamePlayer Function ReadyPlayer *************************************
struct Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics
{
	struct MinigamePlayer_eventReadyPlayer_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigamePlayer_eventReadyPlayer_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigamePlayer, nullptr, "ReadyPlayer", Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::MinigamePlayer_eventReadyPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::MinigamePlayer_eventReadyPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigamePlayer::execReadyPlayer)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadyPlayer(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class AMinigamePlayer Function ReadyPlayer ***************************************

// ********** Begin Class AMinigamePlayer **********************************************************
void AMinigamePlayer::StaticRegisterNativesAMinigamePlayer()
{
	UClass* Class = AMinigamePlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadyPlayer", &AMinigamePlayer::execReadyPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigamePlayer;
UClass* AMinigamePlayer::GetPrivateStaticClass()
{
	using TClass = AMinigamePlayer;
	if (!Z_Registration_Info_UClass_AMinigamePlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigamePlayer"),
			Z_Registration_Info_UClass_AMinigamePlayer.InnerSingleton,
			StaticRegisterNativesAMinigamePlayer,
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
	return Z_Registration_Info_UClass_AMinigamePlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister()
{
	return AMinigamePlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigamePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/MinigamePlayer.h" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNumber_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFlexDevice_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugInputs_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Disables debug input mapping contexts from applying to players.\n// In non-editor builds, debug inputs are always disabled\n" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
		{ "ToolTip", "Disables debug input mapping contexts from applying to players.\nIn non-editor builds, debug inputs are always disabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNumber;
	static void NewProp_bHasFlexDevice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlexDevice;
	static void NewProp_bIsReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame;
	static void NewProp_bDisableDebugInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigamePlayer_OnPlayerSpawned, "OnPlayerSpawned" }, // 234422003
		{ &Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer, "ReadyPlayer" }, // 2676108870
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigamePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigamePlayer, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigamePlayer, PlayerNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNumber_MetaData), NewProp_PlayerNumber_MetaData) };
void Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_SetBit(void* Obj)
{
	((AMinigamePlayer*)Obj)->bHasFlexDevice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice = { "bHasFlexDevice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigamePlayer), &Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFlexDevice_MetaData), NewProp_bHasFlexDevice_MetaData) };
void Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_SetBit(void* Obj)
{
	((AMinigamePlayer*)Obj)->bIsReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigamePlayer), &Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReady_MetaData), NewProp_bIsReady_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigamePlayer, Minigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minigame_MetaData), NewProp_Minigame_MetaData) };
void Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bDisableDebugInputs_SetBit(void* Obj)
{
	((AMinigamePlayer*)Obj)->bDisableDebugInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bDisableDebugInputs = { "bDisableDebugInputs", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigamePlayer), &Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bDisableDebugInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugInputs_MetaData), NewProp_bDisableDebugInputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bDisableDebugInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigamePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigamePlayer_Statics::ClassParams = {
	&AMinigamePlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigamePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigamePlayer()
{
	if (!Z_Registration_Info_UClass_AMinigamePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigamePlayer.OuterSingleton, Z_Construct_UClass_AMinigamePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigamePlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigamePlayer);
AMinigamePlayer::~AMinigamePlayer() {}
// ********** End Class AMinigamePlayer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigamePlayer, AMinigamePlayer::StaticClass, TEXT("AMinigamePlayer"), &Z_Registration_Info_UClass_AMinigamePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigamePlayer), 3976987438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h__Script_MinigameCore_540765088(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
