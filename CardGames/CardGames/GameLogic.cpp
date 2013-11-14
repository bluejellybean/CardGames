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
		newPlayer.playerHit();
	}
	std::cout<<"here"<<std::endl;
}

GameLogic::~GameLogic(void)
{
}
