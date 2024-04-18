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
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UPauseMenuWidget();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(UPauseMenuWidget::execMappingContextWasAdded)
	{
		P_GET_OBJECT(UEnhancedInputComponent,Z_Param_EnhancedInputComponent);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MappingContextWasAdded(Z_Param_EnhancedInputComponent,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenuWidget::execClosePauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePauseMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenuWidget::execTogglePauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePauseMenu();
		P_NATIVE_END;
	}
	void UPauseMenuWidget::StaticRegisterNativesUPauseMenuWidget()
	{
		UClass* Class = UPauseMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePauseMenu", &UPauseMenuWidget::execClosePauseMenu },
			{ "MappingContextWasAdded", &UPauseMenuWidget::execMappingContextWasAdded },
			{ "TogglePauseMenu", &UPauseMenuWidget::execTogglePauseMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "ClosePauseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics
	{
		struct PauseMenuWidget_eventMappingContextWasAdded_Parms
		{
			UEnhancedInputComponent* EnhancedInputComponent;
			APlayerController* PlayerController;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_EnhancedInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_EnhancedInputComponent = { "EnhancedInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventMappingContextWasAdded_Parms, EnhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_EnhancedInputComponent_MetaData), Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_EnhancedInputComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventMappingContextWasAdded_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_EnhancedInputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "MappingContextWasAdded", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::PauseMenuWidget_eventMappingContextWasAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::PauseMenuWidget_eventMappingContextWasAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "TogglePauseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseMenuWidget);
	UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister()
	{
		return UPauseMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasGamePaused_MetaData[];
#endif
		static void NewProp_WasGamePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasGamePaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenuWidget_ClosePauseMenu, "ClosePauseMenu" }, // 3441083495
		{ &Z_Construct_UFunction_UPauseMenuWidget_MappingContextWasAdded, "MappingContextWasAdded" }, // 2723237963
		{ &Z_Construct_UFunction_UPauseMenuWidget_TogglePauseMenu, "TogglePauseMenu" }, // 1571936695
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseAction_MetaData), Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused_MetaData[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	void Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused_SetBit(void* Obj)
	{
		((UPauseMenuWidget*)Obj)->WasGamePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused = { "WasGamePaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPauseMenuWidget), &Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused_MetaData), Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mPlayerController = { "mPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, mPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mPlayerController_MetaData), Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mPlayerController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mContinueGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mExitGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_WasGamePaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_mPlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams = {
		&UPauseMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPauseMenuWidget, UPauseMenuWidget::StaticClass, TEXT("UPauseMenuWidget"), &Z_Registration_Info_UClass_UPauseMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseMenuWidget), 2899000437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_3291952198(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UI_PauseMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
