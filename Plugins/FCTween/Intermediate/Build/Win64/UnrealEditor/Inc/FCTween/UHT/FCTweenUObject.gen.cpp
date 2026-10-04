// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTweenUObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFCTweenUObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenUObject();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenUObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_FCTween();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFCTweenUObject **********************************************************
void UFCTweenUObject::StaticRegisterNativesUFCTweenUObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFCTweenUObject;
UClass* UFCTweenUObject::GetPrivateStaticClass()
{
	using TClass = UFCTweenUObject;
	if (!Z_Registration_Info_UClass_UFCTweenUObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FCTweenUObject"),
			Z_Registration_Info_UClass_UFCTweenUObject.InnerSingleton,
			StaticRegisterNativesUFCTweenUObject,
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
	return Z_Registration_Info_UClass_UFCTweenUObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UFCTweenUObject_NoRegister()
{
	return UFCTweenUObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFCTweenUObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Use this to wrap an FCTweenInstance inside a UObject, so that it's destroyed when its outer object is destroyed\n */" },
		{ "IncludePath", "FCTweenUObject.h" },
		{ "ModuleRelativePath", "Public/FCTweenUObject.h" },
		{ "ToolTip", "@brief Use this to wrap an FCTweenInstance inside a UObject, so that it's destroyed when its outer object is destroyed" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenUObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFCTweenUObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenUObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenUObject_Statics::ClassParams = {
	&UFCTweenUObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenUObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UFCTweenUObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFCTweenUObject()
{
	if (!Z_Registration_Info_UClass_UFCTweenUObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenUObject.OuterSingleton, Z_Construct_UClass_UFCTweenUObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFCTweenUObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenUObject);
UFCTweenUObject::~UFCTweenUObject() {}
// ********** End Class UFCTweenUObject ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenUObject_h__Script_FCTween_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenUObject, UFCTweenUObject::StaticClass, TEXT("UFCTweenUObject"), &Z_Registration_Info_UClass_UFCTweenUObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenUObject), 2327713537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenUObject_h__Script_FCTween_2709225291(TEXT("/Script/FCTween"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenUObject_h__Script_FCTween_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenUObject_h__Script_FCTween_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
