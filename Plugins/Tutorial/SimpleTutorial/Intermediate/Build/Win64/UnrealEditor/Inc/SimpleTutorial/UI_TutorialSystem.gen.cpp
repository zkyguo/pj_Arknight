// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTutorial/Public/UI_TutorialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_TutorialSystem() {}
// Cross Module References
	SIMPLETUTORIAL_API UClass* Z_Construct_UClass_UUI_TutorialSystem_NoRegister();
	SIMPLETUTORIAL_API UClass* Z_Construct_UClass_UUI_TutorialSystem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimpleTutorial();
// End Cross Module References
	void UUI_TutorialSystem::StaticRegisterNativesUUI_TutorialSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_TutorialSystem);
	UClass* Z_Construct_UClass_UUI_TutorialSystem_NoRegister()
	{
		return UUI_TutorialSystem::StaticClass();
	}
	struct Z_Construct_UClass_UUI_TutorialSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUI_TutorialSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleTutorial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_TutorialSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI_TutorialSystem.h" },
		{ "ModuleRelativePath", "Public/UI_TutorialSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUI_TutorialSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_TutorialSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_TutorialSystem_Statics::ClassParams = {
		&UUI_TutorialSystem::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUI_TutorialSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_TutorialSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUI_TutorialSystem()
	{
		if (!Z_Registration_Info_UClass_UUI_TutorialSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_TutorialSystem.OuterSingleton, Z_Construct_UClass_UUI_TutorialSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUI_TutorialSystem.OuterSingleton;
	}
	template<> SIMPLETUTORIAL_API UClass* StaticClass<UUI_TutorialSystem>()
	{
		return UUI_TutorialSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_TutorialSystem);
	struct Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_UI_TutorialSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_UI_TutorialSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUI_TutorialSystem, UUI_TutorialSystem::StaticClass, TEXT("UUI_TutorialSystem"), &Z_Registration_Info_UClass_UUI_TutorialSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_TutorialSystem), 4260399630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_UI_TutorialSystem_h_3249345271(TEXT("/Script/SimpleTutorial"),
		Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_UI_TutorialSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_UI_TutorialSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
