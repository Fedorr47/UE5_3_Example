// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PickupbleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupbleComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UPickupbleComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UPickupbleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UPickupbleComponent::StaticRegisterNativesUPickupbleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupbleComponent);
	UClass* Z_Construct_UClass_UPickupbleComponent_NoRegister()
	{
		return UPickupbleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickupbleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupbleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupbleComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupbleComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/PickupbleComponent.h" },
		{ "ModuleRelativePath", "Components/PickupbleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupbleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupbleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupbleComponent_Statics::ClassParams = {
		&UPickupbleComponent::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupbleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickupbleComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPickupbleComponent()
	{
		if (!Z_Registration_Info_UClass_UPickupbleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupbleComponent.OuterSingleton, Z_Construct_UClass_UPickupbleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupbleComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UPickupbleComponent>()
	{
		return UPickupbleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupbleComponent);
	UPickupbleComponent::~UPickupbleComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_PickupbleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_PickupbleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupbleComponent, UPickupbleComponent::StaticClass, TEXT("UPickupbleComponent"), &Z_Registration_Info_UClass_UPickupbleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupbleComponent), 2051685163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_PickupbleComponent_h_1644702175(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_PickupbleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_PickupbleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
