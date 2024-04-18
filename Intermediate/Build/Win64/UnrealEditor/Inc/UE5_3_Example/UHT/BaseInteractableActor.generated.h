// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/BaseInteractableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class UStaticMesh;
#ifdef UE5_3_EXAMPLE_BaseInteractableActor_generated_h
#error "BaseInteractableActor.generated.h already included, missing '#pragma once' in BaseInteractableActor.h"
#endif
#define UE5_3_EXAMPLE_BaseInteractableActor_generated_h

#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_SPARSE_DATA
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractableMesh); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeBaseDamage);


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_ACCESSORS
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseInteractableActor(); \
	friend struct Z_Construct_UClass_ABaseInteractableActor_Statics; \
public: \
	DECLARE_CLASS(ABaseInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(ABaseInteractableActor)


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseInteractableActor(ABaseInteractableActor&&); \
	NO_API ABaseInteractableActor(const ABaseInteractableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseInteractableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseInteractableActor) \
	NO_API virtual ~ABaseInteractableActor();


#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_18_PROLOG
#define FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_SPARSE_DATA \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_ACCESSORS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class ABaseInteractableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
