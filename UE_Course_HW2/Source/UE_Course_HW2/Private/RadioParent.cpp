// Fill out your copyright notice in the Description page of Project Settings.


#include "RadioParent.h"

// Sets default values
ARadioParent::ARadioParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	SceneComp->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(SceneComp);

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void ARadioParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARadioParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARadioParent::SetPaused_Implementation(bool paused) {
	Audio->SetPaused(paused);
}