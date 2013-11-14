#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"

DeckOfCards myDeck;

PlayerHands::PlayerHands(void){
	myDeck.dealCard();
}

void PlayerHands::playerHit(){
	myDeck.dealCard();
}

void PlayerHands::PlayerStand(){

}


PlayerHands::~PlayerHands(void){
}
