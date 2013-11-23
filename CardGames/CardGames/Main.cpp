#include "DeckOfCards.h"
#include "PlayerHands.h"
#include "GameLogic.h"
#include <iostream>

//TODO:NOTE: add AI with different play styles and such. Can analyse outcomes
int main(){
	GameLogic newGame;
	while(newGame.checkPlayerChipCount() > 0 && newGame.getPlayAgain() == true){
		newGame.gameSetup();
		newGame.playerLogic();
		std::cout<<"Dealer hand:"<<std::endl;
		newGame.dealerLogic();
		std::cout<<"\n \n \n \n"<<std::endl;
		newGame.checkWins();
		//std::cout<<"\n \n \n \n \n"<<std::endl;
		//TODO:change this to display more relevant info
		std::cout<<"\n"<<std::endl;
		newGame.playAgainPrompt();
		std::cout<<"\n \n \n \n"<<std::endl;
	}
	return 0;
}