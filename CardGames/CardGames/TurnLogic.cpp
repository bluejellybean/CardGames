#include "TurnLogic.h"
#include <iostream>

TurnLogic::TurnLogic(void)
{
}

int TurnLogic::checkHandValue(short playerHandValue){
	if(playerHandValue < 21){
		return 0;
	}  else if(playerHandValue > 21){
		handleBust();
		return 1;
	}
	//not sure how to handle this yet...retuns the best way?
	//else if(playerHandValue > 21){
	//	
	//}
}

void TurnLogic::handleBust(){
	std::cout<<"BUST!"<<std::endl;
}

TurnLogic::~TurnLogic(void)
{
}
