// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WizardsCharacter.h"
#include "ParticleDefinitions.h"
#include "GameFramework/Actor.h"
#include "WizardsGroundAOEInstant.generated.h"

UCLASS()
class WIZARDS_API AWizardsGroundAOEInstant : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWizardsGroundAOEInstant();
	float spellDamage;
	int spellEffect;
	AWizardsCharacter* owningWizard;
	class UParticleSystemComponent* MyParticleSystem;
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		class USphereComponent* CollisionComp;
	float MaxDistance = 10000.0;
	bool DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams);
	void SpellCreation(FtheSpell* theSpell, UParticleSystem* floorPart, AWizardsCharacter* theWiz);
	FTimerHandle ExplosionHandler;
	void activateExplosion();

	FORCEINLINE class USphereComponent* GetCollisionComp() const { return CollisionComp; }
	UFUNCTION()
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};