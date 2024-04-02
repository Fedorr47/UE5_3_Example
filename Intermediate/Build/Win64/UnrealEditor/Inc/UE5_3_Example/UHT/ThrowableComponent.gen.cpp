// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ThrowableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UThrowableComponent::StaticRegisterNativesUThrowableComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowableComponent);
	UClass* Z_Construct_UClass_UThrowableComponent_NoRegister()
	{
		return UThrowableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UThrowableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ThrowableComponent.h" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowPower_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, ThrowPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowPower_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowPower_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowableComponent_Statics::ClassParams = {
		&UThrowableComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThrowableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowableComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UThrowableComponent()
	{
		if (!Z_Registration_Info_UClass_UThrowableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowableComponent.OuterSingleton, Z_Construct_UClass_UThrowableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrowableComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UThrowableComponent>()
	{
		return UThrowableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowableComponent);
	UThrowableComponent::~UThrowableComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrowableComponent, UThrowableComponent::StaticClass, TEXT("UThrowableComponent"), &Z_Registration_Info_UClass_UThrowableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowableComponent), 3076546186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_3447686098(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
