// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/TimerComponent.h"

UTimerComponent::UTimerComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UTimerComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UTimerComponent>();
}

void UTimerComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
