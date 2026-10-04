// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameBase.h"
#include "Data/ControlDisplay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameBase() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCutsceneManager_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameUI_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPracticeModeUI_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI_NoRegister();
MINIGAMECORE_API UEnum* Z_Construct_UEnum_MinigameCore_EMinigameType();
MINIGAMECORE_API UEnum* Z_Construct_UEnum_MinigameCore_ESplitBy();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature();
MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FControlDisplay();
UMG_API UClass* Z_Construct_UClass_UOverlaySlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGameStartedSignature *************************************************
struct Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "GameStartedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGameStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameStartedSignature)
{
	GameStartedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FGameStartedSignature ***************************************************

// ********** Begin Delegate FGameEndedSignature ***************************************************
struct Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "GameEndedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGameEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameEndedSignature)
{
	GameEndedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FGameEndedSignature *****************************************************

// ********** Begin Delegate FGameResetSignature ***************************************************
struct Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "GameResetSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGameResetSignature_DelegateWrapper(const FMulticastScriptDelegate& GameResetSignature)
{
	GameResetSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FGameResetSignature *****************************************************

// ********** Begin Class AMinigameBase Function AddCamera *****************************************
struct Z_Construct_UFunction_AMinigameBase_AddCamera_Statics
{
	struct MinigameBase_eventAddCamera_Parms
	{
		AMinigameCapture* Camera;
		int32 CameraNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Splitscreen" },
		{ "Comment", "/*\n\x09 *  Cameras/UI\n\x09 */// Registers a camera to be used by the splitscreen system\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  Cameras/UI\n// Registers a camera to be used by the splitscreen system" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventAddCamera_Parms, Camera), Z_Construct_UClass_AMinigameCapture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::NewProp_CameraNumber = { "CameraNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventAddCamera_Parms, CameraNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::NewProp_CameraNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "AddCamera", Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::MinigameBase_eventAddCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::MinigameBase_eventAddCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_AddCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_AddCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execAddCamera)
{
	P_GET_OBJECT(AMinigameCapture,Z_Param_Camera);
	P_GET_PROPERTY(FIntProperty,Z_Param_CameraNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCamera(Z_Param_Camera,Z_Param_CameraNumber);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function AddCamera *******************************************

// ********** Begin Class AMinigameBase Function AddWidgetToMinigameUISplit ************************
struct Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics
{
	struct MinigameBase_eventAddWidgetToMinigameUISplit_Parms
	{
		UUserWidget* InWidget;
		int32 Split;
		UOverlaySlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinigameUI" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Split;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventAddWidgetToMinigameUISplit_Parms, InWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::NewProp_Split = { "Split", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventAddWidgetToMinigameUISplit_Parms, Split), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventAddWidgetToMinigameUISplit_Parms, ReturnValue), Z_Construct_UClass_UOverlaySlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::NewProp_InWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::NewProp_Split,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "AddWidgetToMinigameUISplit", Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::MinigameBase_eventAddWidgetToMinigameUISplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::MinigameBase_eventAddWidgetToMinigameUISplit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execAddWidgetToMinigameUISplit)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_Split);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOverlaySlot**)Z_Param__Result=P_THIS->AddWidgetToMinigameUISplit(Z_Param_InWidget,Z_Param_Split);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function AddWidgetToMinigameUISplit **************************

// ********** Begin Class AMinigameBase Function CheckReady ****************************************
struct Z_Construct_UFunction_AMinigameBase_CheckReady_Statics
{
	struct MinigameBase_eventCheckReady_Parms
	{
		int32 Player;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Practice" },
		{ "Comment", "// Checks the ready status of a player in practice mode\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Checks the ready status of a player in practice mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventCheckReady_Parms, Player), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventCheckReady_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "CheckReady", Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::MinigameBase_eventCheckReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::MinigameBase_eventCheckReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_CheckReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_CheckReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execCheckReady)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CheckReady(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function CheckReady ******************************************

// ********** Begin Class AMinigameBase Function EndGame *******************************************
struct Z_Construct_UFunction_AMinigameBase_EndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
		{ "Comment", "// Ends the minigame early\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Ends the minigame early" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_EndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "EndGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_EndGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execEndGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndGame();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function EndGame *********************************************

// ********** Begin Class AMinigameBase Function GetCamera *****************************************
struct Z_Construct_UFunction_AMinigameBase_GetCamera_Statics
{
	struct MinigameBase_eventGetCamera_Parms
	{
		int32 PlayerNumber;
		AMinigameCapture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Splitscreen" },
		{ "Comment", "// Gets the camera assigned to this player through the splitscreen system\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Gets the camera assigned to this player through the splitscreen system" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetCamera_Parms, PlayerNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_AMinigameCapture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::NewProp_PlayerNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetCamera", Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::MinigameBase_eventGetCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::MinigameBase_eventGetCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMinigameCapture**)Z_Param__Result=P_THIS->GetCamera(Z_Param_PlayerNumber);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetCamera *******************************************

// ********** Begin Class AMinigameBase Function GetMinigameNumPlayers *****************************
struct Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics
{
	struct MinigameBase_eventGetMinigameNumPlayers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetMinigameNumPlayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetMinigameNumPlayers", Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::MinigameBase_eventGetMinigameNumPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::MinigameBase_eventGetMinigameNumPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetMinigameNumPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinigameNumPlayers();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetMinigameNumPlayers *******************************

// ********** Begin Class AMinigameBase Function GetMinigameWidgetRoot *****************************
struct Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics
{
	struct MinigameBase_eventGetMinigameWidgetRoot_Parms
	{
		USplitscreenUI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinigameUI" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetMinigameWidgetRoot_Parms, ReturnValue), Z_Construct_UClass_USplitscreenUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetMinigameWidgetRoot", Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::MinigameBase_eventGetMinigameWidgetRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::MinigameBase_eventGetMinigameWidgetRoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetMinigameWidgetRoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USplitscreenUI**)Z_Param__Result=P_THIS->GetMinigameWidgetRoot();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetMinigameWidgetRoot *******************************

// ********** Begin Class AMinigameBase Function GetNumCameraSplits ********************************
struct Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics
{
	struct MinigameBase_eventGetNumCameraSplits_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Splitscreen" },
		{ "Comment", "// Returns the number of camera splits this gamemode should have\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Returns the number of camera splits this gamemode should have" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetNumCameraSplits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetNumCameraSplits", Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::MinigameBase_eventGetNumCameraSplits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::MinigameBase_eventGetNumCameraSplits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetNumCameraSplits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumCameraSplits();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetNumCameraSplits **********************************

// ********** Begin Class AMinigameBase Function GetPlayer *****************************************
struct Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics
{
	struct MinigameBase_eventGetPlayer_Parms
	{
		int32 PlayerNum;
		AMinigamePlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Player" },
		{ "Comment", "/*\n\x09 *  Players & Teams\n\x09 */" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  Players & Teams" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetPlayer_Parms, PlayerNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetPlayer_Parms, ReturnValue), Z_Construct_UClass_AMinigamePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::NewProp_PlayerNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetPlayer", Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::MinigameBase_eventGetPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::MinigameBase_eventGetPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMinigamePlayer**)Z_Param__Result=P_THIS->GetPlayer(Z_Param_PlayerNum);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetPlayer *******************************************

// ********** Begin Class AMinigameBase Function GetPlayers ****************************************
struct Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics
{
	struct MinigameBase_eventGetPlayers_Parms
	{
		TArray<AMinigamePlayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Player" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMinigamePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetPlayers", Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::MinigameBase_eventGetPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::MinigameBase_eventGetPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMinigamePlayer*>*)Z_Param__Result=P_THIS->GetPlayers();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetPlayers ******************************************

// ********** Begin Class AMinigameBase Function GetPointCounter ***********************************
struct Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics
{
	struct MinigameBase_eventGetPointCounter_Parms
	{
		UBasePointCounter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Points" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetPointCounter_Parms, ReturnValue), Z_Construct_UClass_UBasePointCounter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetPointCounter", Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::MinigameBase_eventGetPointCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::MinigameBase_eventGetPointCounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetPointCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetPointCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetPointCounter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBasePointCounter**)Z_Param__Result=P_THIS->GetPointCounter();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetPointCounter *************************************

// ********** Begin Class AMinigameBase Function GetTeamType ***************************************
struct Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics
{
	struct MinigameBase_eventGetTeamType_Parms
	{
		EMinigameType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetTeamType_Parms, ReturnValue), Z_Construct_UEnum_MinigameCore_EMinigameType, METADATA_PARAMS(0, nullptr) }; // 1798098046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetTeamType", Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::MinigameBase_eventGetTeamType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::MinigameBase_eventGetTeamType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetTeamType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetTeamType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetTeamType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMinigameType*)Z_Param__Result=P_THIS->GetTeamType();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetTeamType *****************************************

// ********** Begin Class AMinigameBase Function GetTimeElapsed ************************************
struct Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics
{
	struct MinigameBase_eventGetTimeElapsed_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetTimeElapsed", Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::MinigameBase_eventGetTimeElapsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::MinigameBase_eventGetTimeElapsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetTimeElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetTimeElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetTimeElapsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetTimeElapsed();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetTimeElapsed **************************************

// ********** Begin Class AMinigameBase Function GetTimeRemaining **********************************
struct Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics
{
	struct MinigameBase_eventGetTimeRemaining_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "GetTimeRemaining", Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::MinigameBase_eventGetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::MinigameBase_eventGetTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_GetTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_GetTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execGetTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetTimeRemaining();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function GetTimeRemaining ************************************

// ********** Begin Class AMinigameBase Function IsInProgress **************************************
struct Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics
{
	struct MinigameBase_eventIsInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MinigameBase_eventIsInProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameBase_eventIsInProgress_Parms), &Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "IsInProgress", Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::MinigameBase_eventIsInProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::MinigameBase_eventIsInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_IsInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_IsInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execIsInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInProgress();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function IsInProgress ****************************************

// ********** Begin Class AMinigameBase Function IsPractice ****************************************
struct Z_Construct_UFunction_AMinigameBase_IsPractice_Statics
{
	struct MinigameBase_eventIsPractice_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MinigameBase_eventIsPractice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameBase_eventIsPractice_Parms), &Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "IsPractice", Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::MinigameBase_eventIsPractice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::MinigameBase_eventIsPractice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_IsPractice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_IsPractice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execIsPractice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPractice();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function IsPractice ******************************************

// ********** Begin Class AMinigameBase Function OnMinigameEnd *************************************
static FName NAME_AMinigameBase_OnMinigameEnd = FName(TEXT("OnMinigameEnd"));
void AMinigameBase::OnMinigameEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigameBase_OnMinigameEnd);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigameBase_OnMinigameEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_OnMinigameEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "OnMinigameEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_OnMinigameEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_OnMinigameEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_OnMinigameEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_OnMinigameEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameBase Function OnMinigameEnd ***************************************

// ********** Begin Class AMinigameBase Function OnMinigameReset ***********************************
static FName NAME_AMinigameBase_OnMinigameReset = FName(TEXT("OnMinigameReset"));
void AMinigameBase::OnMinigameReset()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigameBase_OnMinigameReset);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigameBase_OnMinigameReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_OnMinigameReset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "OnMinigameReset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_OnMinigameReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_OnMinigameReset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_OnMinigameReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_OnMinigameReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameBase Function OnMinigameReset *************************************

// ********** Begin Class AMinigameBase Function OnMinigameStart ***********************************
static FName NAME_AMinigameBase_OnMinigameStart = FName(TEXT("OnMinigameStart"));
void AMinigameBase::OnMinigameStart()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigameBase_OnMinigameStart);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigameBase_OnMinigameStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_OnMinigameStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "OnMinigameStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_OnMinigameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_OnMinigameStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_OnMinigameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_OnMinigameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameBase Function OnMinigameStart *************************************

// ********** Begin Class AMinigameBase Function PlayMinigameTransitionEffects *********************
struct Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinigameUI" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "PlayMinigameTransitionEffects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execPlayMinigameTransitionEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayMinigameTransitionEffects();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function PlayMinigameTransitionEffects ***********************

// ********** Begin Class AMinigameBase Function ReadyPlayer ***************************************
struct Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics
{
	struct MinigameBase_eventReadyPlayer_Parms
	{
		int32 Player;
		bool state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame|Practice" },
		{ "Comment", "/*\n\x09 *  Game flow\n\x09 */// Readies a Player to exit practice mode\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  Game flow\n// Readies a Player to exit practice mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static void NewProp_state_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventReadyPlayer_Parms, Player), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::NewProp_state_SetBit(void* Obj)
{
	((MinigameBase_eventReadyPlayer_Parms*)Obj)->state = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameBase_eventReadyPlayer_Parms), &Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::NewProp_state_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::NewProp_state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "ReadyPlayer", Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::MinigameBase_eventReadyPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::MinigameBase_eventReadyPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_ReadyPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_ReadyPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execReadyPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Player);
	P_GET_UBOOL(Z_Param_state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadyPlayer(Z_Param_Player,Z_Param_state);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function ReadyPlayer *****************************************

// ********** Begin Class AMinigameBase Function SetTimeRemaining **********************************
struct Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics
{
	struct MinigameBase_eventSetTimeRemaining_Parms
	{
		double time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameBase_eventSetTimeRemaining_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "SetTimeRemaining", Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::MinigameBase_eventSetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::MinigameBase_eventSetTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameBase_SetTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_SetTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execSetTimeRemaining)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeRemaining(Z_Param_time);
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function SetTimeRemaining ************************************

// ********** Begin Class AMinigameBase Function SetupGame *****************************************
struct Z_Construct_UFunction_AMinigameBase_SetupGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_SetupGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "SetupGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_SetupGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_SetupGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_SetupGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_SetupGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execSetupGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupGame();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function SetupGame *******************************************

// ********** Begin Class AMinigameBase Function StartGame *****************************************
struct Z_Construct_UFunction_AMinigameBase_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameBase_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameBase, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameBase_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameBase_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameBase_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameBase_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameBase::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// ********** End Class AMinigameBase Function StartGame *******************************************

// ********** Begin Class AMinigameBase ************************************************************
void AMinigameBase::StaticRegisterNativesAMinigameBase()
{
	UClass* Class = AMinigameBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCamera", &AMinigameBase::execAddCamera },
		{ "AddWidgetToMinigameUISplit", &AMinigameBase::execAddWidgetToMinigameUISplit },
		{ "CheckReady", &AMinigameBase::execCheckReady },
		{ "EndGame", &AMinigameBase::execEndGame },
		{ "GetCamera", &AMinigameBase::execGetCamera },
		{ "GetMinigameNumPlayers", &AMinigameBase::execGetMinigameNumPlayers },
		{ "GetMinigameWidgetRoot", &AMinigameBase::execGetMinigameWidgetRoot },
		{ "GetNumCameraSplits", &AMinigameBase::execGetNumCameraSplits },
		{ "GetPlayer", &AMinigameBase::execGetPlayer },
		{ "GetPlayers", &AMinigameBase::execGetPlayers },
		{ "GetPointCounter", &AMinigameBase::execGetPointCounter },
		{ "GetTeamType", &AMinigameBase::execGetTeamType },
		{ "GetTimeElapsed", &AMinigameBase::execGetTimeElapsed },
		{ "GetTimeRemaining", &AMinigameBase::execGetTimeRemaining },
		{ "IsInProgress", &AMinigameBase::execIsInProgress },
		{ "IsPractice", &AMinigameBase::execIsPractice },
		{ "PlayMinigameTransitionEffects", &AMinigameBase::execPlayMinigameTransitionEffects },
		{ "ReadyPlayer", &AMinigameBase::execReadyPlayer },
		{ "SetTimeRemaining", &AMinigameBase::execSetTimeRemaining },
		{ "SetupGame", &AMinigameBase::execSetupGame },
		{ "StartGame", &AMinigameBase::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameBase;
UClass* AMinigameBase::GetPrivateStaticClass()
{
	using TClass = AMinigameBase;
	if (!Z_Registration_Info_UClass_AMinigameBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameBase"),
			Z_Registration_Info_UClass_AMinigameBase.InnerSingleton,
			StaticRegisterNativesAMinigameBase,
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
	return Z_Registration_Info_UClass_AMinigameBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameBase_NoRegister()
{
	return AMinigameBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MinigameBase.h" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMinigameStartEvent_MetaData[] = {
		{ "Comment", "// Called after players are spawned and the minigame base has initialized. Also called after every reset\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Called after players are spawned and the minigame base has initialized. Also called after every reset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMinigameEndEvent_MetaData[] = {
		{ "Comment", "// Triggered when the minigame end has been initialized, either from the timer or explicit call of EndGame()\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Triggered when the minigame end has been initialized, either from the timer or explicit call of EndGame()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMinigameResetEvent_MetaData[] = {
		{ "Comment", "// Triggered right before the minigame is reset. Use this to clean up persistent state\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Triggered right before the minigame is reset. Use this to clean up persistent state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|Settings" },
		{ "Comment", "/*\n\x09 *  General Settings \n\x09 */// The Pawns to spawn as the players of each team. Index 0 corresponds to the first team, etc.\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  General Settings\n// The Pawns to spawn as the players of each team. Index 0 corresponds to the first team, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamType_MetaData[] = {
		{ "BlueprintGetter", "GetTeamType" },
		{ "Category", "Minigame|Settings" },
		{ "Comment", "// The team arrangement of this minigame.\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "The team arrangement of this minigame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameDuration_MetaData[] = {
		{ "Category", "Minigame|Settings" },
		{ "Comment", "// The amount of time the minigame should last before ending, in seconds\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "The amount of time the minigame should last before ending, in seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|Practice" },
		{ "Comment", "/*\n\x09 *  Practice Mode\n\x09 */// The name of the minigame to display in Practice UI\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  Practice Mode\n// The name of the minigame to display in Practice UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|Practice" },
		{ "Comment", "// The description of the minigame. This should explain what the goal of the minigame is and how to play\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "The description of the minigame. This should explain what the goal of the minigame is and how to play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|Practice" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetDelay_MetaData[] = {
		{ "Category", "Minigame|Practice" },
		{ "Comment", "// Amount of time between game ending and game resetting in practice mode\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Amount of time between game ending and game resetting in practice mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PracticeUIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|UI" },
		{ "Comment", "/*\n\x09 *  UI\n\x09 */// The UI to spawn during the Practice phase\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  UI\n// The UI to spawn during the Practice phase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameUIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|UI" },
		{ "Comment", "// The UI to display in the minigame. Can be left unassigned if no minigame UI is desired\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "The UI to display in the minigame. Can be left unassigned if no minigame UI is desired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitBy_MetaData[] = {
		{ "Category", "Minigame|Splitscreen" },
		{ "Comment", "// Should splits be assigned to each player or to each team?\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Should splits be assigned to each player or to each team?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSplitscreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|Splitscreen" },
		{ "Comment", "// Whether this minigame should use splitscreen\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Whether this minigame should use splitscreen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitscreenUIClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame|Splitscreen" },
		{ "Comment", "// Widget classes to spawn for specified number of splits\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Widget classes to spawn for specified number of splits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeElapsed_MetaData[] = {
		{ "BlueprintGetter", "GetTimeElapsed" },
		{ "Category", "Minigame|Gameplay" },
		{ "Comment", "/*\n\x09 *  Gameplay\n\x09 */// The amount of time that has passed since the start of the minigame, in seconds\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  Gameplay\n// The amount of time that has passed since the start of the minigame, in seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetMinigameNumPlayers" },
		{ "Category", "Minigame|Gameplay" },
		{ "Comment", "// Number of players currently in this game\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "Number of players currently in this game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPractice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "IsPractice" },
		{ "Category", "Minigame|Gameplay" },
		{ "Comment", "// True if the minigame is in practice mode\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "True if the minigame is in practice mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "IsInProgress" },
		{ "Category", "Minigame|Gameplay" },
		{ "Comment", "// True if the minigame is not finished\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "True if the minigame is not finished" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugHideUI_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetTimeRemaining" },
		{ "BlueprintSetter", "SetTimeRemaining" },
		{ "Category", "Minigame|Gameplay" },
		{ "Comment", "// The amount of time remaining for this minigame, in seconds.\n" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "The amount of time remaining for this minigame, in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroCutscene_MetaData[] = {
		{ "Category", "Minigame|Cutscenes" },
		{ "Comment", "/*\n\x09 *  Cutscenes\n\x09 */" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
		{ "ToolTip", "*  Cutscenes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndingCutscene_MetaData[] = {
		{ "Category", "Minigame|Cutscenes" },
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCutscene_MetaData[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCustomizationOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/MinigameBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinigameStartEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinigameEndEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinigameResetEvent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerObjects;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinigameDuration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinigameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Controls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Controls;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetDelay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PracticeUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MinigameUIClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplitBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplitBy;
	static void NewProp_bUseSplitscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSplitscreen;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SplitscreenUIClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplitscreenUIClasses;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeElapsed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlayers;
	static void NewProp_bIsPractice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPractice;
	static void NewProp_bIsInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInProgress;
	static void NewProp_bDebugHideUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugHideUI;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IntroCutscene;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EndingCutscene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCutscene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCustomizationOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedCustomizationOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameBase_AddCamera, "AddCamera" }, // 4040090676
		{ &Z_Construct_UFunction_AMinigameBase_AddWidgetToMinigameUISplit, "AddWidgetToMinigameUISplit" }, // 714754114
		{ &Z_Construct_UFunction_AMinigameBase_CheckReady, "CheckReady" }, // 690649126
		{ &Z_Construct_UFunction_AMinigameBase_EndGame, "EndGame" }, // 3245318679
		{ &Z_Construct_UFunction_AMinigameBase_GetCamera, "GetCamera" }, // 2824723936
		{ &Z_Construct_UFunction_AMinigameBase_GetMinigameNumPlayers, "GetMinigameNumPlayers" }, // 3355659229
		{ &Z_Construct_UFunction_AMinigameBase_GetMinigameWidgetRoot, "GetMinigameWidgetRoot" }, // 1992932288
		{ &Z_Construct_UFunction_AMinigameBase_GetNumCameraSplits, "GetNumCameraSplits" }, // 2566553902
		{ &Z_Construct_UFunction_AMinigameBase_GetPlayer, "GetPlayer" }, // 3523574661
		{ &Z_Construct_UFunction_AMinigameBase_GetPlayers, "GetPlayers" }, // 1656817721
		{ &Z_Construct_UFunction_AMinigameBase_GetPointCounter, "GetPointCounter" }, // 1887108845
		{ &Z_Construct_UFunction_AMinigameBase_GetTeamType, "GetTeamType" }, // 1323698761
		{ &Z_Construct_UFunction_AMinigameBase_GetTimeElapsed, "GetTimeElapsed" }, // 3124289789
		{ &Z_Construct_UFunction_AMinigameBase_GetTimeRemaining, "GetTimeRemaining" }, // 1304882695
		{ &Z_Construct_UFunction_AMinigameBase_IsInProgress, "IsInProgress" }, // 3639005666
		{ &Z_Construct_UFunction_AMinigameBase_IsPractice, "IsPractice" }, // 2483952242
		{ &Z_Construct_UFunction_AMinigameBase_OnMinigameEnd, "OnMinigameEnd" }, // 2246140355
		{ &Z_Construct_UFunction_AMinigameBase_OnMinigameReset, "OnMinigameReset" }, // 2448577650
		{ &Z_Construct_UFunction_AMinigameBase_OnMinigameStart, "OnMinigameStart" }, // 3356453703
		{ &Z_Construct_UFunction_AMinigameBase_PlayMinigameTransitionEffects, "PlayMinigameTransitionEffects" }, // 355793990
		{ &Z_Construct_UFunction_AMinigameBase_ReadyPlayer, "ReadyPlayer" }, // 1194233720
		{ &Z_Construct_UFunction_AMinigameBase_SetTimeRemaining, "SetTimeRemaining" }, // 2053961354
		{ &Z_Construct_UFunction_AMinigameBase_SetupGame, "SetupGame" }, // 4259040021
		{ &Z_Construct_UFunction_AMinigameBase_StartGame, "StartGame" }, // 694720540
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_OnMinigameStartEvent = { "OnMinigameStartEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, OnMinigameStartEvent), Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMinigameStartEvent_MetaData), NewProp_OnMinigameStartEvent_MetaData) }; // 214695888
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_OnMinigameEndEvent = { "OnMinigameEndEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, OnMinigameEndEvent), Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMinigameEndEvent_MetaData), NewProp_OnMinigameEndEvent_MetaData) }; // 219998007
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_OnMinigameResetEvent = { "OnMinigameResetEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, OnMinigameResetEvent), Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMinigameResetEvent_MetaData), NewProp_OnMinigameResetEvent_MetaData) }; // 2057380670
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_PlayerObjects_Inner = { "PlayerObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMinigamePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_PlayerObjects = { "PlayerObjects", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, PlayerObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerObjects_MetaData), NewProp_PlayerObjects_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_TeamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_TeamType = { "TeamType", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, TeamType), Z_Construct_UEnum_MinigameCore_EMinigameType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamType_MetaData), NewProp_TeamType_MetaData) }; // 1798098046
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_MinigameDuration = { "MinigameDuration", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, MinigameDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameDuration_MetaData), NewProp_MinigameDuration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_MinigameName = { "MinigameName", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, MinigameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameName_MetaData), NewProp_MinigameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlDisplay, METADATA_PARAMS(0, nullptr) }; // 2154370425
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, Controls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controls_MetaData), NewProp_Controls_MetaData) }; // 2154370425
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_ResetDelay = { "ResetDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, ResetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetDelay_MetaData), NewProp_ResetDelay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_PracticeUIClass = { "PracticeUIClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, PracticeUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPracticeModeUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PracticeUIClass_MetaData), NewProp_PracticeUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_MinigameUIClass = { "MinigameUIClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, MinigameUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMinigameUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameUIClass_MetaData), NewProp_MinigameUIClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitBy = { "SplitBy", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, SplitBy), Z_Construct_UEnum_MinigameCore_ESplitBy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitBy_MetaData), NewProp_SplitBy_MetaData) }; // 838745005
void Z_Construct_UClass_AMinigameBase_Statics::NewProp_bUseSplitscreen_SetBit(void* Obj)
{
	((AMinigameBase*)Obj)->bUseSplitscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_bUseSplitscreen = { "bUseSplitscreen", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigameBase), &Z_Construct_UClass_AMinigameBase_Statics::NewProp_bUseSplitscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSplitscreen_MetaData), NewProp_bUseSplitscreen_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitscreenUIClasses_Inner = { "SplitscreenUIClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USplitscreenUI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitscreenUIClasses = { "SplitscreenUIClasses", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, SplitscreenUIClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitscreenUIClasses_MetaData), NewProp_SplitscreenUIClasses_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_TimeElapsed = { "TimeElapsed", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, TimeElapsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeElapsed_MetaData), NewProp_TimeElapsed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_NumPlayers = { "NumPlayers", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, NumPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlayers_MetaData), NewProp_NumPlayers_MetaData) };
void Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsPractice_SetBit(void* Obj)
{
	((AMinigameBase*)Obj)->bIsPractice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsPractice = { "bIsPractice", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigameBase), &Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsPractice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPractice_MetaData), NewProp_bIsPractice_MetaData) };
void Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsInProgress_SetBit(void* Obj)
{
	((AMinigameBase*)Obj)->bIsInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsInProgress = { "bIsInProgress", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigameBase), &Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInProgress_MetaData), NewProp_bIsInProgress_MetaData) };
void Z_Construct_UClass_AMinigameBase_Statics::NewProp_bDebugHideUI_SetBit(void* Obj)
{
	((AMinigameBase*)Obj)->bDebugHideUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_bDebugHideUI = { "bDebugHideUI", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigameBase), &Z_Construct_UClass_AMinigameBase_Statics::NewProp_bDebugHideUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugHideUI_MetaData), NewProp_bDebugHideUI_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRemaining_MetaData), NewProp_TimeRemaining_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_IntroCutscene = { "IntroCutscene", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, IntroCutscene), Z_Construct_UClass_UClass, Z_Construct_UClass_UMinigameCutsceneManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroCutscene_MetaData), NewProp_IntroCutscene_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_EndingCutscene = { "EndingCutscene", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, EndingCutscene), Z_Construct_UClass_UClass, Z_Construct_UClass_UMinigameCutsceneManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndingCutscene_MetaData), NewProp_EndingCutscene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_CurrentCutscene = { "CurrentCutscene", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, CurrentCutscene), Z_Construct_UClass_UMinigameCutsceneManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCutscene_MetaData), NewProp_CurrentCutscene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_CachedCustomizationOverrides_Inner = { "CachedCustomizationOverrides", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigameBase_Statics::NewProp_CachedCustomizationOverrides = { "CachedCustomizationOverrides", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameBase, CachedCustomizationOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCustomizationOverrides_MetaData), NewProp_CachedCustomizationOverrides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_OnMinigameStartEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_OnMinigameEndEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_OnMinigameResetEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_PlayerObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_PlayerObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_TeamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_TeamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_MinigameDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_MinigameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_Controls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_Controls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_ResetDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_PracticeUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_MinigameUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_bUseSplitscreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitscreenUIClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_SplitscreenUIClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_TimeElapsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_NumPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsPractice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_bIsInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_bDebugHideUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_IntroCutscene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_EndingCutscene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_CurrentCutscene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_CachedCustomizationOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameBase_Statics::NewProp_CachedCustomizationOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigameBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABashGamemode,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameBase_Statics::ClassParams = {
	&AMinigameBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigameBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameBase()
{
	if (!Z_Registration_Info_UClass_AMinigameBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameBase.OuterSingleton, Z_Construct_UClass_AMinigameBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameBase);
AMinigameBase::~AMinigameBase() {}
// ********** End Class AMinigameBase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameBase, AMinigameBase::StaticClass, TEXT("AMinigameBase"), &Z_Registration_Info_UClass_AMinigameBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameBase), 2566455975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h__Script_MinigameCore_2557606320(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
