#include "FBullCowGame.h"

int FBullCowGame::GetMaxTries() { return MyMaxTries; }

int FBullCowGame::GetCurrentTry() { return MyCurrentTry; }


void FBullCowGame::Reset()
{
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(string)
{
	return false;
}
