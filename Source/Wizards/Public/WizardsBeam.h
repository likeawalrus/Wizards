// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "WizardsCharacter.h"
#include "ParticleDefinitions.h"
#include "WizardsBeam.generated.h"

UCLASS(config = Game)
class WIZARDS_API AWizardsBeam : public AActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	class UBoxComponent* CollisionComp;
	class UParticleSystemComponent* MyParticleSystem;
	AWizardsCharacter * owningWizard;


public:	
	// Sets default values for this actor's properties
	AWizardsBeam();
	float MaxBeamLength = 100000.0;
	// Called every frame
	void KeepUpdating();
	bool DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams);
	void SpellCreation(UParticleSystem* theParticle, float beamDamage, AWizardsCharacter* theWiz);
	FORCEINLINE class UBoxComponent* GetCollisionComp() const { return CollisionComp; }
	
	
};
