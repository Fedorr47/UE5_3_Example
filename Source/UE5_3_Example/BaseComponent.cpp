// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseComponent.h"
#include "Kismet/GameplayStatics.h"

void UBaseComponent::SetWorld(UWorld* InWorld)
{
    if (IsValid(InWorld))
    {
        mWorld = InWorld;
        mGameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
    }
}