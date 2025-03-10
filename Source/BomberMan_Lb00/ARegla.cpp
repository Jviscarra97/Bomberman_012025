// Fill out your copyright notice in the Description page of Project Settings.


#include "ARegla.h"
#include "BomberMan_Lb00.h"

// Sets default values
AARegla::AARegla()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AARegla::BeginPlay()
{
	Super::BeginPlay();
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
}

// Called every frame
void AARegla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

