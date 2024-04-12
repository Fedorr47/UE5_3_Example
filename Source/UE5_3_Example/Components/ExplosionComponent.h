// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "ExplosionComponent.generated.h"

UCLASS()
class UE5_3_EXAMPLE_API UExplosionComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UExplosionComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Explosion)
	float Radius; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Explosion)
	float Damage; 
};
