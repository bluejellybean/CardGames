#include "DeckOfCards.h"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>
DeckOfCards::DeckOfCards(void){

	DeckOfCards::card[52];
	DeckOfCards::suit[4];
	DeckOfCards::suit[0]="spades";
	suit[1]="clubs";
	suit[2]="hearts";
	suit[3]="diamonds";

	short temp = 0;
	for(int s = 1; s < 5; s++){
		for (int i = 0; i < 13; i++){
			card[(i+temp)] = i+(s*100);
			
		}
		temp += 13;
	}

}

void DeckOfCards::shuffleDeck(){
	std::srand(std::time(NULL));
	std::random_shuffle(std::begin(card),std::end(card));
}

void DeckOfCards::dealCard(){
	for(int i = 0; i < 52; i++){
		std::cout<<card[i]<<" ";
	}

	std::cout<<"\n \n \n"<<std::endl;
}
void DeckOfCards::printCardOut(int cardValue){
		//if card 105
	if(card[cardValue] < 200){
		std::cout<<card[5] % 100<<" of "<<suit[0]<<std::endl;
	} else if(card[16] < 300 && card[5] >= 200){
		std::cout<<card[16] % 100<<" of "<<suit[1]<<std::endl;
	}
}

DeckOfCards::~DeckOfCards(void){

}
