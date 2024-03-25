// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseComponent.h"
#include "Kismet/GameplayStatics.h"

void UBaseComponent::InitComponent(UWorld* InWorld, uint32 InOwnerId)
{
    if (IsValid(InWorld))
    {
        mWorld = InWorld;
        mGameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
    }
    mOwnerId = InOwnerId;
}