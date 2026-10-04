// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/SelectableWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSelectableWidget() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_USelectableWidget();
BASHCORE_API UClass* Z_Construct_UClass_USelectableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USelectableWidget Function OnSelected ********************************
void ISelectableWidget::OnSelected()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelected instead.");
}
static FName NAME_USelectableWidget_OnSelected = FName(TEXT("OnSelected"));
void ISelectableWidget::Execute_OnSelected(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USelectableWidget::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USelectableWidget_OnSelected);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISelectableWidget*)(O->GetNativeInterfaceAddress(USelectableWidget::StaticClass())))
	{
		I->OnSelected_Implementation();
	}
}
struct Z_Construct_UFunction_USelectableWidget_OnSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "Comment", "//calling on selected will call cpp and blueprint version. Anything that the UI Controller can focus and interact with should either implement this or be a widget button.\n" },
		{ "ModuleRelativePath", "Public/Widgets/SelectableWidget.h" },
		{ "ToolTip", "calling on selected will call cpp and blueprint version. Anything that the UI Controller can focus and interact with should either implement this or be a widget button." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USelectableWidget, nullptr, "OnSelected", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USelectableWidget_OnSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISelectableWidget::execOnSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelected_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USelectableWidget Function OnSelected **********************************

// ********** Begin Interface USelectableWidget ****************************************************
void USelectableWidget::StaticRegisterNativesUSelectableWidget()
{
	UClass* Class = USelectableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSelected", &ISelectableWidget::execOnSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USelectableWidget;
UClass* USelectableWidget::GetPrivateStaticClass()
{
	using TClass = USelectableWidget;
	if (!Z_Registration_Info_UClass_USelectableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SelectableWidget"),
			Z_Registration_Info_UClass_USelectableWidget.InnerSingleton,
			StaticRegisterNativesUSelectableWidget,
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
	return Z_Registration_Info_UClass_USelectableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USelectableWidget_NoRegister()
{
	return USelectableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USelectableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SelectableWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectableWidget_OnSelected, "OnSelected" }, // 1280917180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USelectableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectableWidget_Statics::ClassParams = {
	&USelectableWidget::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectableWidget()
{
	if (!Z_Registration_Info_UClass_USelectableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectableWidget.OuterSingleton, Z_Construct_UClass_USelectableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectableWidget.OuterSingleton;
}
USelectableWidget::USelectableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectableWidget);
// ********** End Interface USelectableWidget ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelectableWidget, USelectableWidget::StaticClass, TEXT("USelectableWidget"), &Z_Registration_Info_UClass_USelectableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectableWidget), 681419205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h__Script_BashCore_2990343557(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
