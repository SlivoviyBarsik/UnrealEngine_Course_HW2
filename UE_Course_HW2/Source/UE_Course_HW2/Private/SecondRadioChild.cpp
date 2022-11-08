// Fill out your copyright notice in the Description page of Project Settings.


#include "SecondRadioChild.h"

ASecondRadioChild::ASecondRadioChild() {
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxCollision->SetupAttachment(Mesh);
}

void ASecondRadioChild::BeginPlay()
{
	Super::BeginPlay();

	Audio->SetPaused(true);

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ASecondRadioChild::OnOverlapBegin);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ASecondRadioChild::OnOverlapEnd);
}

void ASecondRadioChild::OnOverlapBegin(
	UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex, bool fromSweep,
	const FHitResult& sweepResult
) {
	if (otherActor == GetWorld()->GetFirstPlayerController()->GetPawn()) {
		ASecondRadioChild::SetPaused(false);
	}
}

void ASecondRadioChild::OnOverlapEnd(
	UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex
) {
	if (otherActor == GetWorld()->GetFirstPlayerController()->GetPawn()) {
		ASecondRadioChild::SetPaused(true);
	}
}