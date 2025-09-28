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
#pragma once

#include "ModularHUD.h"
#include "ModularGasHUD.generated.h"

/**
 * Minimal class that supports extension by game feature plugins and adds all Actors with an AbilitySystemComponent
 * to the DebugActorList.
 */
UCLASS(Abstract, Blueprintable)
class AModularGasHUD : public AModularHUD
{
    GENERATED_BODY()

protected:
    //~AHUD interface

    /**
     * Populates the provided actor list with all actors in the world that have a valid AbilitySystemComponent.
     * This method overrides the base implementation to specifically add actors associated
     * with an AbilitySystemComponent to the debug actor list.
     *
     * @param InOutList A reference to the array that will be populated with actors matching the criteria.
     */
    virtual void GetDebugActorList(TArray<AActor*>& InOutList) override;
    //~End of AHUD interface
};
