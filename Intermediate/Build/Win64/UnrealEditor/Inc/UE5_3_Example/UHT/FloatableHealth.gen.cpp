// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_3_Example/FloatableHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatableHealth() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UFloatableHealth();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UFloatableHealth_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(UFloatableHealth::execHealthWasChanged)
	{
		P_GET_OBJECT(UBaseMessage,Z_Param_InMsg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealthWasChanged(Z_Param_InMsg);
		P_NATIVE_END;
	}
	void UFloatableHealth::StaticRegisterNativesUFloatableHealth()
	{
		UClass* Class = UFloatableHealth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HealthWasChanged", &UFloatableHealth::execHealthWasChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics
	{
		struct FloatableHealth_eventHealthWasChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatableHealth_eventHealthWasChanged_Parms, InMsg), Z_Construct_UClass_UBaseMessage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::NewProp_InMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatableHealth, nullptr, "HealthWasChanged", nullptr, nullptr, Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::FloatableHealth_eventHealthWasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::FloatableHealth_eventHealthWasChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloatableHealth_HealthWasChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatableHealth_HealthWasChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatableHealth);
	UClass* Z_Construct_UClass_UFloatableHealth_NoRegister()
	{
		return UFloatableHealth::StaticClass();
	}
	struct Z_Construct_UClass_UFloatableHealth_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatableHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatableHealth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatableHealth_HealthWasChanged, "HealthWasChanged" }, // 2247365601
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatableHealth.h" },
		{ "ModuleRelativePath", "FloatableHealth.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHelthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FloatableHealth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHelthBar = { "mHelthBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealth, mHelthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHelthBar_MetaData), Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHelthBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatableHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHelthBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatableHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatableHealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatableHealth_Statics::ClassParams = {
		&UFloatableHealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFloatableHealth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatableHealth_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloatableHealth()
	{
		if (!Z_Registration_Info_UClass_UFloatableHealth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatableHealth.OuterSingleton, Z_Construct_UClass_UFloatableHealth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatableHealth.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UFloatableHealth>()
	{
		return UFloatableHealth::StaticClass();
	}
	UFloatableHealth::UFloatableHealth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatableHealth);
	UFloatableHealth::~UFloatableHealth() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_FloatableHealth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_FloatableHealth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloatableHealth, UFloatableHealth::StaticClass, TEXT("UFloatableHealth"), &Z_Registration_Info_UClass_UFloatableHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatableHealth), 3015039759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_FloatableHealth_h_3776253703(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_FloatableHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_FloatableHealth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
