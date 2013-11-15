#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>


GameLogic::GameLogic(void)
{
}

void GameLogic::createNewPlayer(){
	PlayerHands newPlayer;
	newPlayer.playerHit();
	while(newPlayer.playerTurn == 0){
		if(newPlayer.playerTurn == 1){
			break;
		}
		

		newPlayer.inGameOptions();
	}
	std::cout<<"\n "<<std::endl;
}


GameLogic::~GameLogic(void)
{
}
