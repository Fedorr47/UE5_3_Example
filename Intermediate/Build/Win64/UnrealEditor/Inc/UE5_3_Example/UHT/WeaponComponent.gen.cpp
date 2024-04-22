// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UWeaponComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	UE5_3_EXAMPLE_API UEnum* Z_Construct_UEnum_UE5_3_Example_EWeaponeType();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponeType;
	static UEnum* EWeaponeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_3_Example_EWeaponeType, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("EWeaponeType"));
		}
		return Z_Registration_Info_UEnum_EWeaponeType.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<EWeaponeType>()
	{
		return EWeaponeType_StaticEnum();
	}
	struct Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::Enumerators[] = {
		{ "EWeaponeType::RayCast", (int64)EWeaponeType::RayCast },
		{ "EWeaponeType::Projectile", (int64)EWeaponeType::Projectile },
		{ "EWeaponeType::MAX", (int64)EWeaponeType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAX.Name", "EWeaponeType::MAX" },
		{ "ModuleRelativePath", "Components/WeaponComponent.h" },
		{ "Projectile.Name", "EWeaponeType::Projectile" },
		{ "RayCast.Name", "EWeaponeType::RayCast" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		"EWeaponeType",
		"EWeaponeType",
		Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UE5_3_Example_EWeaponeType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponeType.InnerSingleton, Z_Construct_UEnum_UE5_3_Example_EWeaponeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponeType.InnerSingleton;
	}
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
	UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
	{
		return UWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/WeaponComponent.h" },
		{ "ModuleRelativePath", "Components/WeaponComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
		&UWeaponComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UWeaponComponent>()
	{
		return UWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
	UWeaponComponent::~UWeaponComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics::EnumInfo[] = {
		{ EWeaponeType_StaticEnum, TEXT("EWeaponeType"), &Z_Registration_Info_UEnum_EWeaponeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2531209401U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 470772772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_833324969(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_WeaponComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
