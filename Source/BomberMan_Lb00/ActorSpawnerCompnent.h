// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ActorSpawnerCompnent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOMBERMAN_LB00_API UActorSpawnerCompnent : public USceneComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this component's properties
	UActorSpawnerCompnent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category=CookBook)
	void Spawn();
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorToSpawn;
		
};
