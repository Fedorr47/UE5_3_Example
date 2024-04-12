// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ExtendCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class UE5_3_EXAMPLE_API UExtendCheatManager : public UCheatManager
{
	GENERATED_BODY()

	UFUNCTION(Exec)
	void SetSlowMotion(float InTimeDilation);
};
