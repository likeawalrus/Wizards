// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardsSaveGame.h"
#include "Wizards.h"

UWizardsSaveGame::UWizardsSaveGame()
{
	ThePath = FPaths::ConvertRelativePathToFull(FPaths::GameSavedDir());
	ThePath.Append(TEXT("SaveGames\\spellBook.save"));
	for (int i = 0; i < 5; i++) 
	{
		UspellBook* spells = NewObject<UspellBook>();
		spellBook.Add(spells);
	}
	morphList.Init(0.0, 46);
	clothesList.Init(0, 9);
	colorList.Init(0, 9);
}

void UWizardsSaveGame::SaveLoadData(FArchive& Ar, TArray<UspellBook*>& spellBook, TArray<float>& morphList, TArray<int>& clothesList, TArray<int>& colorList)
{
	for (int i = 0; i < 5; i++) 
	{
		//Ar << spellBook[i]->myParticle;
		Ar << spellBook[i]->spellEffect;
		Ar << spellBook[i]->spellType;
		UE_LOG(LogTemp, Warning, TEXT("%f , %f, %f, %f, %f"), spellBook[i]->spellDamage, spellBook[i]->spellSize, spellBook[i]->spellRange, spellBook[i]->spellSpeed, spellBook[i]->spellCost);
		Ar << spellBook[i]->spellCost;
		Ar << spellBook[i]->spellSpeed;
		Ar << spellBook[i]->spellDamage;
		Ar << spellBook[i]->spellRange;
		Ar << spellBook[i]->spellSize;
		Ar << spellBook[i]->canBounce;
		Ar << spellBook[i]->hasGravity;
		Ar << spellBook[i]->isHoming;
		Ar << spellBook[i]->explodeOnCollision;
		Ar << spellBook[i]->explodeOnDeath;
		Ar << spellBook[i]->explosionHitDamage;
		Ar << spellBook[i]->explosionHitSize;
		Ar << spellBook[i]->explosionDeathDamage;
		Ar << spellBook[i]->explosionDeathSize;
	}
	for (int i = 0; i < 46; i++) 
	{
		Ar << morphList[i];
	}
	for (int i = 0; i < 9; i++)
	{
		Ar << clothesList[i];
	}
	for (int i = 0; i < 9; i++)
	{
		Ar << colorList[i];
	}
}

bool UWizardsSaveGame::SaveGameDataToFile()
{
	//Variable Data -> Binary
	FBufferArchive ToBinary;
	SaveLoadData(ToBinary, spellBook, morphList, clothesList, colorList);

	//No Data
	if (ToBinary.Num() <= 0) return false;
	//~

	//Binary to Hard Disk
	if (FFileHelper::SaveArrayToFile(ToBinary, *ThePath))
	{
		// Free Binary Array 	
		ToBinary.FlushCache();
		ToBinary.Empty();
		return true;
	}

	// Free Binary Array 	
	ToBinary.FlushCache();
	ToBinary.Empty();
	return false;
}

bool UWizardsSaveGame::LoadGameDataFromFile() {
	//Load the data array,
	// 	you do not need to pre-initialize this array,
	//		UE4 C++ is awesome and fills it 
	//		with whatever contents of file are, 
	//		and however many bytes that is
	TArray<uint8> TheBinaryArray;
	if (!FFileHelper::LoadFileToArray(TheBinaryArray, *ThePath))
	{
		return false;
	}

	//File Load Error
	if (TheBinaryArray.Num() <= 0) return false;

	//~
	//		  Read the Data Retrieved by GFileManager
	//~

	FMemoryReader FromBinary = FMemoryReader(TheBinaryArray, true); //true, free data after done
	FromBinary.Seek(0);
	SaveLoadData(FromBinary, spellBook, morphList, clothesList, colorList);

	//~
	//								Clean up 
	//~
	FromBinary.FlushCache();

	// Empty & Close Buffer 
	TheBinaryArray.Empty();
	FromBinary.Close();

	return true;
}

