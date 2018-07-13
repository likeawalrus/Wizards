// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "WizardsCharacter.h"
#include "ParticleDefinitions.h"
#include "WizardsCage.generated.h"

UCLASS()
class WIZARDS_API AWizardsCage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWizardsCage();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* theWall;
	AWizardsCharacter* owningWizard;
	class UParticleSystemComponent* MyParticleSystem;
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		class UBoxComponent* CollisionComp;
	float MaxDistance = 10000.0;
protected:

public:

	bool DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams);

	void SpellCreation(FtheSpell* theSpell, UParticleSystem* floorPart, UStaticMesh* thisCage, AWizardsCharacter* theWiz);


	FORCEINLINE class UBoxComponent* GetCollisionComp() const { return CollisionComp; }

};
