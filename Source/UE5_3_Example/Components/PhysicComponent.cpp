// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/PhysicComponent.h"

UPhysicComponent::UPhysicComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UPhysicComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UPhysicComponent>();
}

void UPhysicComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
