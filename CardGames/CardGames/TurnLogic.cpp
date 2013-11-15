#include "TurnLogic.h"
#include <iostream>

TurnLogic::TurnLogic(void){
}

int TurnLogic::checkHandValue(short playerHandValue){
	if(playerHandValue < 21){
		return 0;
	}  else if(playerHandValue > 21){
		handleBust();
		return 2;
	} else if(playerHandValue == 21){
		handleBlackJack();
		return 1;
	}
}

void TurnLogic::handleBlackJack(){
	std::cout<<"BlackJack!"<<std::endl;
}

void TurnLogic::handleBust(){
	std::cout<<"BUST!1"<<std::endl;
}

TurnLogic::~TurnLogic(void){
}
