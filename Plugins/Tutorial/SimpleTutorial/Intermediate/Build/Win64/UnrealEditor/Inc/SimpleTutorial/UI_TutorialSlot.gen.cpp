// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTutorial/Public/Tutorial/UI_TutorialSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_TutorialSlot() {}
// Cross Module References
	SIMPLETUTORIAL_API UClass* Z_Construct_UClass_UUI_TutorialSlot_NoRegister();
	SIMPLETUTORIAL_API UClass* Z_Construct_UClass_UUI_TutorialSlot();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimpleTutorial();
// End Cross Module References
	void UUI_TutorialSlot::StaticRegisterNativesUUI_TutorialSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_TutorialSlot);
	UClass* Z_Construct_UClass_UUI_TutorialSlot_NoRegister()
	{
		return UUI_TutorialSlot::StaticClass();
	}
	struct Z_Construct_UClass_UUI_TutorialSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUI_TutorialSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleTutorial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_TutorialSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tutorial/UI_TutorialSlot.h" },
		{ "ModuleRelativePath", "Public/Tutorial/UI_TutorialSlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUI_TutorialSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_TutorialSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_TutorialSlot_Statics::ClassParams = {
		&UUI_TutorialSlot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUI_TutorialSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_TutorialSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUI_TutorialSlot()
	{
		if (!Z_Registration_Info_UClass_UUI_TutorialSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_TutorialSlot.OuterSingleton, Z_Construct_UClass_UUI_TutorialSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUI_TutorialSlot.OuterSingleton;
	}
	template<> SIMPLETUTORIAL_API UClass* StaticClass<UUI_TutorialSlot>()
	{
		return UUI_TutorialSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_TutorialSlot);
	struct Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_Tutorial_UI_TutorialSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_Tutorial_UI_TutorialSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUI_TutorialSlot, UUI_TutorialSlot::StaticClass, TEXT("UUI_TutorialSlot"), &Z_Registration_Info_UClass_UUI_TutorialSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_TutorialSlot), 1423859085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_Tutorial_UI_TutorialSlot_h_1403981532(TEXT("/Script/SimpleTutorial"),
		Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_Tutorial_UI_TutorialSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pj_Arknight_Plugins_Tutorial_SimpleTutorial_Source_SimpleTutorial_Public_Tutorial_UI_TutorialSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
