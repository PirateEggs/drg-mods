#pragma once
#include "CoreMinimal.h"
#include "ExplosionBaseComponent.h"
#include "ExplosionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UExplosionComponent : public UExplosionBaseComponent {
    GENERATED_BODY()
public:
    UExplosionComponent();
};
