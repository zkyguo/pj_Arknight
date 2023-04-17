// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleTutorial_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleTutorial;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleTutorial()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleTutorial.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleTutorial",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4CC74A8D,
				0x643E5263,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleTutorial.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleTutorial.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleTutorial(Z_Construct_UPackage__Script_SimpleTutorial, TEXT("/Script/SimpleTutorial"), Z_Registration_Info_UPackage__Script_SimpleTutorial, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4CC74A8D, 0x643E5263));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
