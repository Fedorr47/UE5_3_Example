// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseInteractableActor.h"
#include "ThrowableActor.generated.h"

class UInputMappingContext;
class UInputAction;
class UThrowableComponent;
class ADefaultPlayableCharacter;
class ADefaultProjectile;

/*
USTRUCT(BlueprintType)
struct UE5_3_EXAMPLE_API FPhysicComponentWrapper
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (ShowOnlyInnerProperties, BlueprintSearchable = "true"))
	UPhysicComponent* Template = nullptr;
};
*/

UCLASS()
class UE5_3_EXAMPLE_API AThrowableActor : public ABaseInteractableActor
{
	GENERATED_BODY()

	UPROPERTY()
	bool bDrawPredictTrace = false;

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	ADefaultPlayableCharacter* OwnerCharacter = nullptr;

	UPROPERTY()
	UThrowableComponent* ThrowableComp;

public:
	AThrowableActor(const FObjectInitializer& ObjectInitializer);

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void AttachToCharacter(ACharacter* TargetCharacter);

	//UPROPERTY(EditAnywhere, Category = "Components")
	//FPhysicComponentWrapper TemplatePhysicComponent;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	TSubclassOf<ADefaultProjectile> ThrowableProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* ThrowMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* StatPredictThrowMeshComp;

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void ActiveThrow();

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void PredictThrow();

	UFUNCTION()
	ADefaultPlayableCharacter* GetThrowableOwnerCharacter() const;
};