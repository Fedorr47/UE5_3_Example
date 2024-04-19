// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/PickupSystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_APickupSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_APickupSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(APickupSystem::execPickup)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APickupSystem::StaticRegisterNativesAPickupSystem()
	{
		UClass* Class = APickupSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pickup", &APickupSystem::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupSystem_Pickup_Statics
	{
		struct PickupSystem_eventPickup_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupSystem_eventPickup_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupSystem_eventPickup_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupSystem_eventPickup_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupSystem_eventPickup_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PickupSystem_eventPickup_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupSystem_eventPickup_Parms), &Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupSystem_eventPickup_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupSystem_Pickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSystem_Pickup_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSystem_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/PickupSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupSystem_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupSystem, nullptr, "Pickup", nullptr, nullptr, Z_Construct_UFunction_APickupSystem_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSystem_Pickup_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupSystem_Pickup_Statics::PickupSystem_eventPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSystem_Pickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupSystem_Pickup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSystem_Pickup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupSystem_Pickup_Statics::PickupSystem_eventPickup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupSystem_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupSystem_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupSystem);
	UClass* Z_Construct_UClass_APickupSystem_NoRegister()
	{
		return APickupSystem::StaticClass();
	}
	struct Z_Construct_UClass_APickupSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupSystem_Pickup, "Pickup" }, // 135150710
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/PickupSystem.h" },
		{ "ModuleRelativePath", "Systems/PickupSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupSystem_Statics::ClassParams = {
		&APickupSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APickupSystem()
	{
		if (!Z_Registration_Info_UClass_APickupSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupSystem.OuterSingleton, Z_Construct_UClass_APickupSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<APickupSystem>()
	{
		return APickupSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupSystem);
	APickupSystem::~APickupSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupSystem, APickupSystem::StaticClass, TEXT("APickupSystem"), &Z_Registration_Info_UClass_APickupSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupSystem), 4112849501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_1791863321(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
