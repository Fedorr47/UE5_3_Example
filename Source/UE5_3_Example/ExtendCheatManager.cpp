// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtendCheatManager.h"
#include <Kismet/GameplayStatics.h>

void UExtendCheatManager::SetSlomo(float InTimeDilation)
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), InTimeDilation);
}
