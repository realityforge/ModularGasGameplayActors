/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "ModularGasGameMode.h"
#include "AbilitySystemComponent.h"
#include "ModularGasGameState.h"
#include "ModularGasPawn.h"
#include "ModularGasPlayerController.h"
#include "ModularGasPlayerState.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularGasGameMode)

AModularGasGameModeBase::AModularGasGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    GameStateClass = AModularGasGameStateBase::StaticClass();
    PlayerControllerClass = AModularGasPlayerController::StaticClass();
    PlayerStateClass = AModularGasPlayerState::StaticClass();
    DefaultPawnClass = AModularGasPawn::StaticClass();

    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
}

UAbilitySystemComponent* AModularGasGameModeBase::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

AModularGasGameMode::AModularGasGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    GameStateClass = AModularGasGameState::StaticClass();
    PlayerControllerClass = AModularGasPlayerController::StaticClass();
    PlayerStateClass = AModularGasPlayerState::StaticClass();
    DefaultPawnClass = AModularGasPawn::StaticClass();
}

UAbilitySystemComponent* AModularGasGameMode::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}