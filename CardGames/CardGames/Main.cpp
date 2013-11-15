#include "DeckOfCards.h"
#include "PlayerHands.h"
#include "GameLogic.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	GameLogic newGame;
	newGame.createNewPlayer();
	std::cout<<"playerTwohere"<<std::endl;
	newGame.createNewPlayer();
	return 0;
}