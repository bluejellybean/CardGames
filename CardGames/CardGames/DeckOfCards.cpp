#include "DeckOfCards.h"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>
DeckOfCards::DeckOfCards(void){
	suit[0]="spades";
	suit[1]="clubs";
	suit[2]="hearts";
	suit[3]="diamonds";

	short handValue = 0;

	int pointerToDeck = 0;
	//inits card 0-51 with values 1-13
	createDeck();
	shuffleDeck();
}

void DeckOfCards::createDeck(){
	short temp = 0;
	for(int s = 1; s < 5; s++){
		for (int i = 0; i < 13; i++){
			card[(i+temp)] = (i+(s*100)+1);	
		}
		temp += 13;
	}
}


void DeckOfCards::shuffleDeck(){
	std::srand( (unsigned int)std::time(NULL));
	std::random_shuffle(std::begin(card),std::end(card));
}

void DeckOfCards::PrintFullDeck(){
	for(int i = 0; i < 52; i++){
		std::cout<<card[i]<<" ";
	}
	std::cout<<"\n \n \n"<<std::endl;
}


void DeckOfCards::dealCard(){
	printCardOut(pointerToDeck);
	pointerToDeck++;
}
void DeckOfCards::printCardOut(short cardValue){

	if(card[cardValue] < 200){
		std::cout<<card[cardValue] % 100<<" of "<<suit[0];
	} else if(card[cardValue] < 300 && card[cardValue] >= 200){
		std::cout<<card[cardValue] % 100<<" of "<<suit[1];
	} else if(card[cardValue] < 400 && card[cardValue] >= 300){
		std::cout<<card[cardValue] % 100<<" of "<<suit[2];
	} else if(card[cardValue] < 500 && card[cardValue] >= 400){
		std::cout<<card[cardValue] % 100<<" of "<<suit[3];
	}

	handValue = card[cardValue] % 100;
}

DeckOfCards::~DeckOfCards(void){
}
