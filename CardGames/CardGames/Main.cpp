#include "DeckOfCards.h"
#include "PlayerHands.h"
#include "GameLogic.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	PlayerHands userHand;
	std::cout<<"Player One"<<std::endl;
	userHand.playerHit();
	std::cout<<"hit!"<<std::endl;
		userHand.playerHit();
	std::cout<<"hit!"<<std::endl;
		userHand.playerHit();
	std::cout<<"hit!"<<std::endl;
	return 0;
}