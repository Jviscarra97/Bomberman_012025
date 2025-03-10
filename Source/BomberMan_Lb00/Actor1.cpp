// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor1.h"
#include "BomberMan_Lb00.h"

// Sets default values
AActor1::AActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor1::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(10);
}

// Called every frame
void AActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

