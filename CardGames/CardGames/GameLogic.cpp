#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>

PlayerHands dealer;
PlayerHands player;

GameLogic::GameLogic(void){
	player.playerBet();
	
	std::cout<<"\nDealer showing:"<<std::endl;
	dealer.playerHit();
	std::cout<<"\nPlayer showing:"<<std::endl;
	player.playerHit();
}

void GameLogic::placeBet(){
	player.playerBet();
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

void GameLogic::dealerLogic(){
	while((dealer.getPlayerHandValue()) < 17){
		dealer.playerHit();
	} 
	dealer.PlayerStand();
}

void GameLogic::checkWins(){
	//TODO: make blackjacks and pushes win properly

	if(player.busted == 1){
		std::cout<<"House Wins!"<<std::endl;
		player.handleBets(2);//Lose bet amount

	}else if ((player.blackJack == 1) && (dealer.blackJack == 0)){
		std::cout<<"Player wins,BlackJack!"<<std::endl;
		player.handleBets(3);//gain bet*2.5

	} else if ((player.blackJack) && (dealer.blackJack)){
		std::cout<<"Push!"<<std::endl;
		player.handleBets(4);//gain bet

	} else if ((!player.busted) && (dealer.busted)){
		std::cout<<"Player Wins!"<<std::endl;
		player.handleBets(1);//gain bet*2

	} else if ((!player.busted) && (!dealer.busted) && (player.getPlayerHandValue() > dealer.getPlayerHandValue())){
		std::cout<<"Player Wins!"<<std::endl;
		player.handleBets(1);//gain bet*2

	} else if ((!player.busted) && (!dealer.busted) && (player.getPlayerHandValue() < dealer.getPlayerHandValue())){
		std::cout<<"House wins!"<<std::endl;
		player.handleBets(2);//Lose bet amount

	} else if ((!player.busted) && (player.getPlayerHandValue() == dealer.getPlayerHandValue())){
		std::cout<<"Push!"<<std::endl;
		player.handleBets(4);//gain bet
	}
}

GameLogic::~GameLogic(void)
{
}
