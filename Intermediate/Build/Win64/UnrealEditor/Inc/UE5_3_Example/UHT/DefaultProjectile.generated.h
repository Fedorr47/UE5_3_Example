// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Projectiles/DefaultProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_3_EXAMPLE_DefaultProjectile_generated_h
#error "DefaultProjectile.generated.h already included, missing '#pragma once' in DefaultProjectile.h"
#endif
#define UE5_3_EXAMPLE_DefaultProjectile_generated_h

#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_CALLBACK_WRAPPERS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultProjectile(); \
	friend struct Z_Construct_UClass_ADefaultProjectile_Statics; \
public: \
	DECLARE_CLASS(ADefaultProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(ADefaultProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultProjectile(ADefaultProjectile&&); \
	NO_API ADefaultProjectile(const ADefaultProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultProjectile) \
	NO_API virtual ~ADefaultProjectile();


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_14_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_CALLBACK_WRAPPERS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class ADefaultProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_3_Example_Source_UE5_3_Example_Actors_Projectiles_DefaultProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
