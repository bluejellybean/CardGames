#include "DeckOfCards.h"
#include "PlayerHands.h"
#include "GameLogic.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	GameLogic newGame;
	while(newGame.checkPlayerChipCount() > 0){
		newGame.gameSetup();
		newGame.playerLogic();
		newGame.dealerLogic();
		newGame.checkWins();
		std::cout<<"\nnewLine\n"<<std::endl;
	}
	return 0;
}