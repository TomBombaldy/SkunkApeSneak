// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Player/UIInputComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIInputComponentBase() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UBashController_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UMenu_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext();
BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponentBase();
BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponentBase_NoRegister();
BASHCORE_API UFunction* Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUIInputSignature *****************************************************
struct Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics
{
	struct _Script_BashCore_eventUIInputSignature_Parms
	{
		TScriptInterface<IBashController> FromPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_FromPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::NewProp_FromPlayer = { "FromPlayer", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BashCore_eventUIInputSignature_Parms, FromPlayer), Z_Construct_UClass_UBashController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::NewProp_FromPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BashCore, nullptr, "UIInputSignature__DelegateSignature", Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::_Script_BashCore_eventUIInputSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::_Script_BashCore_eventUIInputSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUIInputSignature_DelegateWrapper(const FMulticastScriptDelegate& UIInputSignature, const TScriptInterface<IBashController>& FromPlayer)
{
	struct _Script_BashCore_eventUIInputSignature_Parms
	{
		TScriptInterface<IBashController> FromPlayer;
	};
	_Script_BashCore_eventUIInputSignature_Parms Parms;
	Parms.FromPlayer=FromPlayer;
	UIInputSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUIInputSignature *******************************************************

// ********** Begin Class UMenuStackContext ********************************************************
void UMenuStackContext::StaticRegisterNativesUMenuStackContext()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenuStackContext;
UClass* UMenuStackContext::GetPrivateStaticClass()
{
	using TClass = UMenuStackContext;
	if (!Z_Registration_Info_UClass_UMenuStackContext.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuStackContext"),
			Z_Registration_Info_UClass_UMenuStackContext.InnerSingleton,
			StaticRegisterNativesUMenuStackContext,
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
	return Z_Registration_Info_UClass_UMenuStackContext.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenuStackContext_NoRegister()
{
	return UMenuStackContext::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenuStackContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.\n * Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu.\n */" },
		{ "IncludePath", "Components/Player/UIInputComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
		{ "ToolTip", "Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.\n* Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuStackContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMenuStackContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStackContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuStackContext_Statics::ClassParams = {
	&UMenuStackContext::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuStackContext()
{
	if (!Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton, Z_Construct_UClass_UMenuStackContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton;
}
UMenuStackContext::UMenuStackContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuStackContext);
UMenuStackContext::~UMenuStackContext() {}
// ********** End Class UMenuStackContext **********************************************************

// ********** Begin Class UUIInputComponentBase Function CloseAllMenus *****************************
struct Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponentBase, nullptr, "CloseAllMenus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponentBase::execCloseAllMenus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseAllMenus();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponentBase Function CloseAllMenus *******************************

// ********** Begin Class UUIInputComponentBase Function CloseMenu *********************************
struct Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics
{
	struct UIInputComponentBase_eventCloseMenu_Parms
	{
		UMenu* menu;
		bool closeAll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/* Call to close a menu. Will close all menus on top of it.\n\x09 * @param menu - The menu to close\n\x09 */" },
		{ "CPP_Default_closeAll", "false" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
		{ "ToolTip", "Call to close a menu. Will close all menus on top of it.\n       * @param menu - The menu to close" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_menu;
	static void NewProp_closeAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_closeAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponentBase_eventCloseMenu_Parms, menu), Z_Construct_UClass_UMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_menu_MetaData), NewProp_menu_MetaData) };
void Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::NewProp_closeAll_SetBit(void* Obj)
{
	((UIInputComponentBase_eventCloseMenu_Parms*)Obj)->closeAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::NewProp_closeAll = { "closeAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIInputComponentBase_eventCloseMenu_Parms), &Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::NewProp_closeAll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::NewProp_menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::NewProp_closeAll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponentBase, nullptr, "CloseMenu", Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::UIInputComponentBase_eventCloseMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::UIInputComponentBase_eventCloseMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponentBase_CloseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponentBase_CloseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponentBase::execCloseMenu)
{
	P_GET_OBJECT(UMenu,Z_Param_menu);
	P_GET_UBOOL(Z_Param_closeAll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseMenu(Z_Param_menu,Z_Param_closeAll);
	P_NATIVE_END;
}
// ********** End Class UUIInputComponentBase Function CloseMenu ***********************************

// ********** Begin Class UUIInputComponentBase Function FocusWidget *******************************
struct Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics
{
	struct UIInputComponentBase_eventFocusWidget_Parms
	{
		UUserWidget* widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "//Has User focus specific widget.\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
		{ "ToolTip", "Has User focus specific widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponentBase_eventFocusWidget_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::NewProp_widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponentBase, nullptr, "FocusWidget", Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::UIInputComponentBase_eventFocusWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::UIInputComponentBase_eventFocusWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponentBase_FocusWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponentBase_FocusWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponentBase::execFocusWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusWidget(Z_Param_widget);
	P_NATIVE_END;
}
// ********** End Class UUIInputComponentBase Function FocusWidget *********************************

// ********** Begin Class UUIInputComponentBase Function GetFocusWidget ****************************
struct Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics
{
	struct UIInputComponentBase_eventGetFocusWidget_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponentBase_eventGetFocusWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponentBase, nullptr, "GetFocusWidget", Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::UIInputComponentBase_eventGetFocusWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::UIInputComponentBase_eventGetFocusWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponentBase::execGetFocusWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetFocusWidget();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponentBase Function GetFocusWidget ******************************

// ********** Begin Class UUIInputComponentBase Function OpenMenu **********************************
struct Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics
{
	struct UIInputComponentBase_eventOpenMenu_Parms
	{
		UMenu* menu;
		bool clearMenuStack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/* Call to open a menu with this player as the controller.\n\x09 * @param menu - The menu to open\n\x09 * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
		{ "ToolTip", "Call to open a menu with this player as the controller.\n       * @param menu - The menu to open\n       * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_menu;
	static void NewProp_clearMenuStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_clearMenuStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponentBase_eventOpenMenu_Parms, menu), Z_Construct_UClass_UMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_menu_MetaData), NewProp_menu_MetaData) };
void Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::NewProp_clearMenuStack_SetBit(void* Obj)
{
	((UIInputComponentBase_eventOpenMenu_Parms*)Obj)->clearMenuStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::NewProp_clearMenuStack = { "clearMenuStack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIInputComponentBase_eventOpenMenu_Parms), &Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::NewProp_clearMenuStack_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::NewProp_menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::NewProp_clearMenuStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponentBase, nullptr, "OpenMenu", Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::UIInputComponentBase_eventOpenMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::UIInputComponentBase_eventOpenMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponentBase_OpenMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponentBase_OpenMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponentBase::execOpenMenu)
{
	P_GET_OBJECT(UMenu,Z_Param_menu);
	P_GET_UBOOL(Z_Param_clearMenuStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenMenu(Z_Param_menu,Z_Param_clearMenuStack);
	P_NATIVE_END;
}
// ********** End Class UUIInputComponentBase Function OpenMenu ************************************

// ********** Begin Class UUIInputComponentBase Function SelectOption ******************************
struct Z_Construct_UFunction_UUIInputComponentBase_SelectOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponentBase_SelectOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponentBase, nullptr, "SelectOption", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponentBase_SelectOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponentBase_SelectOption_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponentBase_SelectOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponentBase_SelectOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponentBase::execSelectOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectOption();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponentBase Function SelectOption ********************************

// ********** Begin Class UUIInputComponentBase ****************************************************
void UUIInputComponentBase::StaticRegisterNativesUUIInputComponentBase()
{
	UClass* Class = UUIInputComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseAllMenus", &UUIInputComponentBase::execCloseAllMenus },
		{ "CloseMenu", &UUIInputComponentBase::execCloseMenu },
		{ "FocusWidget", &UUIInputComponentBase::execFocusWidget },
		{ "GetFocusWidget", &UUIInputComponentBase::execGetFocusWidget },
		{ "OpenMenu", &UUIInputComponentBase::execOpenMenu },
		{ "SelectOption", &UUIInputComponentBase::execSelectOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIInputComponentBase;
UClass* UUIInputComponentBase::GetPrivateStaticClass()
{
	using TClass = UUIInputComponentBase;
	if (!Z_Registration_Info_UClass_UUIInputComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIInputComponentBase"),
			Z_Registration_Info_UClass_UUIInputComponentBase.InnerSingleton,
			StaticRegisterNativesUUIInputComponentBase,
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
	return Z_Registration_Info_UClass_UUIInputComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIInputComponentBase_NoRegister()
{
	return UUIInputComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIInputComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/Player/UIInputComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input Delegates\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
		{ "ToolTip", "Input Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBackButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDownButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRightButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpButtonHeld_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDownButtonHeld_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftButtonHeld_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRightButtonHeld_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBackButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpButtonHeld;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownButtonHeld;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftButtonHeld;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightButtonHeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedWidget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIInputComponentBase_CloseAllMenus, "CloseAllMenus" }, // 102788730
		{ &Z_Construct_UFunction_UUIInputComponentBase_CloseMenu, "CloseMenu" }, // 2793488302
		{ &Z_Construct_UFunction_UUIInputComponentBase_FocusWidget, "FocusWidget" }, // 1140481921
		{ &Z_Construct_UFunction_UUIInputComponentBase_GetFocusWidget, "GetFocusWidget" }, // 3401377780
		{ &Z_Construct_UFunction_UUIInputComponentBase_OpenMenu, "OpenMenu" }, // 2591250353
		{ &Z_Construct_UFunction_UUIInputComponentBase_SelectOption, "SelectOption" }, // 1166036507
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIInputComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnSelectButtonPressed = { "OnSelectButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnSelectButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectButtonPressed_MetaData), NewProp_OnSelectButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnBackButtonPressed = { "OnBackButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnBackButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBackButtonPressed_MetaData), NewProp_OnBackButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnStartButtonPressed = { "OnStartButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnStartButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartButtonPressed_MetaData), NewProp_OnStartButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnUpButtonPressed = { "OnUpButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnUpButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpButtonPressed_MetaData), NewProp_OnUpButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnDownButtonPressed = { "OnDownButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnDownButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDownButtonPressed_MetaData), NewProp_OnDownButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnLeftButtonPressed = { "OnLeftButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnLeftButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeftButtonPressed_MetaData), NewProp_OnLeftButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnRightButtonPressed = { "OnRightButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnRightButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRightButtonPressed_MetaData), NewProp_OnRightButtonPressed_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnUpButtonHeld = { "OnUpButtonHeld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnUpButtonHeld), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpButtonHeld_MetaData), NewProp_OnUpButtonHeld_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnDownButtonHeld = { "OnDownButtonHeld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnDownButtonHeld), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDownButtonHeld_MetaData), NewProp_OnDownButtonHeld_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnLeftButtonHeld = { "OnLeftButtonHeld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnLeftButtonHeld), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeftButtonHeld_MetaData), NewProp_OnLeftButtonHeld_MetaData) }; // 3909273098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnRightButtonHeld = { "OnRightButtonHeld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OnRightButtonHeld), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRightButtonHeld_MetaData), NewProp_OnRightButtonHeld_MetaData) }; // 3909273098
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_FocusedWidget = { "FocusedWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, FocusedWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedWidget_MetaData), NewProp_FocusedWidget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, OwningPlayer), Z_Construct_UClass_UBashController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_MenuStack_Inner = { "MenuStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMenuStackContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_MenuStack = { "MenuStack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponentBase, MenuStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuStack_MetaData), NewProp_MenuStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIInputComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnSelectButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnBackButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnStartButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnUpButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnDownButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnLeftButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnRightButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnUpButtonHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnDownButtonHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnLeftButtonHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OnRightButtonHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_FocusedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_MenuStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponentBase_Statics::NewProp_MenuStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIInputComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIInputComponentBase_Statics::ClassParams = {
	&UUIInputComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIInputComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponentBase_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIInputComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIInputComponentBase()
{
	if (!Z_Registration_Info_UClass_UUIInputComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIInputComponentBase.OuterSingleton, Z_Construct_UClass_UUIInputComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIInputComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIInputComponentBase);
UUIInputComponentBase::~UUIInputComponentBase() {}
// ********** End Class UUIInputComponentBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuStackContext, UMenuStackContext::StaticClass, TEXT("UMenuStackContext"), &Z_Registration_Info_UClass_UMenuStackContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuStackContext), 2794084451U) },
		{ Z_Construct_UClass_UUIInputComponentBase, UUIInputComponentBase::StaticClass, TEXT("UUIInputComponentBase"), &Z_Registration_Info_UClass_UUIInputComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIInputComponentBase), 3010370379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h__Script_BashCore_1576557291(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
