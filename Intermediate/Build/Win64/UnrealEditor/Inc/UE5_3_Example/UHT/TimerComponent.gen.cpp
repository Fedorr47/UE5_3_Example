// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/TimerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UTimerComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UTimerComponent::StaticRegisterNativesUTimerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimerComponent);
	UClass* Z_Construct_UClass_UTimerComponent_NoRegister()
	{
		return UTimerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTimerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/TimerComponent.h" },
		{ "ModuleRelativePath", "Components/TimerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Components/TimerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerComponent, TimeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeLeft_MetaData), Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeLeft_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimerComponent_Statics::ClassParams = {
		&UTimerComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTimerComponent()
	{
		if (!Z_Registration_Info_UClass_UTimerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimerComponent.OuterSingleton, Z_Construct_UClass_UTimerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimerComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UTimerComponent>()
	{
		return UTimerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerComponent);
	UTimerComponent::~UTimerComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_TimerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_TimerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimerComponent, UTimerComponent::StaticClass, TEXT("UTimerComponent"), &Z_Registration_Info_UClass_UTimerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerComponent), 2595253732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_TimerComponent_h_3650960480(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_TimerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_TimerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
