// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "GameFramework/Actor.h"
#include "EntityManager.generated.h"

USTRUCT(BlueprintType)
struct FEntity
{
    GENERATED_BODY()

public:
    UPROPERTY()
    FGuid Id;
    FEntity() : Id(FGuid::NewGuid()) {}
    FEntity(AActor* InPtrToObject) : Id(FGuid::NewGuid()) , mPtrToObject(InPtrToObject) {}

    AActor* mPtrToObject;

    bool operator==(const FEntity& Other) const
    {
        return (Id == Other.Id) && (mPtrToObject == Other.mPtrToObject);
    }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddedComponent, const struct FEntity&, Entity, UEntityComponent*, EntityComponent);

FORCEINLINE uint32 GetTypeHash(const FEntity& Entity)
{
    return GetTypeHash(Entity.Id);
}

USTRUCT()
struct FEntityInternal
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<UEntityComponent*> Components;
};

UCLASS()
class UE5_3_EXAMPLE_API UEntityManager : public UObject
{
    GENERATED_BODY()

private:
    UPROPERTY(Transient)
    TArray<FEntity> Entities;
    UPROPERTY(Transient)
    TMap<FGuid, FEntityInternal> EntityComponents;

    FEntity FindEntityById(const FGuid& Id) const
    {
        for (const auto& Entity : Entities)
        {
            if (Entity.Id == Id)
            {
                return Entity;
            }
        }

        return FEntity(nullptr); 
    }

public:
    UPROPERTY(BlueprintAssignable)
    FOnAddedComponent OnAddedComponent;

    FEntity CreateEntity(AActor* InPtrToObject = nullptr);

    void AddEntity(FEntity* InEntity);

    void DestroyEntity(const FEntity& Entity);

    template<class T>
    T* AddComponent(const FEntity& Entity);

    template<class T>
    void AddCreatedComponent(const FEntity& Entity, T* InComponent);

    template<class T>
    TArray<T*> GetComponents(const FEntity& Entity);

    TArray<FEntity> GetAllEntities() const
    {
        return Entities;
    }

    template<typename T>
    TArray<FEntity> GetEntitiesWithComponent() const
    {
        TArray<FEntity> Result;
        for (const auto& Pair : EntityComponents)
        {
            for (const UEntityComponent* Component : Pair.Value.Components)
            {
                if (const T* Casted = Cast<T>(Component))
                {
                    Result.Add(FindEntityById(Pair.Key));
                    break; 
                }
            }
        }
        return Result;
    }

    template<typename... ComponentTypes>
    bool HasComponents(const FEntity& Entity) const
    {
        return (HasComponent<ComponentTypes>(Entity) && ...);
    }

    template<typename T>
    bool HasComponent(const FEntity& Entity) const
    {
        const TArray<UEntityComponent*>* Components = EntityComponents.Find(Entity.Id);
        if (Components != nullptr)
        {
            for (UEntityComponent* Component : *Components)
            {
                if (Cast<T>(Component))
                {
                    return true;
                }
            }
        }
        return false;
    }

    template<typename T>
    T* GetComponent(const FEntity& Entity) const
    {
        const FEntityInternal* EntityInternal = EntityComponents.Find(Entity.Id);
        if (EntityInternal != nullptr)
        {
            for (UEntityComponent* Component : EntityInternal->Components)
            {
                T* TypedComponent = Cast<T>(Component);
                if (TypedComponent)
                {
                    return TypedComponent;
                }
            }
        }
        return nullptr;
    }

    const TArray<UEntityComponent*>& GetComponents(const FEntity& Entity) const
    {
        const FEntityInternal* EntityInternal = EntityComponents.Find(Entity.Id);
        return EntityInternal->Components;
    }

    template<typename T>
    void RemoveComponents(const FEntity& Entity)
    {

        FEntityInternal* EntityInternal = EntityComponents.Find(Entity.Id);
        if (EntityInternal != nullptr)
        {
            TArray<UEntityComponent*>& Components = EntityInternal->Components;
            for (int32 i = Components.Num() - 1; i >= 0; --i)
            {
                UEntityComponent* Component = Components[i];
                if (T* TypedComponent = Cast<T>(Component))
                {
                    Components.RemoveAt(i); 

                    TypedComponent->MarkPendingKill(); 
                }
            }

            if (Components.IsEmpty())
            {
                EntityComponents.Remove(Entity.Id);
            }
        }
    }

    void RemoveComponent(const FEntity& Entity, UEntityComponent* EntityComp)
    {

        FEntityInternal* EntityInternal = EntityComponents.Find(Entity.Id);
        if (EntityInternal != nullptr)
        {
            TArray<UEntityComponent*>& Components = EntityInternal->Components;
            auto CompIndex = Components.Find(EntityComp);
            if (CompIndex != INDEX_NONE)
            {
                Components.RemoveAt(CompIndex);
            }

            if (Components.IsEmpty())
            {
                EntityComponents.Remove(Entity.Id);
            }
        }
    }
};

template<class T>
inline T* UEntityManager::AddComponent(const FEntity& Entity)
{
    static_assert(TIsDerivedFrom<T, UEntityComponent>::IsDerived, "T must inherit from UEntityComponent");

    T* NewComponent = NewObject<T>(this);
    FEntityInternal& EntityInternal = EntityComponents.FindOrAdd(Entity.Id);
    EntityInternal.Components.Add(NewComponent);
    OnAddedComponent.Broadcast(Entity, NewComponent);

    return NewComponent;
}

template<class T>
inline void UEntityManager::AddCreatedComponent(const FEntity& Entity, T* InComponent)
{
    static_assert(TIsDerivedFrom<T, UEntityComponent>::IsDerived, "T must inherit from UEntityComponent");

    FEntityInternal& EntityInternal = EntityComponents.FindOrAdd(Entity.Id);
    EntityInternal.Components.Add(InComponent);
    OnAddedComponent.Broadcast(Entity, InComponent);
}


template<class T>
inline TArray<T*> UEntityManager::GetComponents(const FEntity& Entity)
{
    static_assert(TIsDerivedFrom<T, UEntityComponent>::IsDerived, "T must inherit from UEntityComponent");

    TArray<T*> TypedComponents;
    const TArray<UEntityComponent*>* Components = EntityComponents.Find(Entity.Id);
    if (Components != nullptr)
    {
        for (UEntityComponent* Component : *Components)
        {
            T* TypedComponent = Cast<T>(Component);
            if (TypedComponent != nullptr)
            {
                TypedComponents.Add(TypedComponent);
            }
        }
    }

    return TypedComponents;
}
