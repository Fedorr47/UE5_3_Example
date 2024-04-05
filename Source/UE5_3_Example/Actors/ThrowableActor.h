// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseInteractableActor.h"
#include "Components/PhysicComponent.h"
#include "DefaultProjectile.h"
#include "ThrowableActor.generated.h"

class UPhysicComponent;
class AThrowbalePathVisualizer;
class ACharacter;
class UInputMappingContext;
class UInputAction;
class USplineComponent;

USTRUCT(BlueprintType)
struct UE5_3_EXAMPLE_API FPhysicComponentWrapper
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (ShowOnlyInnerProperties, BlueprintSearchable = "true"))
	UPhysicComponent* Template = nullptr;
};

UCLASS()
class UE5_3_EXAMPLE_API AThrowableActor : public ABaseInteractableActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	ACharacter* OwnerCharacter = nullptr;

	UPROPERTY()
	UPhysicComponent* PhysicComponent;

public:
	AThrowableActor(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void AttachToCharacter(ACharacter* TargetCharacter);

	UPROPERTY(EditAnywhere, Category = "Components")
	FPhysicComponentWrapper TemplatePhysicComponent;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	TSubclassOf<ADefaultProjectile> ThrowableProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* ThrowMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void ActiveThrow();

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void PredictThrow();

	UFUNCTION()
	ACharacter* GetThrowbaleOwnerCharacter() { return OwnerCharacter; }
};