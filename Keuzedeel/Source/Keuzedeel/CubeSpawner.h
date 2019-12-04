// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCube.h"
#include "CubeSpawner.generated.h"

UCLASS()
class KEUZEDEEL_API ACubeSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACubeSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform);

	virtual void PlaceObject(int x, int y, int z);

	virtual void RemoveObjects();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Settings")
		FVector amountToPlace;

	UPROPERTY(EditAnywhere, Category = "Settings")
		FVector voidSize;

	UPROPERTY(EditAnywhere, Category = "Settings")
		FVector voidOffset;

	UPROPERTY(EditAnywhere, Category = "Settings")
		FVector spacing = FVector(50, 50, 50);

	UPROPERTY(EditAnywhere, Category = "Object")
		TSubclassOf<class AMyCube> toSpawn;

	TArray<AMyCube*> SpawnedCubes;
};