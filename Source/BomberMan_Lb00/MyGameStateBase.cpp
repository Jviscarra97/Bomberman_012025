// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"
#include "BomberMan_Lb00.h"

AMyGameState::AMyGameState()
{
	CurrentScore = 0;
}
int32 AMyGameState::GetScore()
{
	return CurrentScore;
}
void AMyGameState::SetScore(int32 NewScore)
{
	CurrentScore = NewScore;
}
