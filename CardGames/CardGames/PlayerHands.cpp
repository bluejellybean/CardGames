#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"

DeckOfCards myDeck;

PlayerHands::PlayerHands(void){
	myDeck.handValue = 0;
	playerHandValue = 0;
}

void PlayerHands::playerHit(){
	myDeck.dealCard();
	playerHandValue += myDeck.handValue;
	std::cout<<"Count: "<< playerHandValue<<std::endl;
}

void PlayerHands::PlayerStand(){

}


PlayerHands::~PlayerHands(void){
}
