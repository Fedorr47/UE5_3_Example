// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_3_Example/UE5_3_ExampleProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_3_ExampleProjectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleProjectile();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(AUE5_3_ExampleProjectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AUE5_3_ExampleProjectile::StaticRegisterNativesAUE5_3_ExampleProjectile()
	{
		UClass* Class = AUE5_3_ExampleProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AUE5_3_ExampleProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics
	{
		struct UE5_3_ExampleProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when projectile hits something */" },
#endif
		{ "ModuleRelativePath", "UE5_3_ExampleProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when projectile hits something" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE5_3_ExampleProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::UE5_3_ExampleProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::UE5_3_ExampleProjectile_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_3_ExampleProjectile);
	UClass* Z_Construct_UClass_AUE5_3_ExampleProjectile_NoRegister()
	{
		return AUE5_3_ExampleProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE5_3_ExampleProjectile_OnHit, "OnHit" }, // 3447005843
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UE5_3_ExampleProjectile.h" },
		{ "ModuleRelativePath", "UE5_3_ExampleProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE5_3_ExampleProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_CollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile movement component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE5_3_ExampleProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::NewProp_ProjectileMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_3_ExampleProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::ClassParams = {
		&AUE5_3_ExampleProjectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUE5_3_ExampleProjectile()
	{
		if (!Z_Registration_Info_UClass_AUE5_3_ExampleProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_3_ExampleProjectile.OuterSingleton, Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_3_ExampleProjectile.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AUE5_3_ExampleProjectile>()
	{
		return AUE5_3_ExampleProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_3_ExampleProjectile);
	AUE5_3_ExampleProjectile::~AUE5_3_ExampleProjectile() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_3_ExampleProjectile, AUE5_3_ExampleProjectile::StaticClass, TEXT("AUE5_3_ExampleProjectile"), &Z_Registration_Info_UClass_AUE5_3_ExampleProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_3_ExampleProjectile), 1479939927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_1454548696(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
