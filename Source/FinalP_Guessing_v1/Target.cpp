// Fill out your copyright notice in the Description page of Project Settings.

#include "Target.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
	MyMeshComponent = FindComponentByClass<UStaticMeshComponent>();
	DMI_DefaultMaterial = UMaterialInstanceDynamic::Create(DefaultMaterial, this);
	DMI_RedMaterial = UMaterialInstanceDynamic::Create(RedMaterial, this);
	DMI_YellowMaterial = UMaterialInstanceDynamic::Create(YellowMaterial, this);
	DMI_BlueMaterial = UMaterialInstanceDynamic::Create(BlueMaterial, this);

	MyMeshComponent->SetMaterial(0, DMI_DefaultMaterial);
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATarget::ToggleMaterial()
{
	//MyMeshComponent->SetMaterial(0, DMI_RedMaterial);

	if (MyMeshComponent->GetMaterial(0) == DMI_DefaultMaterial)
	{
		MyMeshComponent->SetMaterial(0, DMI_RedMaterial);
	}
	else if (MyMeshComponent->GetMaterial(0) == DMI_RedMaterial)
	{
		MyMeshComponent->SetMaterial(0, DMI_YellowMaterial);
	}
	else if (MyMeshComponent->GetMaterial(0) == DMI_YellowMaterial)
	{
		MyMeshComponent->SetMaterial(0, DMI_BlueMaterial);
	}
	else if (MyMeshComponent->GetMaterial(0) == DMI_BlueMaterial)
	{
		MyMeshComponent->SetMaterial(0, DMI_RedMaterial);
	}
}