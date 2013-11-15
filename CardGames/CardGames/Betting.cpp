#include "Betting.h"
#include <iostream>

Betting::Betting(void){
	chipCount = 500;
}

void Betting::printChipCount(){
	std::cout<<"Chip count is: "<<chipCount<<std::endl;
}

Betting::~Betting(void){
}
