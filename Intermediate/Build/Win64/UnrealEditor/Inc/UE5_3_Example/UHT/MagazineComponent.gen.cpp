// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/MagazineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagazineComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMagazineComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMagazineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UMagazineComponent::StaticRegisterNativesUMagazineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagazineComponent);
	UClass* Z_Construct_UClass_UMagazineComponent_NoRegister()
	{
		return UMagazineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagazineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagazineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagazineComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagazineComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/MagazineComponent.h" },
		{ "ModuleRelativePath", "Components/MagazineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagazineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagazineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagazineComponent_Statics::ClassParams = {
		&UMagazineComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMagazineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMagazineComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMagazineComponent()
	{
		if (!Z_Registration_Info_UClass_UMagazineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagazineComponent.OuterSingleton, Z_Construct_UClass_UMagazineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMagazineComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UMagazineComponent>()
	{
		return UMagazineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagazineComponent);
	UMagazineComponent::~UMagazineComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_MagazineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_MagazineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMagazineComponent, UMagazineComponent::StaticClass, TEXT("UMagazineComponent"), &Z_Registration_Info_UClass_UMagazineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagazineComponent), 3702024383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_MagazineComponent_h_2387156830(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_MagazineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_MagazineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
