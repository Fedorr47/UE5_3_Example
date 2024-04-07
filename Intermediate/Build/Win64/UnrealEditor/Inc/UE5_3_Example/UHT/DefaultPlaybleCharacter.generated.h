// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/DefaultPlaybleCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef UE5_3_EXAMPLE_DefaultPlaybleCharacter_generated_h
#error "DefaultPlaybleCharacter.generated.h already included, missing '#pragma once' in DefaultPlaybleCharacter.h"
#endif
#define UE5_3_EXAMPLE_DefaultPlaybleCharacter_generated_h

#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSplinePredict); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeCharacterDamage); \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultPlaybleCharacter(); \
	friend struct Z_Construct_UClass_ADefaultPlaybleCharacter_Statics; \
public: \
	DECLARE_CLASS(ADefaultPlaybleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(ADefaultPlaybleCharacter)


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultPlaybleCharacter(ADefaultPlaybleCharacter&&); \
	NO_API ADefaultPlaybleCharacter(const ADefaultPlaybleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultPlaybleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPlaybleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultPlaybleCharacter) \
	NO_API virtual ~ADefaultPlaybleCharacter();


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_24_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class ADefaultPlaybleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_3_Example_Source_UE5_3_Example_Actors_DefaultPlaybleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
