// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/DamageComponent.h"

UDamageComponent::UDamageComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UDamageComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UDamageComponent>();
}

UEntityComponent* UDamageComponent::RetCopiedComponent(UObject* OwnerObject)
{
	return nullptr;
}

void UDamageComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
