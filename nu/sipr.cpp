#include "YourAbilityClass.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilityActivationInfo.h"

void UYourAbilityClass::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData)
{
    // Call base implementation if necessary
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
    
    // Check how the ability was activated
    if (ActivationInfo.ActivationMode == EGameplayAbilityActivationMode::Authority)
    {
        // Do something specific for authority activation
    }
    else if (ActivationInfo.ActivationMode == EGameplayAbilityActivationMode::Predicting)
    {
        // Do something specific for predicted activation
    }

    // Example: Log activation info
    UE_LOG(LogTemp, Log, TEXT("Ability activated with mode: %d"), static_cast<int32>(ActivationInfo.ActivationMode));

    // Your ability logic goes here
}

void UYourAbilityClass::EndAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    bool bReplicateEndAbility,
    bool bWasCancelled)
{
    // Call base implementation if necessary
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

    // Your ability cleanup logic goes here
}
