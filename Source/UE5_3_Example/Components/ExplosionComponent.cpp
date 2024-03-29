// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/ExplosionComponent.h"

UExplosionComponent::UExplosionComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UExplosionComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UExplosionComponent>();
}

void UExplosionComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
