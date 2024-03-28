// Fill out your copyright notice in the Description page of Project Settings.


#include "SystemQueue/EntityManager.h"

FEntity UEntityManager::CreateEntity()
{
    FEntity NewEntity;
    Entities.Add(NewEntity);
    return NewEntity; 
}

void UEntityManager::AddEntity(FEntity* InEntity)
{
    Entities.Add(*InEntity);
}

void UEntityManager::DestroyEntity(const FEntity& Entity)
{
    EntityComponents.Remove(Entity.Id);
    Entities.Remove(Entity);
}
