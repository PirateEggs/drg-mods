#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionStatsCollector.generated.h"

class APlayerCharacter;
class UCappedResource;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMissionStatsCollector : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
public:
    UMissionStatsCollector();
protected:
    UFUNCTION(BlueprintCallable)
    void OnResourceIncremented(UCappedResource* Resource, float Amount);
    
};
