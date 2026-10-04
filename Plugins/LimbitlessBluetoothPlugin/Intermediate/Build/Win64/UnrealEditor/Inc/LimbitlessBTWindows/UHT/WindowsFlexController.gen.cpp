// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsFlexController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWindowsFlexController() {}

// ********** Begin Cross Module References ********************************************************
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController();
LIMBITLESSBTWINDOWS_API UClass* Z_Construct_UClass_UWindowsFlexController();
LIMBITLESSBTWINDOWS_API UClass* Z_Construct_UClass_UWindowsFlexController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LimbitlessBTWindows();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWindowsFlexController ***************************************************
void UWindowsFlexController::StaticRegisterNativesUWindowsFlexController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWindowsFlexController;
UClass* UWindowsFlexController::GetPrivateStaticClass()
{
	using TClass = UWindowsFlexController;
	if (!Z_Registration_Info_UClass_UWindowsFlexController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WindowsFlexController"),
			Z_Registration_Info_UClass_UWindowsFlexController.InnerSingleton,
			StaticRegisterNativesUWindowsFlexController,
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
	return Z_Registration_Info_UClass_UWindowsFlexController.InnerSingleton;
}
UClass* Z_Construct_UClass_UWindowsFlexController_NoRegister()
{
	return UWindowsFlexController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWindowsFlexController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WindowsFlexController.h" },
		{ "ModuleRelativePath", "Public/WindowsFlexController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsFlexController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWindowsFlexController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlexController,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBTWindows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsFlexController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsFlexController_Statics::ClassParams = {
	&UWindowsFlexController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsFlexController_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsFlexController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowsFlexController()
{
	if (!Z_Registration_Info_UClass_UWindowsFlexController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsFlexController.OuterSingleton, Z_Construct_UClass_UWindowsFlexController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowsFlexController.OuterSingleton;
}
UWindowsFlexController::UWindowsFlexController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsFlexController);
UWindowsFlexController::~UWindowsFlexController() {}
// ********** End Class UWindowsFlexController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsFlexController_h__Script_LimbitlessBTWindows_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsFlexController, UWindowsFlexController::StaticClass, TEXT("UWindowsFlexController"), &Z_Registration_Info_UClass_UWindowsFlexController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsFlexController), 2137431689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsFlexController_h__Script_LimbitlessBTWindows_1611687452(TEXT("/Script/LimbitlessBTWindows"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsFlexController_h__Script_LimbitlessBTWindows_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsFlexController_h__Script_LimbitlessBTWindows_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
