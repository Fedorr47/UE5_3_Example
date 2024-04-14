// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PauseMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenu() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UPauseMenuWidget();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UPauseMenuWidget::StaticRegisterNativesUPauseMenuWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseMenuWidget);
	UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister()
	{
		return UPauseMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mContinueGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mContinueGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mExitGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mExitGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PauseMenu.h" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mContinueGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mContinueGame = { "mContinueGame", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, mContinueGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mContinueGame_MetaData), Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mContinueGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mExitGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mExitGame = { "mExitGame", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, mExitGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mExitGame_MetaData), Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mExitGame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mContinueGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mExitGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams = {
		&UPauseMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPauseMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton, Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UPauseMenuWidget>()
	{
		return UPauseMenuWidget::StaticClass();
	}
	UPauseMenuWidget::UPauseMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenuWidget);
	UPauseMenuWidget::~UPauseMenuWidget() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPauseMenuWidget, UPauseMenuWidget::StaticClass, TEXT("UPauseMenuWidget"), &Z_Registration_Info_UClass_UPauseMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseMenuWidget), 1690012186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_931585555(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
