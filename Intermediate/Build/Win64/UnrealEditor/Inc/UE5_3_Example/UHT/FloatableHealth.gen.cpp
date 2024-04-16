// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/FloatableHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatableHealth() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UFloatableHealth();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UFloatableHealth_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UFloatableHealthComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UFloatableHealthComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UFloatableHealth::StaticRegisterNativesUFloatableHealth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatableHealth);
	UClass* Z_Construct_UClass_UFloatableHealth_NoRegister()
	{
		return UFloatableHealth::StaticClass();
	}
	struct Z_Construct_UClass_UFloatableHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHealthBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatableHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/FloatableHealth.h" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FloatableHealth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHealthBar = { "mHealthBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealth, mHealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHealthBar_MetaData), Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHealthBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatableHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealth_Statics::NewProp_mHealthBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatableHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatableHealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatableHealth_Statics::ClassParams = {
		&UFloatableHealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatableHealth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	void UFloatableHealthComponent::StaticRegisterNativesUFloatableHealthComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatableHealthComponent);
	UClass* Z_Construct_UClass_UFloatableHealthComponent_NoRegister()
	{
		return UFloatableHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFloatableHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatableHealthW_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FloatableHealthW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mFloatableHealthWC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mFloatableHealthWC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mFloatableHealthW_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mFloatableHealthW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshToAttach_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToAttach;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatableHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LODZERO" },
		{ "IncludePath", "Components/FloatableHealth.h" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_FloatableHealthW_MetaData[] = {
		{ "Category", "FlaotableHealthWidget" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_FloatableHealthW = { "FloatableHealthW", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealthComponent, FloatableHealthW), Z_Construct_UClass_UClass, Z_Construct_UClass_UFloatableHealth_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_FloatableHealthW_MetaData), Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_FloatableHealthW_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "FlaotableHealth" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealthComponent, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_HealthPercent_MetaData), Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_HealthPercent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthWC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthWC = { "mFloatableHealthWC", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealthComponent, mFloatableHealthWC), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthWC_MetaData), Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthWC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthW_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthW = { "mFloatableHealthW", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealthComponent, mFloatableHealthW), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthW_MetaData), Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthW_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_CameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealthComponent, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_CameraManager_MetaData), Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_CameraManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_MeshToAttach_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/FloatableHealth.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_MeshToAttach = { "MeshToAttach", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatableHealthComponent, MeshToAttach), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_MeshToAttach_MetaData), Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_MeshToAttach_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatableHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_FloatableHealthW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_HealthPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthWC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_mFloatableHealthW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_CameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatableHealthComponent_Statics::NewProp_MeshToAttach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatableHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatableHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatableHealthComponent_Statics::ClassParams = {
		&UFloatableHealthComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatableHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatableHealthComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatableHealthComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloatableHealthComponent()
	{
		if (!Z_Registration_Info_UClass_UFloatableHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatableHealthComponent.OuterSingleton, Z_Construct_UClass_UFloatableHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatableHealthComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UFloatableHealthComponent>()
	{
		return UFloatableHealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatableHealthComponent);
	UFloatableHealthComponent::~UFloatableHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_FloatableHealth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_FloatableHealth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloatableHealth, UFloatableHealth::StaticClass, TEXT("UFloatableHealth"), &Z_Registration_Info_UClass_UFloatableHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatableHealth), 2856575800U) },
		{ Z_Construct_UClass_UFloatableHealthComponent, UFloatableHealthComponent::StaticClass, TEXT("UFloatableHealthComponent"), &Z_Registration_Info_UClass_UFloatableHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatableHealthComponent), 3788358366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_FloatableHealth_h_1695571770(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_FloatableHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_FloatableHealth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
