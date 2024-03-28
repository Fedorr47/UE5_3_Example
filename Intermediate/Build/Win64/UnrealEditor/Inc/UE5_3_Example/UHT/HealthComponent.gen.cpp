// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthPercentMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthPercentMessage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UHealthPercentMessage::StaticRegisterNativesUHealthPercentMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthPercentMessage);
	UClass* Z_Construct_UClass_UHealthPercentMessage_NoRegister()
	{
		return UHealthPercentMessage::StaticClass();
	}
	struct Z_Construct_UClass_UHealthPercentMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthPercentMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthPercentMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthPercentMessage, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData), Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthPercentMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthPercentMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthPercentMessage_Statics::ClassParams = {
		&UHealthPercentMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthPercentMessage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthPercentMessage()
	{
		if (!Z_Registration_Info_UClass_UHealthPercentMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthPercentMessage.OuterSingleton, Z_Construct_UClass_UHealthPercentMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthPercentMessage.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UHealthPercentMessage>()
	{
		return UHealthPercentMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthPercentMessage);
	UHealthPercentMessage::~UHealthPercentMessage() {}
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
		&UHealthComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UHealthComponent>()
	{
		return UHealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
	UHealthComponent::~UHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_HealthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_HealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthPercentMessage, UHealthPercentMessage::StaticClass, TEXT("UHealthPercentMessage"), &Z_Registration_Info_UClass_UHealthPercentMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthPercentMessage), 1036863835U) },
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 2986592623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_HealthComponent_h_2000906337(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_HealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
