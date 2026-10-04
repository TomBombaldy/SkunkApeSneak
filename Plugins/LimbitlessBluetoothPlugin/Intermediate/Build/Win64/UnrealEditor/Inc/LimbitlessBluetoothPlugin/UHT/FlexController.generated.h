// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlexController.h"

#ifdef LIMBITLESSBLUETOOTHPLUGIN_FlexController_generated_h
#error "FlexController.generated.h already included, missing '#pragma once' in FlexController.h"
#endif
#define LIMBITLESSBLUETOOTHPLUGIN_FlexController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FAnalogReceivedFlexSignature ******************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_14_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FAnalogReceivedFlexSignature_DelegateWrapper(const FMulticastScriptDelegate& AnalogReceivedFlexSignature, float Value);


// ********** End Delegate FAnalogReceivedFlexSignature ********************************************

// ********** Begin Delegate FOnRotationReceivedSignature ******************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_15_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FOnRotationReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRotationReceivedSignature, FVector Value);


// ********** End Delegate FOnRotationReceivedSignature ********************************************

// ********** Begin Delegate FOnAccelerationReceivedSignature **************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_16_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FOnAccelerationReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationReceivedSignature, FVector Value);


// ********** End Delegate FOnAccelerationReceivedSignature ****************************************

// ********** Begin Delegate FOnAngularVelocityReceivedSignature ***********************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_17_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FOnAngularVelocityReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAngularVelocityReceivedSignature, FVector Value);


// ********** End Delegate FOnAngularVelocityReceivedSignature *************************************

// ********** Begin Delegate FDiscreteReceivedFlexSignature ****************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_18_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FDiscreteReceivedFlexSignature_DelegateWrapper(const FMulticastScriptDelegate& DiscreteReceivedFlexSignature, int32 Level);


// ********** End Delegate FDiscreteReceivedFlexSignature ******************************************

// ********** Begin Delegate FDiscreteThresholdReachedSignature ************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_19_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FDiscreteThresholdReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& DiscreteThresholdReachedSignature, int32 Level);


// ********** End Delegate FDiscreteThresholdReachedSignature **************************************

// ********** Begin Delegate FOnCalibrationStartedSignature ****************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_21_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FOnCalibrationStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCalibrationStartedSignature, float Duration);


// ********** End Delegate FOnCalibrationStartedSignature ******************************************

// ********** Begin Delegate FOnCalibrationEndedSignature ******************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_22_DELEGATE \
LIMBITLESSBLUETOOTHPLUGIN_API void FOnCalibrationEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCalibrationEndedSignature);


// ********** End Delegate FOnCalibrationEndedSignature ********************************************

// ********** Begin Class UFlexController **********************************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBeginFlexCalibration); \
	DECLARE_FUNCTION(execBeginIMUCalibration);


LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();

#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlexController(); \
	friend struct Z_Construct_UClass_UFlexController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister(); \
public: \
	DECLARE_CLASS2(UFlexController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LimbitlessBluetoothPlugin"), Z_Construct_UClass_UFlexController_NoRegister) \
	DECLARE_SERIALIZER(UFlexController)


#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlexController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFlexController(UFlexController&&) = delete; \
	UFlexController(const UFlexController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlexController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlexController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlexController) \
	NO_API virtual ~UFlexController();


#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_26_PROLOG
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFlexController;

// ********** End Class UFlexController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
