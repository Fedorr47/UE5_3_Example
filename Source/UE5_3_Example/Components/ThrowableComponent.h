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

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, Category = Projectile)
	bool ThrowOwnerItself = false;

	UPROPERTY()
	TSubclassOf<ABaseInteractableActor> OriginalOwnerClass;

	UPROPERTY(EditDefaultsOnly, Category = Projectile, meta = (EditCondition = "ThrowOwnerItself == false"))
	TSubclassOf<ADefaultProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, Category = ThrowableType)
	EThrowableType Type = EThrowableType::Other;

	UPROPERTY(EditAnywhere, Category = ThrowPredict)
	bool ShowThrowPredict = false;

	UPROPERTY(EditAnywhere, Category = ThrowPredict, meta = (EditCondition = "ShowThrowPredict == true"))
	UStaticMesh* PredictMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* ThrowMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;
};