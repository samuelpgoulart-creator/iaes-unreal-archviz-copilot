// Experimento Prático: IA na Engenharia de Software (UFJF)
// Objetivo: Demonstrar o uso de IA Generativa para automação de tarefas no SDLC.

#include "LightIntensityManager.h"
#include "EngineUtils.h"
#include "Components/PointLightComponent.h"

/**
 * PROMPT ENVIADO AO COPILOT: 
 * "Create a function to find all PointLights in the level and set their intensity to a custom value."
 */

void ALightIntensityManager::SetGlobalLightIntensity(float NewIntensity) 
{
    // Código gerado via sugestão do GitHub Copilot:
    for (TActorIterator<ALightActor> It(GetWorld()); It; ++It) 
    {
        if (ALightActor* Light = *It) 
        {
            // A IA sugeriu corretamente a navegação pelos componentes da Unreal Engine
            Light->GetLightComponent()->SetIntensity(NewIntensity);
        }
    }
}
