// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformManager_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlatformManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlatformManager()
	{
		if (!Z_Registration_Info_UPackage__Script_PlatformManager.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlatformManager",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x676EDEC3,
				0x44C0C627,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlatformManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlatformManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlatformManager(Z_Construct_UPackage__Script_PlatformManager, TEXT("/Script/PlatformManager"), Z_Registration_Info_UPackage__Script_PlatformManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x676EDEC3, 0x44C0C627));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
