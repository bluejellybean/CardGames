#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>

PlayerHands dealer;
PlayerHands player;

GameLogic::GameLogic(void){
	dealer.playerHit();
	player.playerHit();
}

void GameLogic::playerLogic(){
	player.playerHit();
	while(player.playerTurn == 0){
		if(player.playerTurn == 1){
			break;
		}

		player.inGameOptions();
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

	if(player.busted){
		std::cout<<"House Wins!"<<std::endl;
	} else if ((!player.busted) && (dealer.busted)){
		std::cout<<"Player Wins!"<<std::endl;
	} else if ((!player.busted) && (!dealer.busted) && (player.getPlayerHandValue() > dealer.getPlayerHandValue())){
		std::cout<<"Player Wins2!"<<std::endl;
	} else if ((!player.busted) && (!dealer.busted) && (player.getPlayerHandValue() < dealer.getPlayerHandValue())){
		std::cout<<"House wins2!"<<std::endl;
	}
}

GameLogic::~GameLogic(void)
{
}
