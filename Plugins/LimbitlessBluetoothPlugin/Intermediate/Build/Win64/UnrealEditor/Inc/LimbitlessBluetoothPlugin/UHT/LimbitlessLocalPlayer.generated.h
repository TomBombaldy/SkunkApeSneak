// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClasses/LimbitlessLocalPlayer.h"

#ifdef LIMBITLESSBLUETOOTHPLUGIN_LimbitlessLocalPlayer_generated_h
#error "LimbitlessLocalPlayer.generated.h already included, missing '#pragma once' in LimbitlessLocalPlayer.h"
#endif
#define LIMBITLESSBLUETOOTHPLUGIN_LimbitlessLocalPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFlexController;

// ********** Begin Delegate FOnFlexControllerAssignedSignature ************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_12_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FOnFlexControllerAssignedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnFlexControllerAssignedSignature, UFlexController* FlexController);


// ********** End Delegate FOnFlexControllerAssignedSignature **************************************

// ********** Begin Class ULimbitlessLocalPlayer ***************************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFlexController); \
	DECLARE_FUNCTION(execGetFlexController);


LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister();

#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULimbitlessLocalPlayer(); \
	friend struct Z_Construct_UClass_ULimbitlessLocalPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULimbitlessLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LimbitlessBluetoothPlugin"), Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister) \
	DECLARE_SERIALIZER(ULimbitlessLocalPlayer)


#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULimbitlessLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULimbitlessLocalPlayer(ULimbitlessLocalPlayer&&) = delete; \
	ULimbitlessLocalPlayer(const ULimbitlessLocalPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULimbitlessLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULimbitlessLocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULimbitlessLocalPlayer) \
	NO_API virtual ~ULimbitlessLocalPlayer();


#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_14_PROLOG
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULimbitlessLocalPlayer;

// ********** End Class ULimbitlessLocalPlayer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
