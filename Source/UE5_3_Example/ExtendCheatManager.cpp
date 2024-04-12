// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtendCheatManager.h"
#include <Kismet/GameplayStatics.h>

void UExtendCheatManager::SetSlowMotion(float InTimeDilation)
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), InTimeDilation);
}
