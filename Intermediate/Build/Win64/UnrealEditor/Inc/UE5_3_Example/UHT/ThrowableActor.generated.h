// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ThrowableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef UE5_3_EXAMPLE_ThrowableActor_generated_h
#error "ThrowableActor.generated.h already included, missing '#pragma once' in ThrowableActor.h"
#endif
#define UE5_3_EXAMPLE_ThrowableActor_generated_h

#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetThrowbaleOwnerCharacter); \
	DECLARE_FUNCTION(execPredictThrow); \
	DECLARE_FUNCTION(execActiveThrow); \
	DECLARE_FUNCTION(execAttachToCharacter);


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowableActor(); \
	friend struct Z_Construct_UClass_AThrowableActor_Statics; \
public: \
	DECLARE_CLASS(AThrowableActor, ABaseInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(AThrowableActor)


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableActor(AThrowableActor&&); \
	NO_API AThrowableActor(const AThrowableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowableActor) \
	NO_API virtual ~AThrowableActor();


#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_29_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class AThrowableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
