// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardMenuWidget.h"
#include "Wizards.h"
#include "spellBook.h"


void UWizardMenuWidget::UWizardsMenuWidget() {
	ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));
	theParticle = ArbitraryParticleName.Object;
	morphList.Init(0.0, 46);
}

//Initialize with previous values or defaults if nothing present
void UWizardMenuWidget::spellsInitialize() 
{
	UWizardsSaveGame* LoadGameInstance = NewObject<UWizardsSaveGame>();
	morphList.Init(0.0, 46);
	clothesList.Init(0, 9);
	colorList.Init(0, 9);
	//	spellList = LoadGameInstance->spellList;
	//if is empty
	if (!LoadGameInstance->LoadGameDataFromFile()) 
	{
		//Initialize five spells
		//theSpell.myParticle = ArbitraryParticleName.Object;
		for (int i = 0; i < 5; i++) {
			UspellBook* theSpell = NewObject<UspellBook>();
			theSpell->myParticle = theParticle;
			theSpell->spellEffect = 0;
			theSpell->spellType = 0;
			theSpell->spellCost = 0.0;
			theSpell->spellSpeed = 0.0;
			theSpell->spellDamage = 0.5;
			theSpell->spellRange = 0.0;
			theSpell->spellSize = 0.0;
			theSpell->canBounce = false;
			theSpell->hasGravity = false;
			theSpell->isHoming = false;
			theSpell->explodeOnCollision = false;
			theSpell->explodeOnDeath = false;
			theSpell->explosionHitDamage = 0.5;
			theSpell->explosionHitSize = 0.0;
			theSpell->explosionDeathDamage = 0.5;
			theSpell->explosionDeathSize = 0.0;
			spellList.Add(theSpell);
		}
	}
	else 
	{
		spellList = LoadGameInstance->spellBook;
		morphList = LoadGameInstance->morphList;
		clothesList = LoadGameInstance->clothesList;
		colorList = LoadGameInstance->colorList;
	}
	spellsSave();
}


//Saves the spells
void UWizardMenuWidget::spellsSave() 
{
	UWizardsSaveGame* SaveGameInstance = NewObject<UWizardsSaveGame>();
	SaveGameInstance->spellBook = spellList;
	SaveGameInstance->morphList = morphList;
	SaveGameInstance->clothesList = clothesList;
	SaveGameInstance->colorList = colorList;
	SaveGameInstance->SaveGameDataToFile();
}

//Called when spell is changed in spell bar
//Changes all values to this spells values
void UWizardMenuWidget::spellChange(int32 spellSlot) 
{
	currSpell = spellSlot;
}

//List of all setters
void UWizardMenuWidget::setEffect(int effectChange) 
{
	spellList[currSpell]->spellEffect = abs((spellList[currSpell]->spellEffect + effectChange) % 5);// %however many spell types we have
}

void UWizardMenuWidget::setType(int typeChange) 
{
	spellList[currSpell]->spellType = abs((spellList[currSpell]->spellType + typeChange) % 9);// %however many spell types we have
}

void UWizardMenuWidget::setGravity(bool hasGravity) 
{
	spellList[currSpell]->hasGravity = hasGravity;
}

void UWizardMenuWidget::setBounce(bool hasBounce) 
{
	spellList[currSpell]->canBounce = hasBounce;
}

void UWizardMenuWidget::setHoming(bool isHoming) 
{
	spellList[currSpell]->isHoming = isHoming;
}

void UWizardMenuWidget::setExplodeHit(bool explodeHit) 
{
	spellList[currSpell]->explodeOnCollision = explodeHit;
}

void UWizardMenuWidget::setExplodeDeath(bool explodeDeath) 
{
	spellList[currSpell]->explodeOnDeath = explodeDeath;
}

void UWizardMenuWidget::setDamage(float damage) 
{
	spellList[currSpell]->spellDamage = damage;
}

void UWizardMenuWidget::setSpeed(float speed) 
{
	spellList[currSpell]->spellSpeed = speed;
}

void UWizardMenuWidget::setRange(float life) 
{
	spellList[currSpell]->spellRange = life;
}

void UWizardMenuWidget::setSize(float size) 
{
	spellList[currSpell]->spellSize = size;
}

void UWizardMenuWidget::setCost(float cost) 
{
	spellList[currSpell]->spellCost = cost;
}

void UWizardMenuWidget::setExplHitDamage(float damage) 
{
	spellList[currSpell]->explosionHitDamage = damage;
}

void UWizardMenuWidget::setExplHitSize(float size) 
{
	spellList[currSpell]->explosionHitSize = size;
}

void UWizardMenuWidget::setExplDeathDamage(float damage) 
{
	spellList[currSpell]->explosionDeathDamage = damage;
}

void UWizardMenuWidget::setExplDeathSize(float size) 
{
	spellList[currSpell]->explosionDeathSize = size;
}


//List of all getters

FName UWizardMenuWidget::getEffect() 
{
	FName returnName;
	switch (spellList[currSpell]->spellEffect)
	{
	case 0:
		returnName = "Fire";
		break;
	case 1:
		returnName = "Lightning";
		break;
	case 2:
		returnName = "Water";
		break;
	case 3:
		returnName = "Ice";
		break;
	case 4:
		returnName = "Earth";
		break;
	default:
		spellList[currSpell]->spellEffect = 0;
		returnName = "Fire";
		break;
	}
	return returnName;
}

FName UWizardMenuWidget::getType() 
{
	FName returnName;
	switch (spellList[currSpell]->spellType)
	{
	case 0:
		returnName = "Projectile";
		break;
	case 1:
		returnName = "Blast";
		break;
	case 2:
		returnName = "Cone";
		break;
	case 3:
		returnName = "Rapid Projectile";
		break;
	case 4:
		returnName = "Single Beam";
		break;
	case 5:
		returnName = "Duration Beam";
		break;
	case 6:
		returnName = "Pillar";
		break;
	case 7:
		returnName = "Cage";
		break;
	case 8:
		returnName = "AOE Instant";
		break;
	default:
		spellList[currSpell]->spellType = 0;
		returnName = "Projectile";
		break;
	}
	return returnName;
}

bool UWizardMenuWidget::getGravity() 
{
	return spellList[currSpell]->hasGravity;
}

bool UWizardMenuWidget::getBounce() 
{
	return spellList[currSpell]->canBounce;
}

bool UWizardMenuWidget::getHoming() 
{
	return spellList[currSpell]->isHoming;
}

bool UWizardMenuWidget::getExplodeHit() 
{
	return spellList[currSpell]->explodeOnCollision;
}

bool UWizardMenuWidget::getExplodeDeath() 
{
	return spellList[currSpell]->explodeOnDeath;
}

float UWizardMenuWidget::getDamage() 
{
	return spellList[currSpell]->spellDamage;
}

float UWizardMenuWidget::getSpeed() 
{
	return spellList[currSpell]->spellSpeed;
}

float UWizardMenuWidget::getRange() 
{
	return spellList[currSpell]->spellRange;
}

float UWizardMenuWidget::getSize() {
	return spellList[currSpell]->spellSize;
}

float UWizardMenuWidget::getCost() 
{
	return spellList[currSpell]->spellCost;
}

float UWizardMenuWidget::getExplHitDamage() 
{
	return spellList[currSpell]->explosionHitDamage;
}

float UWizardMenuWidget::getExplHitSize() 
{
	return spellList[currSpell]->explosionHitSize;
}

float UWizardMenuWidget::getExplDeathDamage() 
{
	return spellList[currSpell]->explosionDeathDamage;
}

float UWizardMenuWidget::getExplDeathSize() 
{
	return spellList[currSpell]->explosionDeathSize;
}

void UWizardMenuWidget::setmouth_height(float morph){ morphList[0] = morph; }

void UWizardMenuWidget::setmouth_llip_fullness(float morph){ morphList[1] = morph; }

void UWizardMenuWidget::setmouth_llip_size(float morph){ morphList[2] = morph; }

void UWizardMenuWidget::setmouth_overbite(float morph){ morphList[3] = morph; }

void UWizardMenuWidget::setmouth_ulip_fullness(float morph){ morphList[4] = morph; }

void UWizardMenuWidget::setmouth_ulip_size(float morph){ morphList[5] = morph; }

void UWizardMenuWidget::setmouth_underbite(float morph){ morphList[6] = morph; }

void UWizardMenuWidget::setmouth_width(float morph){ morphList[7] = morph; }

void UWizardMenuWidget::setjaw_definition(float morph){ morphList[8] = morph; }

void UWizardMenuWidget::setjaw_height(float morph){ morphList[9] = morph; }

void UWizardMenuWidget::setjaw_width(float morph){ morphList[10] = morph; }

void UWizardMenuWidget::setcheek_crease(float morph){ morphList[11] = morph; }

void UWizardMenuWidget::setcheek_depth(float morph){ morphList[12] = morph; }

void UWizardMenuWidget::setcheek_gauntness(float morph){ morphList[13] = morph; }

void UWizardMenuWidget::setcheek_height(float morph){ morphList[14] = morph; }

void UWizardMenuWidget::setcheek_width(float morph){ morphList[15] = morph; }

void UWizardMenuWidget::setnose_bridge_depth(float morph){ morphList[16] = morph; }

void UWizardMenuWidget::setnose_bridge_width(float morph){ morphList[17] = morph; }

void UWizardMenuWidget::setnose_crook(float morph){ morphList[18] = morph; }

void UWizardMenuWidget::setnose_length(float morph){ morphList[19] = morph; }

void UWizardMenuWidget::setnose_mid_depth(float morph){ morphList[20] = morph; }

void UWizardMenuWidget::setnose_mid_height(float morph){ morphList[21] = morph; }

void UWizardMenuWidget::setnose_mid_width(float morph){ morphList[22] = morph; }

void UWizardMenuWidget::setnose_nostril_height(float morph){ morphList[23] = morph; }

void UWizardMenuWidget::setnose_nostril_width(float morph){ morphList[24] = morph; }

void UWizardMenuWidget::setnose_tip_height(float morph){ morphList[25] = morph; }

void UWizardMenuWidget::setnose_tip_point(float morph){ morphList[26] = morph; }

void UWizardMenuWidget::setnose_tip_size(float morph){ morphList[27] = morph; }

void UWizardMenuWidget::seteye_depth(float morph){ morphList[28] = morph; }

void UWizardMenuWidget::seteye_height(float morph){ morphList[29] = morph; }

void UWizardMenuWidget::seteye_width(float morph){ morphList[30] = morph; }

void UWizardMenuWidget::setbrow_height(float morph){ morphList[31] = morph; }

void UWizardMenuWidget::setbrow_position(float morph){ morphList[32] = morph; }

void UWizardMenuWidget::setbrow_slant(float morph){ morphList[33] = morph; }

void UWizardMenuWidget::setbrow_thickness(float morph){ morphList[34] = morph; }

void UWizardMenuWidget::setbrow_width(float morph){ morphList[35] = morph; }

void UWizardMenuWidget::setear_height(float morph){ morphList[36] = morph; }

void UWizardMenuWidget::setear_lobesize(float morph){ morphList[37] = morph; }

void UWizardMenuWidget::setear_outwardness(float morph){ morphList[38] = morph; }

void UWizardMenuWidget::setear_size(float morph){ morphList[39] = morph; }

void UWizardMenuWidget::setear_slant(float morph){ morphList[40] = morph; }

void UWizardMenuWidget::setchin_cleft(float morph){ morphList[41] = morph; }

void UWizardMenuWidget::setchin_depth(float morph){ morphList[42] = morph; }

void UWizardMenuWidget::setchin_height(float morph){ morphList[43] = morph; }

void UWizardMenuWidget::setchin_size(float morph){ morphList[44] = morph; }

void UWizardMenuWidget::setchin_width(float morph){ morphList[45] = morph; }



float UWizardMenuWidget:: getmouth_height(){ return morphList[0]; }

float UWizardMenuWidget:: getmouth_llip_fullness(){ return morphList[1]; }

float UWizardMenuWidget:: getmouth_llip_size(){ return morphList[2]; }

float UWizardMenuWidget:: getmouth_overbite(){ return morphList[3]; }

float UWizardMenuWidget:: getmouth_ulip_fullness(){ return morphList[4]; }

float UWizardMenuWidget:: getmouth_ulip_size(){ return morphList[5]; }

float UWizardMenuWidget:: getmouth_underbite(){ return morphList[6]; }

float UWizardMenuWidget:: getmouth_width(){ return morphList[7]; }

float UWizardMenuWidget:: getjaw_definition(){ return morphList[8]; }

float UWizardMenuWidget:: getjaw_height(){ return morphList[9]; }

float UWizardMenuWidget:: getjaw_width(){ return morphList[10]; }

float UWizardMenuWidget:: getcheek_crease(){ return morphList[11]; }

float UWizardMenuWidget:: getcheek_depth(){ return morphList[12]; }

float UWizardMenuWidget:: getcheek_gauntness(){ return morphList[13]; }

float UWizardMenuWidget:: getcheek_height(){ return morphList[14]; }

float UWizardMenuWidget:: getcheek_width(){ return morphList[15]; }

float UWizardMenuWidget:: getnose_bridge_depth(){ return morphList[16]; }

float UWizardMenuWidget:: getnose_bridge_width(){ return morphList[17]; }

float UWizardMenuWidget:: getnose_crook(){ return morphList[18]; }

float UWizardMenuWidget:: getnose_length(){ return morphList[19]; }

float UWizardMenuWidget:: getnose_mid_depth(){ return morphList[20]; }

float UWizardMenuWidget:: getnose_mid_height(){ return morphList[21]; }

float UWizardMenuWidget:: getnose_mid_width(){ return morphList[22]; }

float UWizardMenuWidget:: getnose_nostril_height(){ return morphList[23]; }

float UWizardMenuWidget:: getnose_nostril_width(){ return morphList[24]; }

float UWizardMenuWidget:: getnose_tip_height(){ return morphList[25]; }

float UWizardMenuWidget:: getnose_tip_point(){ return morphList[26]; }

float UWizardMenuWidget:: getnose_tip_size(){ return morphList[27]; }

float UWizardMenuWidget:: geteye_depth(){ return morphList[28]; }

float UWizardMenuWidget:: geteye_height(){ return morphList[29]; }

float UWizardMenuWidget:: geteye_width(){ return morphList[30]; }

float UWizardMenuWidget:: getbrow_height(){ return morphList[31]; }

float UWizardMenuWidget:: getbrow_position(){ return morphList[32]; }

float UWizardMenuWidget:: getbrow_slant(){ return morphList[33]; }

float UWizardMenuWidget:: getbrow_thickness(){ return morphList[34]; }

float UWizardMenuWidget:: getbrow_width(){ return morphList[35]; }

float UWizardMenuWidget:: getear_height(){ return morphList[36]; }

float UWizardMenuWidget:: getear_lobesize(){ return morphList[37]; }

float UWizardMenuWidget:: getear_outwardness(){ return morphList[38]; }

float UWizardMenuWidget:: getear_size(){ return morphList[39]; }

float UWizardMenuWidget:: getear_slant(){ return morphList[40]; }

float UWizardMenuWidget:: getchin_cleft(){ return morphList[41]; }

float UWizardMenuWidget:: getchin_depth(){ return morphList[42]; }

float UWizardMenuWidget:: getchin_height(){ return morphList[43]; }

float UWizardMenuWidget:: getchin_size(){ return morphList[44]; }

float UWizardMenuWidget:: getchin_width(){ return morphList[45]; }



void UWizardMenuWidget::setClothingItem(int clothesslot, int item)
{
	clothesList[clothesslot] = item;
}

int UWizardMenuWidget::getClothingItem(int clothesslot)
{
	return clothesList[clothesslot];
}

void UWizardMenuWidget::setClothingColor(int clothesslot, int item)
{
	colorList[clothesslot] = item;
}

int UWizardMenuWidget::getClothingColor(int clothesslot)
{
	return colorList[clothesslot];
}
