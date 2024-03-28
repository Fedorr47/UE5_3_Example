// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealComponent.h"

UHealComponent::UHealComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UHealComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UHealComponent>();
}

void UHealComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}