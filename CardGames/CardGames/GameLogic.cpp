#include "GameLogic.h"
#include "PlayerHands.h"
#include <iostream>

PlayerHands dealer;
PlayerHands player;

GameLogic::GameLogic(void){
	playAgain = true;
}


void GameLogic::gameSetup(){
	std::cout<<"Current Chip Count is: "<<checkPlayerChipCount()<<std::endl;

	player.resetFlagVariables();
	dealer.resetFlagVariables();

	player.playerBet();
	
	std::cout<<"\nDealer showing:"<<std::endl;
	dealer.playerHit();
	std::cout<<"\nPlayer showing:"<<std::endl;
	player.playerHit();
}

int GameLogic::checkPlayerChipCount(){
	return  player.getPlayerChipCount();
}

void GameLogic::placeBet(){
	player.playerBet();
}

void GameLogic::playerLogic(){
	player.playerHit();
	while(player.getPlayerTurn() == true){
		if(player.getPlayerTurn() == false){
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
	dealer.PlayerStand(false);
}

void GameLogic::checkWins(){
	//TODO: try making this return int, handle bet changes?
	//TODO: make this not suck

		// 4 player busts. they lose
	if (player.getBustedState() == true){
		std::cout<<"House Wins!"<<std::endl;
		player.handleBets(2);//Lose bet amount

		// 1 player gets blackjack and dealer does not, they win 2.5 times bet
	}else if ((player.getBlackJackState() == true) && (dealer.getBlackJackState() == false)){
		std::cout<<"Player wins,BlackJack!"<<std::endl;
		player.handleBets(3);//gain bet*2.5

		// 2 player AND dealer get blackjack, get back bet
	} else if ((player.getBlackJackState() == true) && (dealer.getBlackJackState() == true)){
		std::cout<<"Push!"<<std::endl;
		player.handleBets(4);//gain bet
		
		// 5 player doesn't bust and dealer busts and player hand is better. player wins
	} else if ((player.getBustedState() == false) && (dealer.getBustedState() == true)){
		std::cout<<"Player Wins!"<<std::endl;
		player.handleBets(1);//gain bet*2
		
		//6
	} else if ((player.getBustedState() == false) && (dealer.getBustedState() == false) && (player.getPlayerHandValue() > dealer.getPlayerHandValue())){
		std::cout<<"Player wins!"<<std::endl;
		player.handleBets(1);

		//7
	} else if ((player.getBustedState() == false) && (dealer.getBustedState() == false) && (player.getPlayerHandValue() < dealer.getPlayerHandValue())){
		std::cout<<"House wins!"<<std::endl;
		player.handleBets(2);//Lose bet amount
	
		// 3
	} else if ((player.getBustedState() == false) && (player.getPlayerHandValue() == dealer.getPlayerHandValue())){
		std::cout<<"Push!"<<std::endl;
		player.handleBets(4);//gain bet
	}
}

//TODO: create error checking func
void GameLogic::playAgainPrompt(){
	short playAgainOption;
	std::cout<<"Do you want to play another hand?"<<std::endl;
	std::cin>>playAgainOption;
	if(playAgainOption == 1){
		playAgain = true;
	} else if (playAgainOption == 0){
		playAgain = false;
	}
}

bool GameLogic::getPlayAgain(){
	return playAgain;
}

GameLogic::~GameLogic(void)
{
}




// 1 Player blackJack & dealer !blackJack. WIN
// 2 player&dealer blackJack. PUSH
// 3 player !bust & player == dealer. PUSH


// 4 player busts. LOSE
// 5 player !bust, dealer busts. WIN

// 6 player !bust, dealer !bust. & player > dealer. WIN
// 7 player !bust, dealer !bust. & player < dealer. LOSE


