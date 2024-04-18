// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Player/DefaultPlayableCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class USplineComponent;
struct FEntity;
struct FHitResult;
#ifdef UE5_3_EXAMPLE_DefaultPlayableCharacter_generated_h
#error "DefaultPlayableCharacter.generated.h already included, missing '#pragma once' in DefaultPlayableCharacter.h"
#endif
#define UE5_3_EXAMPLE_DefaultPlayableCharacter_generated_h

#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_SPARSE_DATA
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorEntity); \
	DECLARE_FUNCTION(execGetSplinePredict); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeCharacterRadialDamage); \
	DECLARE_FUNCTION(execTakeCharacterDamage); \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultPlayableCharacter(); \
	friend struct Z_Construct_UClass_ADefaultPlayableCharacter_Statics; \
public: \
	DECLARE_CLASS(ADefaultPlayableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(ADefaultPlayableCharacter)


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultPlayableCharacter(ADefaultPlayableCharacter&&); \
	NO_API ADefaultPlayableCharacter(const ADefaultPlayableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultPlayableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPlayableCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultPlayableCharacter) \
	NO_API virtual ~ADefaultPlayableCharacter();


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_26_PROLOG
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_SPARSE_DATA \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_INCLASS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class ADefaultPlayableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Player_DefaultPlayableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
