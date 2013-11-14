#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"
#include "GameLogic.h"

DeckOfCards myDeck;
GameLogic gameLogic;
PlayerHands::PlayerHands(void){
	myDeck.handValue = 0;
	playerHandValue = 0;
}

void PlayerHands::playerHit(){
	myDeck.dealCard();
	playerHandValue += myDeck.handValue;
	std::cout<<"Count: "<< playerHandValue<<std::endl;
	
	gameLogic.checkHandValue(playerHandValue);
}



void PlayerHands::PlayerStand(){

}


PlayerHands::~PlayerHands(void){
}
