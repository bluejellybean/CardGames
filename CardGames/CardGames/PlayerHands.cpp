#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"
#include "TurnLogic.h"

DeckOfCards myDeck;
TurnLogic turnLogic;
PlayerHands::PlayerHands(void){
	myDeck.handValue = 0;
	playerHandValue = 0;
	playerTurn = 0;
}


void PlayerHands::playerHit(){
	myDeck.dealCard();
	playerHandValue += myDeck.handValue;
	std::cout<<"Count: "<< playerHandValue<<std::endl;
	
	//if bust or stand
	if(turnLogic.checkHandValue(playerHandValue)==1){
		playerTurn = 1;
	}
}



void PlayerHands::PlayerStand(){

}


PlayerHands::~PlayerHands(void){
}
