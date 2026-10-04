// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncActions/AsyncActionCalibrateFlex.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncActionCalibrateFlex() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncActionCalibrateFlex Function AsyncCalibrateFlexController **********
struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics
{
	struct AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms
	{
		UFlexController* FlexController;
		UAsyncActionCalibrateFlex* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionCalibrateFlex_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_FlexController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "AsyncCalibrateFlexController", Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execAsyncCalibrateFlexController)
{
	P_GET_OBJECT(UFlexController,Z_Param_FlexController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncActionCalibrateFlex**)Z_Param__Result=UAsyncActionCalibrateFlex::AsyncCalibrateFlexController(Z_Param_FlexController);
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateFlex Function AsyncCalibrateFlexController ************

// ********** Begin Class UAsyncActionCalibrateFlex Function OnFlexFinished ************************
struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "OnFlexFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execOnFlexFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlexFinished();
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateFlex Function OnFlexFinished **************************

// ********** Begin Class UAsyncActionCalibrateFlex Function OnFlexStarted *************************
struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics
{
	struct AsyncActionCalibrateFlex_eventOnFlexStarted_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventOnFlexStarted_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "OnFlexStarted", Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::AsyncActionCalibrateFlex_eventOnFlexStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::AsyncActionCalibrateFlex_eventOnFlexStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execOnFlexStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlexStarted(Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateFlex Function OnFlexStarted ***************************

// ********** Begin Class UAsyncActionCalibrateFlex Function OnRestStarted *************************
struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics
{
	struct AsyncActionCalibrateFlex_eventOnRestStarted_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventOnRestStarted_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "OnRestStarted", Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::AsyncActionCalibrateFlex_eventOnRestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::AsyncActionCalibrateFlex_eventOnRestStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execOnRestStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestStarted(Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateFlex Function OnRestStarted ***************************

// ********** Begin Class UAsyncActionCalibrateFlex ************************************************
void UAsyncActionCalibrateFlex::StaticRegisterNativesUAsyncActionCalibrateFlex()
{
	UClass* Class = UAsyncActionCalibrateFlex::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncCalibrateFlexController", &UAsyncActionCalibrateFlex::execAsyncCalibrateFlexController },
		{ "OnFlexFinished", &UAsyncActionCalibrateFlex::execOnFlexFinished },
		{ "OnFlexStarted", &UAsyncActionCalibrateFlex::execOnFlexStarted },
		{ "OnRestStarted", &UAsyncActionCalibrateFlex::execOnRestStarted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncActionCalibrateFlex;
UClass* UAsyncActionCalibrateFlex::GetPrivateStaticClass()
{
	using TClass = UAsyncActionCalibrateFlex;
	if (!Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncActionCalibrateFlex"),
			Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.InnerSingleton,
			StaticRegisterNativesUAsyncActionCalibrateFlex,
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
	return Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex_NoRegister()
{
	return UAsyncActionCalibrateFlex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncActions/AsyncActionCalibrateFlex.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRestCalibrationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlexCalibrationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCalibrationComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRestCalibrationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlexCalibrationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalibrationComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController, "AsyncCalibrateFlexController" }, // 4225635827
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished, "OnFlexFinished" }, // 3926907519
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted, "OnFlexStarted" }, // 977228904
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted, "OnRestStarted" }, // 1071249543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionCalibrateFlex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted = { "OnRestCalibrationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionCalibrateFlex, OnRestCalibrationStarted), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRestCalibrationStarted_MetaData), NewProp_OnRestCalibrationStarted_MetaData) }; // 563172242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted = { "OnFlexCalibrationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionCalibrateFlex, OnFlexCalibrationStarted), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlexCalibrationStarted_MetaData), NewProp_OnFlexCalibrationStarted_MetaData) }; // 563172242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete = { "OnCalibrationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionCalibrateFlex, OnCalibrationComplete), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCalibrationComplete_MetaData), NewProp_OnCalibrationComplete_MetaData) }; // 2382349246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::ClassParams = {
	&UAsyncActionCalibrateFlex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex()
{
	if (!Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.OuterSingleton, Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.OuterSingleton;
}
UAsyncActionCalibrateFlex::UAsyncActionCalibrateFlex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionCalibrateFlex);
UAsyncActionCalibrateFlex::~UAsyncActionCalibrateFlex() {}
// ********** End Class UAsyncActionCalibrateFlex **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionCalibrateFlex, UAsyncActionCalibrateFlex::StaticClass, TEXT("UAsyncActionCalibrateFlex"), &Z_Registration_Info_UClass_UAsyncActionCalibrateFlex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionCalibrateFlex), 219510423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h__Script_LimbitlessBluetoothPlugin_1333083491(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
