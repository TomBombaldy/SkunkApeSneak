// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/FlexCalibrationMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFlexCalibrationMenu() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UFlexCalibrationMenu();
BASHCORE_API UClass* Z_Construct_UClass_UFlexCalibrationMenu_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UMenu();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFlexCalibrationMenu Function GetRecentFlexData **************************
struct Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics
{
	struct FlexCalibrationMenu_eventGetRecentFlexData_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlexCalibrationMenu_eventGetRecentFlexData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "GetRecentFlexData", Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FlexCalibrationMenu_eventGetRecentFlexData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FlexCalibrationMenu_eventGetRecentFlexData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlexCalibrationMenu::execGetRecentFlexData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetRecentFlexData();
	P_NATIVE_END;
}
// ********** End Class UFlexCalibrationMenu Function GetRecentFlexData ****************************

// ********** Begin Class UFlexCalibrationMenu Function GetTrackedController ***********************
struct Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics
{
	struct FlexCalibrationMenu_eventGetTrackedController_Parms
	{
		UFlexController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlexCalibrationMenu_eventGetTrackedController_Parms, ReturnValue), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "GetTrackedController", Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FlexCalibrationMenu_eventGetTrackedController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FlexCalibrationMenu_eventGetTrackedController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlexCalibrationMenu::execGetTrackedController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFlexController**)Z_Param__Result=P_THIS->GetTrackedController();
	P_NATIVE_END;
}
// ********** End Class UFlexCalibrationMenu Function GetTrackedController *************************

// ********** Begin Class UFlexCalibrationMenu Function GetTrackedRestThreshold ********************
struct Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics
{
	struct FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "GetTrackedRestThreshold", Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlexCalibrationMenu::execGetTrackedRestThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTrackedRestThreshold();
	P_NATIVE_END;
}
// ********** End Class UFlexCalibrationMenu Function GetTrackedRestThreshold **********************

// ********** Begin Class UFlexCalibrationMenu Function SetTrackedController ***********************
struct Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics
{
	struct FlexCalibrationMenu_eventSetTrackedController_Parms
	{
		UFlexController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlexCalibrationMenu_eventSetTrackedController_Parms, Controller), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "SetTrackedController", Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FlexCalibrationMenu_eventSetTrackedController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FlexCalibrationMenu_eventSetTrackedController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlexCalibrationMenu::execSetTrackedController)
{
	P_GET_OBJECT(UFlexController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrackedController(Z_Param_Controller);
	P_NATIVE_END;
}
// ********** End Class UFlexCalibrationMenu Function SetTrackedController *************************

// ********** Begin Class UFlexCalibrationMenu *****************************************************
void UFlexCalibrationMenu::StaticRegisterNativesUFlexCalibrationMenu()
{
	UClass* Class = UFlexCalibrationMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRecentFlexData", &UFlexCalibrationMenu::execGetRecentFlexData },
		{ "GetTrackedController", &UFlexCalibrationMenu::execGetTrackedController },
		{ "GetTrackedRestThreshold", &UFlexCalibrationMenu::execGetTrackedRestThreshold },
		{ "SetTrackedController", &UFlexCalibrationMenu::execSetTrackedController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFlexCalibrationMenu;
UClass* UFlexCalibrationMenu::GetPrivateStaticClass()
{
	using TClass = UFlexCalibrationMenu;
	if (!Z_Registration_Info_UClass_UFlexCalibrationMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FlexCalibrationMenu"),
			Z_Registration_Info_UClass_UFlexCalibrationMenu.InnerSingleton,
			StaticRegisterNativesUFlexCalibrationMenu,
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
	return Z_Registration_Info_UClass_UFlexCalibrationMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_UFlexCalibrationMenu_NoRegister()
{
	return UFlexCalibrationMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFlexCalibrationMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/FlexCalibrationMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumStoredValues_MetaData[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "Comment", "// How many flex values to store to show in calibration graph\n" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
		{ "ToolTip", "How many flex values to store to show in calibration graph" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumStoredValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData, "GetRecentFlexData" }, // 3243308079
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController, "GetTrackedController" }, // 1715813435
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold, "GetTrackedRestThreshold" }, // 4277665016
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController, "SetTrackedController" }, // 4293842275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlexCalibrationMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues = { "NumStoredValues", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexCalibrationMenu, NumStoredValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumStoredValues_MetaData), NewProp_NumStoredValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlexCalibrationMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenu,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlexCalibrationMenu_Statics::ClassParams = {
	&UFlexCalibrationMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlexCalibrationMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlexCalibrationMenu()
{
	if (!Z_Registration_Info_UClass_UFlexCalibrationMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlexCalibrationMenu.OuterSingleton, Z_Construct_UClass_UFlexCalibrationMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlexCalibrationMenu.OuterSingleton;
}
UFlexCalibrationMenu::UFlexCalibrationMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlexCalibrationMenu);
UFlexCalibrationMenu::~UFlexCalibrationMenu() {}
// ********** End Class UFlexCalibrationMenu *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlexCalibrationMenu, UFlexCalibrationMenu::StaticClass, TEXT("UFlexCalibrationMenu"), &Z_Registration_Info_UClass_UFlexCalibrationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlexCalibrationMenu), 2083639312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h__Script_BashCore_2622411628(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
