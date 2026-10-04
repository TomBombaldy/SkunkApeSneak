// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncActions/AsyncActionCalibrateIMU.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncActionCalibrateIMU() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncActionCalibrateIMU Function AsyncCalibrateIMU **********************
struct Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics
{
	struct AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms
	{
		UFlexController* FlexController;
		UAsyncActionCalibrateIMU* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionCalibrateIMU_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_FlexController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateIMU, nullptr, "AsyncCalibrateIMU", Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateIMU::execAsyncCalibrateIMU)
{
	P_GET_OBJECT(UFlexController,Z_Param_FlexController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncActionCalibrateIMU**)Z_Param__Result=UAsyncActionCalibrateIMU::AsyncCalibrateIMU(Z_Param_FlexController);
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateIMU Function AsyncCalibrateIMU ************************

// ********** Begin Class UAsyncActionCalibrateIMU Function HandleCalibrationEnd *******************
struct Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateIMU, nullptr, "HandleCalibrationEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateIMU::execHandleCalibrationEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCalibrationEnd();
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateIMU Function HandleCalibrationEnd *********************

// ********** Begin Class UAsyncActionCalibrateIMU Function HandleCalibrationStart *****************
struct Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics
{
	struct AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateIMU, nullptr, "HandleCalibrationStart", Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionCalibrateIMU::execHandleCalibrationStart)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCalibrationStart(Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UAsyncActionCalibrateIMU Function HandleCalibrationStart *******************

// ********** Begin Class UAsyncActionCalibrateIMU *************************************************
void UAsyncActionCalibrateIMU::StaticRegisterNativesUAsyncActionCalibrateIMU()
{
	UClass* Class = UAsyncActionCalibrateIMU::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncCalibrateIMU", &UAsyncActionCalibrateIMU::execAsyncCalibrateIMU },
		{ "HandleCalibrationEnd", &UAsyncActionCalibrateIMU::execHandleCalibrationEnd },
		{ "HandleCalibrationStart", &UAsyncActionCalibrateIMU::execHandleCalibrationStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncActionCalibrateIMU;
UClass* UAsyncActionCalibrateIMU::GetPrivateStaticClass()
{
	using TClass = UAsyncActionCalibrateIMU;
	if (!Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncActionCalibrateIMU"),
			Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.InnerSingleton,
			StaticRegisterNativesUAsyncActionCalibrateIMU,
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
	return Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU_NoRegister()
{
	return UAsyncActionCalibrateIMU::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncActions/AsyncActionCalibrateIMU.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCalibrationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCalibrationComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalibrationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalibrationComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU, "AsyncCalibrateIMU" }, // 1211760903
		{ &Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd, "HandleCalibrationEnd" }, // 1489449367
		{ &Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart, "HandleCalibrationStart" }, // 3819630097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionCalibrateIMU>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted = { "OnCalibrationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionCalibrateIMU, OnCalibrationStarted), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCalibrationStarted_MetaData), NewProp_OnCalibrationStarted_MetaData) }; // 563172242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete = { "OnCalibrationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionCalibrateIMU, OnCalibrationComplete), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCalibrationComplete_MetaData), NewProp_OnCalibrationComplete_MetaData) }; // 2382349246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::ClassParams = {
	&UAsyncActionCalibrateIMU::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU()
{
	if (!Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.OuterSingleton, Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.OuterSingleton;
}
UAsyncActionCalibrateIMU::UAsyncActionCalibrateIMU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionCalibrateIMU);
UAsyncActionCalibrateIMU::~UAsyncActionCalibrateIMU() {}
// ********** End Class UAsyncActionCalibrateIMU ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionCalibrateIMU, UAsyncActionCalibrateIMU::StaticClass, TEXT("UAsyncActionCalibrateIMU"), &Z_Registration_Info_UClass_UAsyncActionCalibrateIMU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionCalibrateIMU), 4143430956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h__Script_LimbitlessBluetoothPlugin_92901816(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
