// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ShootComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UShootComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UShootComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UShootComponent::StaticRegisterNativesUShootComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShootComponent);
	UClass* Z_Construct_UClass_UShootComponent_NoRegister()
	{
		return UShootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ShootComponent.h" },
		{ "ModuleRelativePath", "Components/ShootComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShootComponent_Statics::ClassParams = {
		&UShootComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UShootComponent()
	{
		if (!Z_Registration_Info_UClass_UShootComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShootComponent.OuterSingleton, Z_Construct_UClass_UShootComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShootComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UShootComponent>()
	{
		return UShootComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootComponent);
	UShootComponent::~UShootComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ShootComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ShootComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShootComponent, UShootComponent::StaticClass, TEXT("UShootComponent"), &Z_Registration_Info_UClass_UShootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShootComponent), 1156291299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ShootComponent_h_4177859649(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ShootComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ShootComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
