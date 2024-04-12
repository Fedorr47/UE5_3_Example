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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ADefaultProjectile_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinePredict_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplinePredict;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveThrowable_MetaData[];
#endif
		static void NewProp_IsActiveThrowable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActiveThrowable;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PathMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PathMesh = { "PathMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, PathMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PathMesh_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PathMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADefaultProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SplinePredict_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SplinePredict = { "SplinePredict", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, SplinePredict), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SplinePredict_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SplinePredict_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable_MetaData[] = {
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable_SetBit(void* Obj)
	{
		((UThrowableComponent*)Obj)->IsActiveThrowable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable = { "IsActiveThrowable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UThrowableComponent), &Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PathMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SplinePredict,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_IsActiveThrowable,
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
		0x009010A0u,
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
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrowableComponent, UThrowableComponent::StaticClass, TEXT("UThrowableComponent"), &Z_Registration_Info_UClass_UThrowableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowableComponent), 3104759255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_1938130045(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
