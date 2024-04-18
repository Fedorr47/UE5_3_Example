// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMainMenuidget();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMainMenuidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UMainMenuidget::StaticRegisterNativesUMainMenuidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuidget);
	UClass* Z_Construct_UClass_UMainMenuidget_NoRegister()
	{
		return UMainMenuidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mStartGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mStartGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mExitGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mExitGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MainMenu.h" },
		{ "ModuleRelativePath", "UI/MainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mStartGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mStartGame = { "mStartGame", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuidget, mStartGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mStartGame_MetaData), Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mStartGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mExitGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mExitGame = { "mExitGame", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuidget, mExitGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mExitGame_MetaData), Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mExitGame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mStartGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuidget_Statics::NewProp_mExitGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuidget_Statics::ClassParams = {
		&UMainMenuidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainMenuidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainMenuidget()
	{
		if (!Z_Registration_Info_UClass_UMainMenuidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuidget.OuterSingleton, Z_Construct_UClass_UMainMenuidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainMenuidget.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UMainMenuidget>()
	{
		return UMainMenuidget::StaticClass();
	}
	UMainMenuidget::UMainMenuidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuidget);
	UMainMenuidget::~UMainMenuidget() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_MainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_MainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuidget, UMainMenuidget::StaticClass, TEXT("UMainMenuidget"), &Z_Registration_Info_UClass_UMainMenuidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuidget), 547896998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_MainMenu_h_1668678907(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_MainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
