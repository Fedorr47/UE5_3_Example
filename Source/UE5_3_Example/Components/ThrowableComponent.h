// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "ThrowableComponent.generated.h"

class ADefaultProjectile;
class USplineComponent;
class USplineMeshComponent;
class UInputAction;
class UInputMappingContext;
class AActor;

UENUM(BlueprintType)
enum class EThrowableType : uint8
{
	Grenade,
	Other,
	MAX
};

UCLASS()
class UE5_3_EXAMPLE_API UThrowableComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UThrowableComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<ADefaultProjectile> ProjectileClass;

	UPROPERTY()
	bool IsAttachedToCharacter = false;

	UPROPERTY()
	AActor* OwnerCharacter = nullptr;

	UPROPERTY(EditAnywhere, Category = ThrowableType)
	EThrowableType Type = EThrowableType::Other;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* ThrowMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;
};