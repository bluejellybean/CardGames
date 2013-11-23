#include "Betting.h"
#include <iostream>

Betting::Betting(void){
	betAmount = 10;
	chipCount = 500;
}


void Betting::printChipCount(){
	std::cout<<"Chip count is: "<<chipCount<<std::endl;
	std::cout<<"Current bet is: "<<betAmount<<std::endl;
}

void Betting::betChips(int newBetAmount){
	betAmount = newBetAmount;
	chipCount -= betAmount;
}

void Betting::winBet(){
	chipCount += betAmount * 2;
//	betAmount = 10;
}

void Betting::winBlackJack(){
	chipCount += betAmount * 2.5;
	//betAmount = 10;
}

void Betting::betPush(){
	chipCount += betAmount;
	//betAmount = 10;
}

int Betting::getChipCount(){
	return chipCount;
}

Betting::~Betting(void){
}