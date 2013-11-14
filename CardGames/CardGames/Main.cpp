#include "DeckOfCards.h"
#include "PlayerHands.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	int number;
	PlayerHands userHand;
	std::cin>>number;
	if(number =1){
	userHand.playerHit();
	}
	return 0;
}