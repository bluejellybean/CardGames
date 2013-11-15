#include "DeckOfCards.h"
#include "PlayerHands.h"
#include "GameLogic.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	GameLogic newGame;
	//newGame.createNewDealer();
	std::cout<<"Player One"<<std::endl;
	newGame.createNewPlayer();
	newGame.dealerLogic();
	newGame.checkWins();
	return 0;
}