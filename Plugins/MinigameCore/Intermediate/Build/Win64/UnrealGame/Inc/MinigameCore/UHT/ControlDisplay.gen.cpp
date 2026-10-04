// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ControlDisplay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeControlDisplay() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FControlDisplay();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FControlDisplay ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FControlDisplay;
class UScriptStruct* FControlDisplay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FControlDisplay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FControlDisplay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlDisplay, (UObject*)Z_Construct_UPackage__Script_MinigameCore(), TEXT("ControlDisplay"));
	}
	return Z_Registration_Info_UScriptStruct_FControlDisplay.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FControlDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Data/ControlDisplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[] = {
		{ "Category", "Control Display" },
		{ "Comment", "// The image that will be displayed in the instructions. Use to designate what the input is (button, flex, etc.)\n" },
		{ "ModuleRelativePath", "Public/Data/ControlDisplay.h" },
		{ "ToolTip", "The image that will be displayed in the instructions. Use to designate what the input is (button, flex, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "Category", "Control Display" },
		{ "Comment", "// The text that will be displayed in the instructions. Describe what effect the input will have on the game or player.\n" },
		{ "ModuleRelativePath", "Public/Data/ControlDisplay.h" },
		{ "ToolTip", "The text that will be displayed in the instructions. Describe what effect the input will have on the game or player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
	static const UECodeGen_Private::FTextPropertyParams NewProp_text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlDisplay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlDisplay, image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_image_MetaData), NewProp_image_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlDisplay, text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlDisplay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	nullptr,
	&NewStructOps,
	"ControlDisplay",
	Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers),
	sizeof(FControlDisplay),
	alignof(FControlDisplay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlDisplay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlDisplay()
{
	if (!Z_Registration_Info_UScriptStruct_FControlDisplay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FControlDisplay.InnerSingleton, Z_Construct_UScriptStruct_FControlDisplay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FControlDisplay.InnerSingleton;
}
// ********** End ScriptStruct FControlDisplay *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_ControlDisplay_h__Script_MinigameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlDisplay::StaticStruct, Z_Construct_UScriptStruct_FControlDisplay_Statics::NewStructOps, TEXT("ControlDisplay"), &Z_Registration_Info_UScriptStruct_FControlDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlDisplay), 2154370425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_ControlDisplay_h__Script_MinigameCore_962829047(TEXT("/Script/MinigameCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_ControlDisplay_h__Script_MinigameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_ControlDisplay_h__Script_MinigameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
