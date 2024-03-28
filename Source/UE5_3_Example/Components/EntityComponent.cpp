// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityComponent.h"
#include "Kismet/GameplayStatics.h"

void UEntityComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
    if (IsValid(InWorld))
    {
        mWorld = InWorld;
        mGameMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
    }
}