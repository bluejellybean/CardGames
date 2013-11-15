#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>

PlayerHands dealer;
PlayerHands player;

GameLogic::GameLogic(void){
	dealer.playerHit();
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

//void GameLogic::createNewDealer(){
//	PlayerHands newDealer;
//	newDealer.playerHit();
//}

void GameLogic::dealerLogic(){
	while((dealer.getPlayerHandValue()) < 17){
		dealer.playerHit();
	} 
	dealer.PlayerStand();
}

void GameLogic::checkWins(){
	if(player.getPlayerHandValue() > dealer.getPlayerHandValue()){
		std::cout<<"Player wins!"<<std::endl;
	} else {
		std::cout<<"House wins!"<<std::endl;
	}
}

GameLogic::~GameLogic(void)
{
}
