// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeSpawner.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values
ACubeSpawner::ACubeSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;
	amountToPlace = FVector(0, 0, 0);
	SpawnedCubes.SetNum(0, true);
}

// Called when the game starts or when spawned
void ACubeSpawner::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACubeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACubeSpawner::PlaceObject(int x, int y, int z)
{
	UWorld* world = GetWorld();
	if (world)
	{
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;

		FRotator rotator = FRotator(0,0,0);

		FVector spawnLocation = FVector((100 + spacing.X) * x, (100 + spacing.Y) * y, (100 + spacing.Z) * z);
		UE_LOG(LogTemp, Warning, TEXT("Spawn"));

		AMyCube* spawnedCube = world->SpawnActor<AMyCube>(toSpawn, spawnLocation, rotator, spawnParams);

		FString cubeName = "Cube_" + FString::FromInt(x) + "_" + FString::FromInt(y) + "_" + FString::FromInt(z);
		spawnedCube->SetActorLabel(cubeName);

		SpawnedCubes.Add(spawnedCube);
	}
}

void ACubeSpawner::RemoveObjects() 
{ 
	while(SpawnedCubes.Num() > 0)
	{
		SpawnedCubes[0] -> Destroy();
		SpawnedCubes.RemoveAt(0);
	}
}

void ACubeSpawner::OnConstruction(const FTransform& Transform)
{
	if (toSpawn) 
	{
		if (SpawnedCubes.Num() > 0)
		{
			RemoveObjects();
		}

		int arraySize = amountToPlace.X * amountToPlace.Y * amountToPlace.Z;

		for (int x = 0; x < (int)amountToPlace.X; x++) {
			for (int y = 0; y < (int)amountToPlace.Y; y++) {
				for (int z = 0; z < (int)amountToPlace.Z; z++) {
					PlaceObject(x, y, z);
				}
			}
		}
	}
}