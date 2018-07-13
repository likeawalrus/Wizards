// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "WizardsCharacter.h"
#include "WizardsSaveGame.h"
#include "ParticleDefinitions.h"
#include "WizardMenuWidget.generated.h"
/**
*
*/
UCLASS()
class WIZARDS_API UWizardMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	void UWizardsMenuWidget();

	//Initialize with previous values or defaults if nothing present
	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void spellsInitialize();

	//Saves the spells
	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void spellsSave();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setEffect(int32 effectChange);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setType(int32 effectChange);

	//Called when spell is changed in spell bar
	//Changes all values to this spells values
	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void spellChange(int32 spellSlot);

	//List of all setters
	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setGravity(bool hasGravity);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setBounce(bool hasBounce);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setHoming(bool isHoming);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setExplodeHit(bool explodeHit);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setExplodeDeath(bool explodeDeath);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setDamage(float damage);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setSpeed(float speed);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setRange(float life);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setSize(float size);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setCost(float cost);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setExplHitDamage(float damage);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setExplHitSize(float size);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setExplDeathDamage(float damage);

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		void setExplDeathSize(float size);



	//List of all getters

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		FName getEffect();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		FName getType();


	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		bool getGravity();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		bool getBounce();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		bool getHoming();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		bool getExplodeHit();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		bool getExplodeDeath();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getDamage();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getSpeed();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getRange();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getSize();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getCost();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getExplHitDamage();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getExplHitSize();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getExplDeathDamage();

	UFUNCTION(BlueprintCallable, Category = "CustomSpells")
		float getExplDeathSize();

	//The Spell Array that gets Loaded/Saved and is called by character
	int32 currSpell = 0;
	UPROPERTY()
	TArray<UspellBook*> spellList;
	UParticleSystem* theParticle;
	TArray<float> morphList;
	TArray<int> colorList;
	TArray<int> clothesList;

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_height(float morph); 

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_llip_fullness(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_llip_size(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_overbite(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_ulip_fullness(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_ulip_size(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_underbite(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		void setmouth_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsJaw")
		void setjaw_definition(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsJaw")
		void setjaw_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsJaw")
		void setjaw_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		void setcheek_crease(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		void setcheek_depth(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		void setcheek_gauntness(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		void setcheek_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		void setcheek_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_bridge_depth(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_bridge_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_crook(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_length(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_mid_depth(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_mid_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_mid_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_nostril_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_nostril_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_tip_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_tip_point(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		void setnose_tip_size(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEyes")
		void seteye_depth(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEyes")
		void seteye_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEyes")
		void seteye_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		void setbrow_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		void setbrow_position(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		void setbrow_slant(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		void setbrow_thickness(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		void setbrow_width(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		void setear_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		void setear_lobesize(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		void setear_outwardness(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		void setear_size(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		void setear_slant(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		void setchin_cleft(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		void setchin_depth(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		void setchin_height(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		void setchin_size(float morph);

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		void setchin_width(float morph);



	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_llip_fullness();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_llip_size();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_overbite();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_ulip_fullness();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_ulip_size();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_underbite();

	UFUNCTION(BlueprintCallable, Category = "MorphsMouth")
		float getmouth_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsJaw")
		float getjaw_definition();

	UFUNCTION(BlueprintCallable, Category = "MorphsJaw")
		float getjaw_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsJaw")
		float getjaw_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		float getcheek_crease();

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		float getcheek_depth();

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		float getcheek_gauntness();

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		float getcheek_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsCheeks")
		float getcheek_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_bridge_depth();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_bridge_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_crook();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_length();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_mid_depth();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_mid_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_mid_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_nostril_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_nostril_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_tip_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_tip_point();

	UFUNCTION(BlueprintCallable, Category = "MorphsNose")
		float getnose_tip_size();

	UFUNCTION(BlueprintCallable, Category = "MorphsEyes")
		float geteye_depth();

	UFUNCTION(BlueprintCallable, Category = "MorphsEyes")
		float geteye_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsEyes")
		float geteye_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		float getbrow_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		float getbrow_position();

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		float getbrow_slant();

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		float getbrow_thickness();

	UFUNCTION(BlueprintCallable, Category = "MorphsBrows")
		float getbrow_width();

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		float getear_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		float getear_lobesize();

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		float getear_outwardness();

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		float getear_size();

	UFUNCTION(BlueprintCallable, Category = "MorphsEars")
		float getear_slant();

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		float getchin_cleft();

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		float getchin_depth();

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		float getchin_height();

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		float getchin_size();

	UFUNCTION(BlueprintCallable, Category = "MorphsChin")
		float getchin_width();


	UFUNCTION(BlueprintCallable, Category = "ClothesOptions")
		void setClothingItem(int clothesslot, int item);

	UFUNCTION(BlueprintCallable, Category = "ClothesOptions")
		int getClothingItem(int clothesslot);

	UFUNCTION(BlueprintCallable, Category = "ClothesOptions")
		void setClothingColor(int clothesslot, int item);

	UFUNCTION(BlueprintCallable, Category = "ClothesOptions")
		int getClothingColor(int clothesslot);

};
