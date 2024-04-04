// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemQueue/EntityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityManager();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityManager_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntity();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityInternal();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Entity;
class UScriptStruct* FEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Entity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Entity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntity, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("Entity"));
	}
	return Z_Registration_Info_UScriptStruct_Entity.OuterSingleton;
}
template<> UE5_3_EXAMPLE_API UScriptStruct* StaticStruct<FEntity>()
{
	return FEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SystemQueue/EntityManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntity_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/EntityManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEntity_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEntity, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntity_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FEntity_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntity_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		&NewStructOps,
		"Entity",
		Z_Construct_UScriptStruct_FEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntity_Statics::PropPointers),
		sizeof(FEntity),
		alignof(FEntity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_Entity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Entity.InnerSingleton, Z_Construct_UScriptStruct_FEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Entity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntityInternal;
class UScriptStruct* FEntityInternal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntityInternal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntityInternal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityInternal, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("EntityInternal"));
	}
	return Z_Registration_Info_UScriptStruct_EntityInternal.OuterSingleton;
}
template<> UE5_3_EXAMPLE_API UScriptStruct* StaticStruct<FEntityInternal>()
{
	return FEntityInternal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEntityInternal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityInternal_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "SystemQueue/EntityManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEntityInternal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityInternal>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityInternal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		&NewStructOps,
		"EntityInternal",
		nullptr,
		0,
		sizeof(FEntityInternal),
		alignof(FEntityInternal),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityInternal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityInternal_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEntityInternal()
	{
		if (!Z_Registration_Info_UScriptStruct_EntityInternal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntityInternal.InnerSingleton, Z_Construct_UScriptStruct_FEntityInternal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EntityInternal.InnerSingleton;
	}
	void UEntityManager::StaticRegisterNativesUEntityManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityManager);
	UClass* Z_Construct_UClass_UEntityManager_NoRegister()
	{
		return UEntityManager::StaticClass();
	}
	struct Z_Construct_UClass_UEntityManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityComponents_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntityComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntityManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SystemQueue/EntityManager.h" },
		{ "ModuleRelativePath", "SystemQueue/EntityManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEntity, METADATA_PARAMS(0, nullptr) }; // 904214179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/EntityManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityManager, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities_MetaData), Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities_MetaData) }; // 904214179
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_ValueProp = { "EntityComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEntityInternal, METADATA_PARAMS(0, nullptr) }; // 1211764720
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_Key_KeyProp = { "EntityComponents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/EntityManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents = { "EntityComponents", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityManager, EntityComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_MetaData), Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_MetaData) }; // 1211764720
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_Entities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_EntityComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityManager_Statics::ClassParams = {
		&UEntityManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEntityManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEntityManager()
	{
		if (!Z_Registration_Info_UClass_UEntityManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityManager.OuterSingleton, Z_Construct_UClass_UEntityManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntityManager.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UEntityManager>()
	{
		return UEntityManager::StaticClass();
	}
	UEntityManager::UEntityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityManager);
	UEntityManager::~UEntityManager() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics::ScriptStructInfo[] = {
		{ FEntity::StaticStruct, Z_Construct_UScriptStruct_FEntity_Statics::NewStructOps, TEXT("Entity"), &Z_Registration_Info_UScriptStruct_Entity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntity), 904214179U) },
		{ FEntityInternal::StaticStruct, Z_Construct_UScriptStruct_FEntityInternal_Statics::NewStructOps, TEXT("EntityInternal"), &Z_Registration_Info_UScriptStruct_EntityInternal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityInternal), 1211764720U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityManager, UEntityManager::StaticClass, TEXT("UEntityManager"), &Z_Registration_Info_UClass_UEntityManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityManager), 3468286534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_65113172(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_SystemQueue_EntityManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
