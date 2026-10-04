// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinigameCapture.h"

#ifdef MINIGAMECORE_MinigameCapture_generated_h
#error "MinigameCapture.generated.h already included, missing '#pragma once' in MinigameCapture.h"
#endif
#define MINIGAMECORE_MinigameCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMinigameCapture *********************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetShakeIntensity); \
	DECLARE_FUNCTION(execGetShakeIntensity); \
	DECLARE_FUNCTION(execProjectWorldToCapture); \
	DECLARE_FUNCTION(execGetCaptureNumber); \
	DECLARE_FUNCTION(execApplyCameraShake);


MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigameCapture(); \
	friend struct Z_Construct_UClass_AMinigameCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(AMinigameCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_AMinigameCapture_NoRegister) \
	DECLARE_SERIALIZER(AMinigameCapture)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMinigameCapture(AMinigameCapture&&) = delete; \
	AMinigameCapture(const AMinigameCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigameCapture) \
	NO_API virtual ~AMinigameCapture();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_13_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMinigameCapture;

// ********** End Class AMinigameCapture ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
