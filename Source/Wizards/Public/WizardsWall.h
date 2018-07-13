// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "WizardsCharacter.h"
#include "ParticleDefinitions.h"
#include "WizardsWall.generated.h"

UCLASS(config = Game)
class WIZARDS_API AWizardsWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWizardsWall();
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

	void SpellCreation(FtheSpell* theSpell, UParticleSystem* floorPart, UStaticMesh* thisWall, AWizardsCharacter* theWiz);


	FORCEINLINE class UBoxComponent* GetCollisionComp() const { return CollisionComp; }

	
	
};
