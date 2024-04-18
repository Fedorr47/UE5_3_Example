// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/BaseExtSystem.h"
#include "SystemQueue/EntityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseExtSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UActionsHolder();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UActionsHolder_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityManager_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntity();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(ABaseExtSystem::execComponentWasAdded)
	{
		P_GET_STRUCT_REF(FEntity,Z_Param_Out_Entity);
		P_GET_OBJECT(UEntityComponent,Z_Param_EntityComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentWasAdded(Z_Param_Out_Entity,Z_Param_EntityComponent);
		P_NATIVE_END;
	}
	void ABaseExtSystem::StaticRegisterNativesABaseExtSystem()
	{
		UClass* Class = ABaseExtSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComponentWasAdded", &ABaseExtSystem::execComponentWasAdded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics
	{
		struct BaseExtSystem_eventComponentWasAdded_Parms
		{
			FEntity Entity;
			UEntityComponent* EntityComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_Entity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseExtSystem_eventComponentWasAdded_Parms, Entity), Z_Construct_UScriptStruct_FEntity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_Entity_MetaData), Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_Entity_MetaData) }; // 904214179
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseExtSystem_eventComponentWasAdded_Parms, EntityComponent), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::NewProp_EntityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseExtSystem, nullptr, "ComponentWasAdded", nullptr, nullptr, Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::BaseExtSystem_eventComponentWasAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::BaseExtSystem_eventComponentWasAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseExtSystem);
	UClass* Z_Construct_UClass_ABaseExtSystem_NoRegister()
	{
		return ABaseExtSystem::StaticClass();
	}
	struct Z_Construct_UClass_ABaseExtSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mEntityManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mEntityManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseExtSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseExtSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseExtSystem_ComponentWasAdded, "ComponentWasAdded" }, // 2812100958
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseExtSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/BaseExtSystem.h" },
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager_MetaData[] = {
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager = { "mEntityManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseExtSystem, mEntityManager), Z_Construct_UClass_UEntityManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager_MetaData), Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseExtSystem, mGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseExtSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseExtSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseExtSystem_Statics::ClassParams = {
		&ABaseExtSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseExtSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseExtSystem()
	{
		if (!Z_Registration_Info_UClass_ABaseExtSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseExtSystem.OuterSingleton, Z_Construct_UClass_ABaseExtSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseExtSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<ABaseExtSystem>()
	{
		return ABaseExtSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseExtSystem);
	ABaseExtSystem::~ABaseExtSystem() {}
	void UActionsHolder::StaticRegisterNativesUActionsHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionsHolder);
	UClass* Z_Construct_UClass_UActionsHolder_NoRegister()
	{
		return UActionsHolder::StaticClass();
	}
	struct Z_Construct_UClass_UActionsHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionsHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsHolder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionsHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/BaseExtSystem.h" },
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionsHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionsHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionsHolder_Statics::ClassParams = {
		&UActionsHolder::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsHolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionsHolder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UActionsHolder()
	{
		if (!Z_Registration_Info_UClass_UActionsHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionsHolder.OuterSingleton, Z_Construct_UClass_UActionsHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionsHolder.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UActionsHolder>()
	{
		return UActionsHolder::StaticClass();
	}
	UActionsHolder::UActionsHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionsHolder);
	UActionsHolder::~UActionsHolder() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseExtSystem, ABaseExtSystem::StaticClass, TEXT("ABaseExtSystem"), &Z_Registration_Info_UClass_ABaseExtSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseExtSystem), 1571603319U) },
		{ Z_Construct_UClass_UActionsHolder, UActionsHolder::StaticClass, TEXT("UActionsHolder"), &Z_Registration_Info_UClass_UActionsHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionsHolder), 2838237972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_884699963(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
