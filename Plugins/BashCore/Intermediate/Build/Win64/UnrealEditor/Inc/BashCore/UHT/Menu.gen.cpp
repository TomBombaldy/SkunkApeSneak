// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Menu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenu() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UBashController_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UMenu();
BASHCORE_API UClass* Z_Construct_UClass_UMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMenu Function AllowsHoldNavigation **************************************
struct Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics
{
	struct Menu_eventAllowsHoldNavigation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Menu_eventAllowsHoldNavigation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Menu_eventAllowsHoldNavigation_Parms), &Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "AllowsHoldNavigation", Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::Menu_eventAllowsHoldNavigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::Menu_eventAllowsHoldNavigation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenu_AllowsHoldNavigation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_AllowsHoldNavigation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu::execAllowsHoldNavigation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowsHoldNavigation();
	P_NATIVE_END;
}
// ********** End Class UMenu Function AllowsHoldNavigation ****************************************

// ********** Begin Class UMenu Function GetDefaultSelectedWidget **********************************
struct Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics
{
	struct Menu_eventGetDefaultSelectedWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Menu_eventGetDefaultSelectedWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "GetDefaultSelectedWidget", Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::Menu_eventGetDefaultSelectedWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::Menu_eventGetDefaultSelectedWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu::execGetDefaultSelectedWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetDefaultSelectedWidget();
	P_NATIVE_END;
}
// ********** End Class UMenu Function GetDefaultSelectedWidget ************************************

// ********** Begin Class UMenu Function OnCloseMenuBP *********************************************
static FName NAME_UMenu_OnCloseMenuBP = FName(TEXT("OnCloseMenuBP"));
void UMenu::OnCloseMenuBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenu_OnCloseMenuBP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMenu_OnCloseMenuBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnCloseMenuBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnCloseMenuBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnCloseMenuBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_OnCloseMenuBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_OnCloseMenuBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnCloseMenuBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMenu Function OnCloseMenuBP ***********************************************

// ********** Begin Class UMenu Function OnEnterMenuBP *********************************************
static FName NAME_UMenu_OnEnterMenuBP = FName(TEXT("OnEnterMenuBP"));
void UMenu::OnEnterMenuBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenu_OnEnterMenuBP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMenu_OnEnterMenuBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnEnterMenuBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnEnterMenuBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnEnterMenuBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_OnEnterMenuBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_OnEnterMenuBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnEnterMenuBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMenu Function OnEnterMenuBP ***********************************************

// ********** Begin Class UMenu Function OnExitMenuBP **********************************************
static FName NAME_UMenu_OnExitMenuBP = FName(TEXT("OnExitMenuBP"));
void UMenu::OnExitMenuBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenu_OnExitMenuBP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMenu_OnExitMenuBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnExitMenuBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnExitMenuBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnExitMenuBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_OnExitMenuBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_OnExitMenuBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnExitMenuBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMenu Function OnExitMenuBP ************************************************

// ********** Begin Class UMenu Function OnOpenMenuBP **********************************************
static FName NAME_UMenu_OnOpenMenuBP = FName(TEXT("OnOpenMenuBP"));
void UMenu::OnOpenMenuBP()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenu_OnOpenMenuBP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMenu_OnOpenMenuBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnOpenMenuBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnOpenMenuBP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnOpenMenuBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_OnOpenMenuBP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_OnOpenMenuBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnOpenMenuBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMenu Function OnOpenMenuBP ************************************************

// ********** Begin Class UMenu ********************************************************************
void UMenu::StaticRegisterNativesUMenu()
{
	UClass* Class = UMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AllowsHoldNavigation", &UMenu::execAllowsHoldNavigation },
		{ "GetDefaultSelectedWidget", &UMenu::execGetDefaultSelectedWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenu;
UClass* UMenu::GetPrivateStaticClass()
{
	using TClass = UMenu;
	if (!Z_Registration_Info_UClass_UMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Menu"),
			Z_Registration_Info_UClass_UMenu.InnerSingleton,
			StaticRegisterNativesUMenu,
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
	return Z_Registration_Info_UClass_UMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenu_NoRegister()
{
	return UMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Menu.h" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectedWidget_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowHoldNavigation_MetaData[] = {
		{ "Category", "Menu" },
		{ "Comment", "// If true, this menu will quickly navigable by holding directional inputs. Best for longer menus\n" },
		{ "ModuleRelativePath", "Public/Widgets/Menu.h" },
		{ "ToolTip", "If true, this menu will quickly navigable by holding directional inputs. Best for longer menus" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSelectedWidget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwningPlayer;
	static void NewProp_bAllowHoldNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowHoldNavigation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenu_AllowsHoldNavigation, "AllowsHoldNavigation" }, // 47951364
		{ &Z_Construct_UFunction_UMenu_GetDefaultSelectedWidget, "GetDefaultSelectedWidget" }, // 1211342720
		{ &Z_Construct_UFunction_UMenu_OnCloseMenuBP, "OnCloseMenuBP" }, // 1118517529
		{ &Z_Construct_UFunction_UMenu_OnEnterMenuBP, "OnEnterMenuBP" }, // 352668010
		{ &Z_Construct_UFunction_UMenu_OnExitMenuBP, "OnExitMenuBP" }, // 1200064504
		{ &Z_Construct_UFunction_UMenu_OnOpenMenuBP, "OnOpenMenuBP" }, // 125204370
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_DefaultSelectedWidget = { "DefaultSelectedWidget", nullptr, (EPropertyFlags)0x002108000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu, DefaultSelectedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSelectedWidget_MetaData), NewProp_DefaultSelectedWidget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu, OwningPlayer), Z_Construct_UClass_UBashController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
void Z_Construct_UClass_UMenu_Statics::NewProp_bAllowHoldNavigation_SetBit(void* Obj)
{
	((UMenu*)Obj)->bAllowHoldNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_bAllowHoldNavigation = { "bAllowHoldNavigation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenu), &Z_Construct_UClass_UMenu_Statics::NewProp_bAllowHoldNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowHoldNavigation_MetaData), NewProp_bAllowHoldNavigation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_DefaultSelectedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_bAllowHoldNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenu_Statics::ClassParams = {
	&UMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenu()
{
	if (!Z_Registration_Info_UClass_UMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenu.OuterSingleton, Z_Construct_UClass_UMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenu.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenu);
UMenu::~UMenu() {}
// ********** End Class UMenu **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenu, UMenu::StaticClass, TEXT("UMenu"), &Z_Registration_Info_UClass_UMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenu), 2152296681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h__Script_BashCore_4272397190(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
