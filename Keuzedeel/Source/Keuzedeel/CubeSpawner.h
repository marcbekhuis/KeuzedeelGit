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

	UPROPERTY(EditAnywhere, Category = "Amount")
		FVector amountToPlace;
	UPROPERTY(EditAnywhere, Category = "Object")
		TSubclassOf<class AMyCube> toSpawn;

	TArray<AMyCube*> SpawnedCubes;
};