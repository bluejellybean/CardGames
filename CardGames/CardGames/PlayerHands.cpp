#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"

DeckOfCards myDeck;

PlayerHands::PlayerHands(void){
	std::cout<<"PlayerHands Construct"<<std::endl;
}

void PlayerHands::playerHit(){
	myDeck.dealCard();
}

void PlayerHands::PlayerStand(){

}


PlayerHands::~PlayerHands(void){
	std::cout<<"PlayerHands Destruct"<<std::endl;
}
