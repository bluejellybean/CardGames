#include "DeckOfCards.h"
#include <iostream>
int main(){
	DeckOfCards newDeck;

	for(int i = 0; i < 52; i++){
		
		newDeck.printCardOut(i);
		std::cout<<std::endl;
	}
//	newDeck.dealCard();
	newDeck.shuffleDeck();
	//newDeck.dealCard();
	std::cout<<"\n \n \n "<<std::endl;
	for(int i = 0; i < 52; i++){

		newDeck.printCardOut(i);
				std::cout<<std::endl;
	}
}