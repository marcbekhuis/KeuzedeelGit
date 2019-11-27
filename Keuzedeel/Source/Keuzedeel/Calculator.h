// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Calculator.generated.h"

UENUM()
enum Methods
{
	Add,
	Minus,
	Multiply,
	Divide
};

UCLASS()
class KEUZEDEEL_API ACalculator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACalculator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "CalculatorInput")
		float number1;

	UPROPERTY(EditAnywhere, Category = "CalculatorInput")
		float number2;

	UPROPERTY(EditAnywhere, Category = "CalculatorInput")
		TEnumAsByte<Methods> method;

	UPROPERTY(VisibleAnywhere, Category = "CalculatorOutput")
		float Answer;
};
