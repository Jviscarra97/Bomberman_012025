// Fill out your copyright notice in the Description page of Project Settings.


#include "BomberMan_Lb00.h"
#include "MyFirstActor.h"
#include "ARegla.h"

void UE5CookbookGameMode::BeginPlay()
 {
  Super::BeginPlay();
  GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red,  
  TEXT("Actor Spawning"));
  FTransform SpawnLocation;
  GetWorld()->SpawnActor<AMyFirstActor>(  
  AMyFirstActor::StaticClass(), &SpawnLocation);

 }
SpawnedActor = GetWorld()->SpawnActor<AMyFirstActor>
(AMyFirstActor::StaticClass(), SpawnLocation);

FTimerHandle Timer;
GetWorldTimerManager().SetTimer(Timer, this,
	&AUE4CookbookGameMode::DestroyActorFunction, 10)

void AUE4CookbookGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}