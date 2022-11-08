// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadioParent.h"
#include "Components/BoxComponent.h"
#include "SecondRadioChild.generated.h"

/**
 * 
 */
UCLASS()
class UE_COURSE_HW2_API ASecondRadioChild : public ARadioParent
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay();

public:
	ASecondRadioChild();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UBoxComponent* BoxCollision;

	UFUNCTION()
		void OnOverlapBegin(
			UPrimitiveComponent* overlappedComponent, AActor* otherActor,
			UPrimitiveComponent* otherComp, int otherBodyIndex, bool fromSweep,
			const FHitResult& sweepResult
		);

	UFUNCTION()
		void OnOverlapEnd(
			UPrimitiveComponent* overlappedComponent, AActor* otherActor,
			UPrimitiveComponent* otherComp, int otherBodyIndex
		);
	
};
