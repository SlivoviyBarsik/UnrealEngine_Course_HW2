// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadioParent.h"
#include "FirstRadioChild.generated.h"

/**
 * 
 */
UCLASS()
class UE_COURSE_HW2_API AFirstRadioChild : public ARadioParent
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
