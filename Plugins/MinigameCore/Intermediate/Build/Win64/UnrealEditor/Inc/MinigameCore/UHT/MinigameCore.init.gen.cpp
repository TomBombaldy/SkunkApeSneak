// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameCore_init() {}
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MinigameCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MinigameCore()
	{
		if (!Z_Registration_Info_UPackage__Script_MinigameCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_GameEndedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_GameResetSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_GameStartedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MinigameCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC1B2488E,
				0x8A4B050D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MinigameCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MinigameCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MinigameCore(Z_Construct_UPackage__Script_MinigameCore, TEXT("/Script/MinigameCore"), Z_Registration_Info_UPackage__Script_MinigameCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1B2488E, 0x8A4B050D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
