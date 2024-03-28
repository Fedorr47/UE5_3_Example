// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UE5_3_ExampleProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_3_EXAMPLE_UE5_3_ExampleProjectile_generated_h
#error "UE5_3_ExampleProjectile.generated.h already included, missing '#pragma once' in UE5_3_ExampleProjectile.h"
#endif
#define UE5_3_EXAMPLE_UE5_3_ExampleProjectile_generated_h

#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_SPARSE_DATA
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE5_3_ExampleProjectile(); \
	friend struct Z_Construct_UClass_AUE5_3_ExampleProjectile_Statics; \
public: \
	DECLARE_CLASS(AUE5_3_ExampleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(AUE5_3_ExampleProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE5_3_ExampleProjectile(AUE5_3_ExampleProjectile&&); \
	NO_API AUE5_3_ExampleProjectile(const AUE5_3_ExampleProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE5_3_ExampleProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE5_3_ExampleProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE5_3_ExampleProjectile) \
	NO_API virtual ~AUE5_3_ExampleProjectile();


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_12_PROLOG
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_SPARSE_DATA \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class AUE5_3_ExampleProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
