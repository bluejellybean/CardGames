#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>

PlayerHands Dealer;

GameLogic::GameLogic(void){
	Dealer.playerHit();
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

void GameLogic::createNewDealer(){
	PlayerHands newDealer;
	newDealer.playerHit();
}

void GameLogic::dealerLogic(){
	while((Dealer.getPlayerHandValue()) < 17){
		Dealer.playerHit();
	} 
	Dealer.PlayerStand();
}
GameLogic::~GameLogic(void)
{
}
