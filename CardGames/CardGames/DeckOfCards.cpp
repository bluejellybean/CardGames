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

	////TODO: FIX THIS, SHOULD BE VALUES 1 and 11 for ace!!!!!!!!!!
	////////////////////////////
	///////////////////////////
	//inits card 0-51 with values 1-13
	createDeck();
	shuffleDeck();
}

void DeckOfCards::resetPointerToDeck(){
	pointerToDeck = 0;
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

void DeckOfCards::dealCard(short playerHandValue){
	printCardOut(pointerToDeck, playerHandValue);
	pointerToDeck++;
}
void DeckOfCards::printCardOut(short cardValue, short playerHandValue){

	if(card[cardValue] < 200){
		checkIfFaceCard(card[cardValue]);
		std::cout<<" of "<<suit[0];
	} else if(card[cardValue] < 300 && card[cardValue] >= 200){
		checkIfFaceCard(card[cardValue]);
		std::cout<<" of "<<suit[1];
	} else if(card[cardValue] < 400 && card[cardValue] >= 300){
		checkIfFaceCard(card[cardValue]);
		std::cout<<" of "<<suit[2];
	} else if(card[cardValue] < 500 && card[cardValue] >= 400){
		checkIfFaceCard(card[cardValue]);
		std::cout<<" of "<<suit[3];
	}
//TODO: split this into a cleanr function
	if ((card[cardValue] % 100 == 1) && (playerHandValue < 11)){
		handValue = 11;

	} else if((card[cardValue] % 100 == 1) && (playerHandValue >= 11)){
		handValue = 1;

	} else if (card[cardValue] % 100 >= 10){
			handValue = 10;

	} else if(card[cardValue] % 100 < 10){
		handValue = card[cardValue] % 100;
	}
}

void DeckOfCards::checkIfFaceCard(short cardValue){
	switch (cardValue % 100) {
		case 11:
			std::cout<<"Jack";
			break;
		case 12:
			std::cout<<"Queen";
			break;
		case 13:
			std::cout<<"King";
			break;
		default:
			std::cout<<cardValue % 100;
			break;
	}
}

void DeckOfCards::setHandValue(short newHandValue){
	handValue = newHandValue;
}

int DeckOfCards::getHandValue(){
	return handValue;
}

DeckOfCards::~DeckOfCards(void){
}