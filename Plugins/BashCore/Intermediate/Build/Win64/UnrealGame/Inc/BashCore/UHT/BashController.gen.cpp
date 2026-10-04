// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/BashController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBashController() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UBashController();
BASHCORE_API UClass* Z_Construct_UClass_UBashController_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponentBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBashController Function GetPlayerData *******************************
struct Z_Construct_UFunction_UBashController_GetPlayerData_Statics
{
	struct BashController_eventGetPlayerData_Parms
	{
		UPlayerData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bash Controller" },
		{ "ModuleRelativePath", "Public/Player/BashController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashController_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashController_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashController_GetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashController_GetPlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashController_GetPlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBashController, nullptr, "GetPlayerData", Z_Construct_UFunction_UBashController_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBashController_GetPlayerData_Statics::BashController_eventGetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBashController_GetPlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBashController_GetPlayerData_Statics::BashController_eventGetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBashController_GetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashController_GetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBashController::execGetPlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerData**)Z_Param__Result=P_THIS->GetPlayerData();
	P_NATIVE_END;
}
// ********** End Interface UBashController Function GetPlayerData *********************************

// ********** Begin Interface UBashController Function GetPlayerPawn *******************************
struct Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics
{
	struct BashController_eventGetPlayerPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bash Controller" },
		{ "ModuleRelativePath", "Public/Player/BashController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashController_eventGetPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBashController, nullptr, "GetPlayerPawn", Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::BashController_eventGetPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::BashController_eventGetPlayerPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBashController_GetPlayerPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashController_GetPlayerPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBashController::execGetPlayerPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPlayerPawn();
	P_NATIVE_END;
}
// ********** End Interface UBashController Function GetPlayerPawn *********************************

// ********** Begin Interface UBashController Function GetUiInputComponent *************************
struct Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics
{
	struct BashController_eventGetUiInputComponent_Parms
	{
		UUIInputComponentBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bash Controller" },
		{ "ModuleRelativePath", "Public/Player/BashController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashController_eventGetUiInputComponent_Parms, ReturnValue), Z_Construct_UClass_UUIInputComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBashController, nullptr, "GetUiInputComponent", Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::BashController_eventGetUiInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::BashController_eventGetUiInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBashController_GetUiInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashController_GetUiInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBashController::execGetUiInputComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUIInputComponentBase**)Z_Param__Result=P_THIS->GetUiInputComponent();
	P_NATIVE_END;
}
// ********** End Interface UBashController Function GetUiInputComponent ***************************

// ********** Begin Interface UBashController ******************************************************
void UBashController::StaticRegisterNativesUBashController()
{
	UClass* Class = UBashController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerData", &IBashController::execGetPlayerData },
		{ "GetPlayerPawn", &IBashController::execGetPlayerPawn },
		{ "GetUiInputComponent", &IBashController::execGetUiInputComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBashController;
UClass* UBashController::GetPrivateStaticClass()
{
	using TClass = UBashController;
	if (!Z_Registration_Info_UClass_UBashController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BashController"),
			Z_Registration_Info_UClass_UBashController.InnerSingleton,
			StaticRegisterNativesUBashController,
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
	return Z_Registration_Info_UClass_UBashController.InnerSingleton;
}
UClass* Z_Construct_UClass_UBashController_NoRegister()
{
	return UBashController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBashController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Player/BashController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBashController_GetPlayerData, "GetPlayerData" }, // 17473178
		{ &Z_Construct_UFunction_UBashController_GetPlayerPawn, "GetPlayerPawn" }, // 2490162192
		{ &Z_Construct_UFunction_UBashController_GetUiInputComponent, "GetUiInputComponent" }, // 2914166460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBashController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBashController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBashController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBashController_Statics::ClassParams = {
	&UBashController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBashController_Statics::Class_MetaDataParams), Z_Construct_UClass_UBashController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBashController()
{
	if (!Z_Registration_Info_UClass_UBashController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBashController.OuterSingleton, Z_Construct_UClass_UBashController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBashController.OuterSingleton;
}
UBashController::UBashController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBashController);
// ********** End Interface UBashController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBashController, UBashController::StaticClass, TEXT("UBashController"), &Z_Registration_Info_UClass_UBashController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBashController), 1362611079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h__Script_BashCore_3137579734(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
