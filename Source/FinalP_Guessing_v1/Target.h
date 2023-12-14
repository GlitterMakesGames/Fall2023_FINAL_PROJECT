// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Target.generated.h"

UCLASS()
class FINALP_GUESSING_V1_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

	UPROPERTY(EditAnywhere, Category = Something)
	UStaticMeshComponent* MyMeshComponent;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterial* RedMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterial* YellowMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterial* BlueMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterial* DefaultMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterialInstanceDynamic* DMI_DefaultMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterialInstanceDynamic* DMI_RedMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterialInstanceDynamic* DMI_YellowMaterial;

	UPROPERTY(EditAnywhere, Category = Something)
	UMaterialInstanceDynamic* DMI_BlueMaterial;

	UFUNCTION(BlueprintCallable, Category = MyFunctionCategory)
	void ToggleMaterial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};