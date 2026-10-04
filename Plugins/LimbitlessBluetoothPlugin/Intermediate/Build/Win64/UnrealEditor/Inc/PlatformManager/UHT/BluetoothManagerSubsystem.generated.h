// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BluetoothManagerSubsystem.h"

#ifdef PLATFORMMANAGER_BluetoothManagerSubsystem_generated_h
#error "BluetoothManagerSubsystem.generated.h already included, missing '#pragma once' in BluetoothManagerSubsystem.h"
#endif
#define PLATFORMMANAGER_BluetoothManagerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ALimbitlessPlayerController;
class UFlexController;
enum class EFlexColor : uint8;

// ********** Begin Class UBluetoothManagerSubsystem ***********************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAssignControllerToPlayer); \
	DECLARE_FUNCTION(execStopScan); \
	DECLARE_FUNCTION(execStartScan); \
	DECLARE_FUNCTION(execGetColors);


PLATFORMMANAGER_API UClass* Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister();

#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBluetoothManagerSubsystem(); \
	friend struct Z_Construct_UClass_UBluetoothManagerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMMANAGER_API UClass* Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBluetoothManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlatformManager"), Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBluetoothManagerSubsystem)


#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBluetoothManagerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBluetoothManagerSubsystem(UBluetoothManagerSubsystem&&) = delete; \
	UBluetoothManagerSubsystem(const UBluetoothManagerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluetoothManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluetoothManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBluetoothManagerSubsystem) \
	NO_API virtual ~UBluetoothManagerSubsystem();


#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_23_PROLOG
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBluetoothManagerSubsystem;

// ********** End Class UBluetoothManagerSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
