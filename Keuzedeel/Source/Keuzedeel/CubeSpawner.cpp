// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeSpawner.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values
ACubeSpawner::ACubeSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;
	amountToPlace = FVector(0,0,0);

	//SpawnedCubes.SetNumUninitialized(0,true);
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

		FVector spawnLocation = FVector(150 * x, 150 * y, 150 * z);
		UE_LOG(LogTemp, Warning, TEXT("Spawn"));
		SpawnedCubes.Add(world->SpawnActor<AMyCube>(toSpawn, spawnLocation, rotator, spawnParams));
	}
}

void ACubeSpawner::RemoveObjects() 
{
	for (int i = 0; i < 5; i++)
	{
		SpawnedCubes[i] -> Destroy();
		SpawnedCubes.RemoveAt(i);
	}
}

void ACubeSpawner::OnConstruction(const FTransform& Transform)
{
	if (toSpawn) 
	{
		//RemoveObjects();
		for (int x = 0; x < amountToPlace.X; x++) {
			for (int y = 0; y < amountToPlace.Y; y++) {
				for (int z = 0; z < amountToPlace.Z; z++) {
					PlaceObject(x, y, z);
				}
			}
		}
	}
}