#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>

GameLogic::GameLogic(void)
{
}

void GameLogic::createNewPlayer(){
	PlayerHands newPlayer;
	
	while(newPlayer.playerTurn == 0){
		if(newPlayer.playerTurn == 1){
			break;
		}
		//deals player first card
		//TODO: make this work on a menu
		newPlayer.playerHit();
	}
	std::cout<<"\n "<<std::endl;
}

GameLogic::~GameLogic(void)
{
}
