// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/PracticeModeUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePracticeModeUI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPracticeModeUI();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPracticeModeUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPracticeModeUI Function EndResetEffect **********************************
static FName NAME_UPracticeModeUI_EndResetEffect = FName(TEXT("EndResetEffect"));
void UPracticeModeUI::EndResetEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_UPracticeModeUI_EndResetEffect);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "EndResetEffect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPracticeModeUI_EndResetEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPracticeModeUI Function EndResetEffect ************************************

// ********** Begin Class UPracticeModeUI Function GetPreviewWindow ********************************
struct PracticeModeUI_eventGetPreviewWindow_Parms
{
	UPanelWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	PracticeModeUI_eventGetPreviewWindow_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UPracticeModeUI_GetPreviewWindow = FName(TEXT("GetPreviewWindow"));
UPanelWidget* UPracticeModeUI::GetPreviewWindow() const
{
	PracticeModeUI_eventGetPreviewWindow_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UPracticeModeUI_GetPreviewWindow);
		const_cast<UPracticeModeUI*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PracticeModeUI_eventGetPreviewWindow_Parms, ReturnValue), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "GetPreviewWindow", Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers), sizeof(PracticeModeUI_eventGetPreviewWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PracticeModeUI_eventGetPreviewWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPracticeModeUI Function GetPreviewWindow **********************************

// ********** Begin Class UPracticeModeUI Function GetTextSize *************************************
struct Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics
{
	struct PracticeModeUI_eventGetTextSize_Parms
	{
		const UTextBlock* Text;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PracticeModeUI_eventGetTextSize_Parms, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PracticeModeUI_eventGetTextSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "GetTextSize", Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PracticeModeUI_eventGetTextSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PracticeModeUI_eventGetTextSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPracticeModeUI_GetTextSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPracticeModeUI::execGetTextSize)
{
	P_GET_OBJECT(UTextBlock,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetTextSize(Z_Param_Text);
	P_NATIVE_END;
}
// ********** End Class UPracticeModeUI Function GetTextSize ***************************************

// ********** Begin Class UPracticeModeUI Function PlayResetEffect *********************************
static FName NAME_UPracticeModeUI_PlayResetEffect = FName(TEXT("PlayResetEffect"));
void UPracticeModeUI::PlayResetEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_UPracticeModeUI_PlayResetEffect);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "PlayResetEffect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPracticeModeUI Function PlayResetEffect ***********************************

// ********** Begin Class UPracticeModeUI **********************************************************
void UPracticeModeUI::StaticRegisterNativesUPracticeModeUI()
{
	UClass* Class = UPracticeModeUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTextSize", &UPracticeModeUI::execGetTextSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPracticeModeUI;
UClass* UPracticeModeUI::GetPrivateStaticClass()
{
	using TClass = UPracticeModeUI;
	if (!Z_Registration_Info_UClass_UPracticeModeUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PracticeModeUI"),
			Z_Registration_Info_UClass_UPracticeModeUI.InnerSingleton,
			StaticRegisterNativesUPracticeModeUI,
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
	return Z_Registration_Info_UClass_UPracticeModeUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UPracticeModeUI_NoRegister()
{
	return UPracticeModeUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPracticeModeUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/PracticeModeUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPracticeModeUI_EndResetEffect, "EndResetEffect" }, // 1651892302
		{ &Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow, "GetPreviewWindow" }, // 896645833
		{ &Z_Construct_UFunction_UPracticeModeUI_GetTextSize, "GetTextSize" }, // 3461892459
		{ &Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect, "PlayResetEffect" }, // 3888728421
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeModeUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeModeUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeModeUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeModeUI_Statics::ClassParams = {
	&UPracticeModeUI::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeModeUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeModeUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeModeUI()
{
	if (!Z_Registration_Info_UClass_UPracticeModeUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeModeUI.OuterSingleton, Z_Construct_UClass_UPracticeModeUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeModeUI.OuterSingleton;
}
UPracticeModeUI::UPracticeModeUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeModeUI);
UPracticeModeUI::~UPracticeModeUI() {}
// ********** End Class UPracticeModeUI ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeModeUI, UPracticeModeUI::StaticClass, TEXT("UPracticeModeUI"), &Z_Registration_Info_UClass_UPracticeModeUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeModeUI), 21157324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h__Script_MinigameCore_4144677900(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
