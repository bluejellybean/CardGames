#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"
#include "TurnLogic.h"
#include "Betting.h"

DeckOfCards myDeck;
TurnLogic turnLogic;
Betting bets;

PlayerHands::PlayerHands(void){

	myDeck.handValue = 0;
	playerHandValue = 0;
	playerTurn = 0;
	busted = 0;
}

void PlayerHands::inGameOptions(){
	
	int userChoice;
	std::cin>>userChoice;
	switch (userChoice){
	case 1:
		playerHit();
		userChoice = 0;
		break;
	case 2: 
		PlayerStand();
		userChoice = 0;
		break;
	}

}

void PlayerHands::playerHit(){
	myDeck.dealCard();
	playerHandValue += myDeck.handValue;
	std::cout<<" Count: "<< playerHandValue<<std::endl;
	
	//if bust or stand
	if(turnLogic.checkHandValue(playerHandValue)==1){
		playerTurn = 1;
	} else if(turnLogic.checkHandValue(playerHandValue) == 2){
		busted = 1;
		playerTurn = 1;
	}
}

void PlayerHands::PlayerStand(){
	std::cout<<"Stand!"<<std::endl;
	playerTurn = 1;
}

int PlayerHands::getPlayerHandValue(){
	return playerHandValue;
}


PlayerHands::~PlayerHands(void){
}
