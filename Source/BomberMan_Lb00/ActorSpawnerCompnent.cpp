// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorSpawnerCompnent.h"
#include "BomberMan_Lb00.h"

// Sets default values for this component's properties
UActorSpawnerCompnent::UActorSpawnerCompnent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActorSpawnerCompnent::Spawn()
{
	Super::BeginPlay();
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		FTransform ComponentTransform(this->GetComponentTransform());
		TheWorld->SpawnActor<AActor>(ActorToSpawn, ComponentTransform);
	}
	// ...
	
}


// Called every frame
void UActorSpawnerCompnent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

