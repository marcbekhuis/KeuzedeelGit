// Fill out your copyright notice in the Description page of Project Settings.


#include "Calculator.h"

// Sets default values
ACalculator::ACalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACalculator::OnConstruction(const FTransform& Transform)
{
	switch (method)
	{
	case Add:
		Answer = number1 + number2;
		break;
	case Minus:
		Answer = number1 - number2;
		break;
	case Multiply:
		Answer = number1 * number2;
		break;
	case Divide:
		Answer = number1 / number2;
		break;
	default:
		break;
	}
}

