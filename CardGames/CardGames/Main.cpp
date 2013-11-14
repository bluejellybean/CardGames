#include "DeckOfCards.h"
#include "PlayerHands.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	PlayerHands userHand;
	std::cout<<"Player One"<<std::endl;
	userHand.playerHit();
	PlayerHands newPlayer;
	std::cout<<"Player Two"<<std::endl;
	newPlayer.playerHit();

	std::cout<<"\n \n"<<std::endl;

	std::cout<<"Player One"<<std::endl;
	userHand.playerHit();
	std::cout<<"Player One"<<std::endl;
	newPlayer.playerHit();
	return 0;
}