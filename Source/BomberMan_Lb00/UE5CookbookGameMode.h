// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE5CookbookGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LB00_API AUE5CookbookGameMode : public AGameModeBase
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
	
	UPROPERTY()
	AMyFirstActor* SpawnedActor;
	UFUNCTION()
	void DestroyActorFunction();
};