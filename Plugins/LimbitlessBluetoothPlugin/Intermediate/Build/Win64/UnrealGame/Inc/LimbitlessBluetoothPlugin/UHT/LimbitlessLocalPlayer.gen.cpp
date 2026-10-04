// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseClasses/LimbitlessLocalPlayer.h"
#include "Engine/Engine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLimbitlessLocalPlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFlexControllerAssignedSignature ************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms
	{
		UFlexController* FlexController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::NewProp_FlexController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnFlexControllerAssignedSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFlexControllerAssignedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnFlexControllerAssignedSignature, UFlexController* FlexController)
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms
	{
		UFlexController* FlexController;
	};
	_Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms Parms;
	Parms.FlexController=FlexController;
	OnFlexControllerAssignedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFlexControllerAssignedSignature **************************************

// ********** Begin Class ULimbitlessLocalPlayer Function GetFlexController ************************
struct Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics
{
	struct LimbitlessLocalPlayer_eventGetFlexController_Parms
	{
		UFlexController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flex Controller" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessLocalPlayer_eventGetFlexController_Parms, ReturnValue), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbitlessLocalPlayer, nullptr, "GetFlexController", Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::LimbitlessLocalPlayer_eventGetFlexController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::LimbitlessLocalPlayer_eventGetFlexController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbitlessLocalPlayer::execGetFlexController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFlexController**)Z_Param__Result=P_THIS->GetFlexController();
	P_NATIVE_END;
}
// ********** End Class ULimbitlessLocalPlayer Function GetFlexController **************************

// ********** Begin Class ULimbitlessLocalPlayer Function SetFlexController ************************
struct Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics
{
	struct LimbitlessLocalPlayer_eventSetFlexController_Parms
	{
		UFlexController* newController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flex Controller" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::NewProp_newController = { "newController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessLocalPlayer_eventSetFlexController_Parms, newController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::NewProp_newController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbitlessLocalPlayer, nullptr, "SetFlexController", Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::LimbitlessLocalPlayer_eventSetFlexController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::LimbitlessLocalPlayer_eventSetFlexController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbitlessLocalPlayer::execSetFlexController)
{
	P_GET_OBJECT(UFlexController,Z_Param_newController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlexController(Z_Param_newController);
	P_NATIVE_END;
}
// ********** End Class ULimbitlessLocalPlayer Function SetFlexController **************************

// ********** Begin Class ULimbitlessLocalPlayer ***************************************************
void ULimbitlessLocalPlayer::StaticRegisterNativesULimbitlessLocalPlayer()
{
	UClass* Class = ULimbitlessLocalPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFlexController", &ULimbitlessLocalPlayer::execGetFlexController },
		{ "SetFlexController", &ULimbitlessLocalPlayer::execSetFlexController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULimbitlessLocalPlayer;
UClass* ULimbitlessLocalPlayer::GetPrivateStaticClass()
{
	using TClass = ULimbitlessLocalPlayer;
	if (!Z_Registration_Info_UClass_ULimbitlessLocalPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LimbitlessLocalPlayer"),
			Z_Registration_Info_UClass_ULimbitlessLocalPlayer.InnerSingleton,
			StaticRegisterNativesULimbitlessLocalPlayer,
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
	return Z_Registration_Info_UClass_ULimbitlessLocalPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister()
{
	return ULimbitlessLocalPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULimbitlessLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseClasses/LimbitlessLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedController_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController, "GetFlexController" }, // 2311764759
		{ &Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController, "SetFlexController" }, // 622060223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimbitlessLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController = { "AssociatedController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbitlessLocalPlayer, AssociatedController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedController_MetaData), NewProp_AssociatedController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::ClassParams = {
	&ULimbitlessLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULimbitlessLocalPlayer()
{
	if (!Z_Registration_Info_UClass_ULimbitlessLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULimbitlessLocalPlayer.OuterSingleton, Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULimbitlessLocalPlayer.OuterSingleton;
}
ULimbitlessLocalPlayer::ULimbitlessLocalPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULimbitlessLocalPlayer);
ULimbitlessLocalPlayer::~ULimbitlessLocalPlayer() {}
// ********** End Class ULimbitlessLocalPlayer *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULimbitlessLocalPlayer, ULimbitlessLocalPlayer::StaticClass, TEXT("ULimbitlessLocalPlayer"), &Z_Registration_Info_UClass_ULimbitlessLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULimbitlessLocalPlayer), 2021495944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h__Script_LimbitlessBluetoothPlugin_976100560(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
