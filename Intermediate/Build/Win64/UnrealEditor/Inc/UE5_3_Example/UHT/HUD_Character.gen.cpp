// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_Character() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AHUD_Character();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AHUD_Character_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleCharacter_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UCharacterHUDWidget();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UCharacterHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterHUDWidget::execHealthWasChanged)
	{
		P_GET_OBJECT(UBaseMessage,Z_Param_InMsg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealthWasChanged(Z_Param_InMsg);
		P_NATIVE_END;
	}
	void UCharacterHUDWidget::StaticRegisterNativesUCharacterHUDWidget()
	{
		UClass* Class = UCharacterHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HealthWasChanged", &UCharacterHUDWidget::execHealthWasChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics
	{
		struct CharacterHUDWidget_eventHealthWasChanged_Parms
		{
			UBaseMessage* InMsg;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterHUDWidget_eventHealthWasChanged_Parms, InMsg), Z_Construct_UClass_UBaseMessage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::NewProp_InMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterHUDWidget, nullptr, "HealthWasChanged", nullptr, nullptr, Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::CharacterHUDWidget_eventHealthWasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::CharacterHUDWidget_eventHealthWasChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterHUDWidget);
	UClass* Z_Construct_UClass_UCharacterHUDWidget_NoRegister()
	{
		return UCharacterHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHelthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHelthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterHUDWidget_HealthWasChanged, "HealthWasChanged" }, // 842651588
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD_Character.h" },
		{ "ModuleRelativePath", "HUD_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_mHelthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_mHelthBar = { "mHelthBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterHUDWidget, mHelthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_mHelthBar_MetaData), Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_mHelthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "HUD_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterHUDWidget, PlayerCharacter), Z_Construct_UClass_AUE5_3_ExampleCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_PlayerCharacter_MetaData), Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_PlayerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_mHelthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHUDWidget_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterHUDWidget_Statics::ClassParams = {
		&UCharacterHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterHUDWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUDWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UCharacterHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterHUDWidget.OuterSingleton, Z_Construct_UClass_UCharacterHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterHUDWidget.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UCharacterHUDWidget>()
	{
		return UCharacterHUDWidget::StaticClass();
	}
	UCharacterHUDWidget::UCharacterHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterHUDWidget);
	UCharacterHUDWidget::~UCharacterHUDWidget() {}
	void AHUD_Character::StaticRegisterNativesAHUD_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHUD_Character);
	UClass* Z_Construct_UClass_AHUD_Character_NoRegister()
	{
		return AHUD_Character::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllUIWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllUIWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllUIWidgets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCreatedWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCreatedWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mCreatedWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Character_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Character.h" },
		{ "ModuleRelativePath", "HUD_Character.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets_Inner = { "AllUIWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets_MetaData[] = {
		{ "Category", "HUD_Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All on screen widgets to add to the HUD on BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "HUD_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All on screen widgets to add to the HUD on BeginPlay" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets = { "AllUIWidgets", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Character, AllUIWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets_MetaData), Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets_Inner = { "mCreatedWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets = { "mCreatedWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Character, mCreatedWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets_MetaData), Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Character_Statics::NewProp_AllUIWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Character_Statics::NewProp_mCreatedWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Character_Statics::ClassParams = {
		&AHUD_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHUD_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Character_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_Character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHUD_Character()
	{
		if (!Z_Registration_Info_UClass_AHUD_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHUD_Character.OuterSingleton, Z_Construct_UClass_AHUD_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHUD_Character.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AHUD_Character>()
	{
		return AHUD_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Character);
	AHUD_Character::~AHUD_Character() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HUD_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HUD_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterHUDWidget, UCharacterHUDWidget::StaticClass, TEXT("UCharacterHUDWidget"), &Z_Registration_Info_UClass_UCharacterHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterHUDWidget), 654032502U) },
		{ Z_Construct_UClass_AHUD_Character, AHUD_Character::StaticClass, TEXT("AHUD_Character"), &Z_Registration_Info_UClass_AHUD_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_Character), 1927470935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HUD_Character_h_1701978342(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HUD_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HUD_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
