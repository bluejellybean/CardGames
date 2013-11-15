#include "Betting.h"
#include <iostream>

Betting::Betting(void){
	chipCount = 500;
}

void Betting::printChipCount(){
	std::cout<<"Your chip count is: "<<chipCount<<std::endl;
}

Betting::~Betting(void){
}