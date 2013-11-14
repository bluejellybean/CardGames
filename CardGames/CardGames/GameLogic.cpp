#include "GameLogic.h"
#include <iostream>

GameLogic::GameLogic(void)
{
}

void GameLogic::checkHandValue(short playerHandValue){
	if(playerHandValue > 21){
		handleBust();
	} 
	//not sure how to handle this yet...retuns the best way?
	//else if(playerHandValue > 21){
	//	
	//}
}

void GameLogic::handleBust(){
	std::cout<<"BUST!"<<std::endl;
	
}

GameLogic::~GameLogic(void)
{
}
