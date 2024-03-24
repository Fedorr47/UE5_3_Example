#include "FloatableHealth.h"
#include "UE5_3_ExampleGameMode.h"
#include <Kismet/GameplayStatics.h>
#include "Components/ProgressBar.h"
#include "HealthComponent.h"

void UFloatableHealth::NativeConstruct()
{
	Super::NativeConstruct();
	if (IsValid(mHelthBar))
	{
		mHelthBar->SetPercent(1.0f);
	}
}

void UFloatableHealth::NativeDestruct()
{
	Super::NativeDestruct();
}

void UFloatableHealth::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (UWorld* world = GetWorld())
	{
		const auto GameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(world));
		GameMode->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UFloatableHealth::HealthWasChanged);
	}
}

void UFloatableHealth::HealthWasChanged(UBaseMessage* InMsg)
{
	if (InMsg->Type == UMessageType::HealthPercent)
	{
		float NewHealthPercent = static_cast<UHealthPercentMessage*>(InMsg)->HealthPercent;
		mHelthBar->SetPercent(NewHealthPercent);
	}
}