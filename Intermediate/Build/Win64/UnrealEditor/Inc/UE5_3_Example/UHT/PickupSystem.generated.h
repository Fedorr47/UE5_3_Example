// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/PickupSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_3_EXAMPLE_PickupSystem_generated_h
#error "PickupSystem.generated.h already included, missing '#pragma once' in PickupSystem.h"
#endif
#define UE5_3_EXAMPLE_PickupSystem_generated_h

#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_SPARSE_DATA
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickup);


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupSystem(); \
	friend struct Z_Construct_UClass_APickupSystem_Statics; \
public: \
	DECLARE_CLASS(APickupSystem, ABaseExtSystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(APickupSystem)


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSystem(APickupSystem&&); \
	NO_API APickupSystem(const APickupSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupSystem) \
	NO_API virtual ~APickupSystem();


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_13_PROLOG
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_SPARSE_DATA \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class APickupSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
