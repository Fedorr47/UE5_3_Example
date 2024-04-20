// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "DefaultProjectile.h"
#include "ThrowableComponent.generated.h"

class ADefaultProjectile;
class USplineComponent;
class USplineMeshComponent;
class UInputAction;
class UInputMappingContext;
class AActor;
class ABaseInteractableActor;

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
	virtual UEntityComponent* RetCopiedComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, Category = Projectile)
	float ThrowVelocity = 1500.0f;

	UPROPERTY(EditAnywhere, Category = Projectile)
	bool UseBoneLocationFromAnimation = false;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "UseBoneLocationFromAnimation == false"))
	float ForwardScalar = 1.0f;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "UseBoneLocationFromAnimation == false"))
	float OrtogonalScalar = 1.0f;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "UseBoneLocationFromAnimation == true"))
	FName BoneName{};

	UPROPERTY()
	ABaseInteractableActor* OriginalOwnerActor = nullptr;

	UPROPERTY(EditAnywhere, Category = ThrowableType)
	EThrowableType Type = EThrowableType::Other;

	UPROPERTY(EditAnywhere, Category = ThrowPredict)
	bool ShowThrowPredict = false;

	UPROPERTY(EditAnywhere, Category = ThrowPredict, meta = (EditCondition = "ShowThrowPredict == true"))
	UStaticMesh* PredictMesh;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "ShowThrowPredict == true"))
	float AngleMultiplierForPredictLine = 10.0f;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "ShowThrowPredict == true"))
	float SimPredcitTime = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* ThrowMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;
};