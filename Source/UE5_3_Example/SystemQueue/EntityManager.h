// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "UObject/NoExportTypes.h"
#include "EntityManager.generated.h"


USTRUCT(BlueprintType)
struct FEntity
{
    GENERATED_BODY()

public:
    UPROPERTY()
    FGuid Id;
    FEntity() : Id(FGuid::NewGuid()) {}

    bool operator==(const FEntity& Other) const
    {
        return Id == Other.Id;
    }
};

FORCEINLINE uint32 GetTypeHash(const FEntity& Entity)
{
    return GetTypeHash(Entity.Id);
}

UCLASS()
class UE5_3_EXAMPLE_API UEntityManager : public UObject
{
    GENERATED_BODY()

private:
    UPROPERTY()
    TArray<FEntity> Entities;
    TMap<FGuid, TArray<UEntityComponent*>> EntityComponents;

    FEntity FindEntityById(const FGuid& Id) const
    {
        for (const auto& Entity : Entities)
        {
            if (Entity.Id == Id)
            {
                return Entity;
            }
        }

        return FEntity(); // Возвращаем пустую сущность, если ничего не найдено
    }

public:
    // Создает новую сущность и возвращает ее
    FEntity CreateEntity();

    void AddEntity(FEntity* InEntity);

    // Удаляет сущность и все ее компоненты
    void DestroyEntity(const FEntity& Entity);

    // Добавляет компонент к сущности
    template<class T>
    T* AddComponent(const FEntity& Entity);

    template<class T>
    void AddCreatedComponent(const FEntity& Entity, T* InComponent);

    // Получает компоненты определенного типа от сущности
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
            for (const auto* Component : Pair.Value)
            {
                if (const T* Casted = Cast<T>(Component))
                {
                    Result.Add(FindEntityById(Pair.Key));
                    break; // Переходим к следующей сущности, если компонент найден
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

    // Вспомогательный метод для проверки наличия компонента определённого типа
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
        const TArray<UEntityComponent*>* Components = EntityComponents.Find(Entity.Id);
        if (Components != nullptr)
        {
            for (UEntityComponent* Component : *Components)
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

    template<typename T>
    void RemoveComponents(const FEntity& Entity)
    {
        TArray<UEntityComponent*>* Components = EntityComponents.Find(Entity.Id);
        if (Components != nullptr)
        {
            // Проходим по массиву с конца, так как мы можем удалять элементы в процессе
            for (int32 i = Components->Num() - 1; i >= 0; --i)
            {
                UEntityComponent* Component = (*Components)[i];
                if (T* TypedComponent = Cast<T>(Component))
                {
                    Components->RemoveAt(i); // Удаляем компонент из массива

                    // Освобождаем ресурсы компонента, если это необходимо
                    TypedComponent->MarkPendingKill(); // Помечаем компонент на удаление
                }
            }

            // Если после удаления массив компонентов становится пустым, можно также удалить запись из карты
            if (Components->IsEmpty())
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
    TArray<UEntityComponent*>& Components = EntityComponents.FindOrAdd(Entity.Id);
    Components.Add(NewComponent);

    return NewComponent;
}

template<class T>
inline void UEntityManager::AddCreatedComponent(const FEntity& Entity, T* InComponent)
{
    static_assert(TIsDerivedFrom<T, UEntityComponent>::IsDerived, "T must inherit from UEntityComponent");

    TArray<UEntityComponent*>& Components = EntityComponents.FindOrAdd(Entity.Id);
    Components.Add(InComponent);
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
