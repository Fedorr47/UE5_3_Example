// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/BaseExtSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEntityComponent;
struct FEntity;
#ifdef UE5_3_EXAMPLE_BaseExtSystem_generated_h
#error "BaseExtSystem.generated.h already included, missing '#pragma once' in BaseExtSystem.h"
#endif
#define UE5_3_EXAMPLE_BaseExtSystem_generated_h

#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_SPARSE_DATA
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveComponent); \
	DECLARE_FUNCTION(execComponentWasAdded);


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseExtSystem(); \
	friend struct Z_Construct_UClass_ABaseExtSystem_Statics; \
public: \
	DECLARE_CLASS(ABaseExtSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(ABaseExtSystem)


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseExtSystem(ABaseExtSystem&&); \
	NO_API ABaseExtSystem(const ABaseExtSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseExtSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseExtSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseExtSystem) \
	NO_API virtual ~ABaseExtSystem();


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_12_PROLOG
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_SPARSE_DATA \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class ABaseExtSystem>();

#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_SPARSE_DATA
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionsHolder(); \
	friend struct Z_Construct_UClass_UActionsHolder_Statics; \
public: \
	DECLARE_CLASS(UActionsHolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(UActionsHolder)


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionsHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionsHolder(UActionsHolder&&); \
	NO_API UActionsHolder(const UActionsHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionsHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionsHolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionsHolder) \
	NO_API virtual ~UActionsHolder();


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_40_PROLOG
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_SPARSE_DATA \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_INCLASS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class UActionsHolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
