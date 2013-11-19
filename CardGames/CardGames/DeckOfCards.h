#pragma once
#include <string>
class DeckOfCards
{
private:
	//marks position of next card to print
	int pointerToDeck;
	//cards in the deck
	short card[52];
	std::string suit[4];

	//checks if the card is a fac
	void checkIfFaceCard(short);
	//value of current card, use this with playerHandValue
	short handValue;
public:
	DeckOfCards(void);


	//moves pointer to first card in deck
	void resetPointerToDeck();
	//used to set handValue to 0 after each hand
	void setHandValue(short);
	//returns the handValue
	int getHandValue();

	//inits card array to proper values
	void createDeck();
	//randomizes cards in deck
	void shuffleDeck();
	//prints out card, moves pointerToDeck by 1
	void dealCard(short);
	//function that actually prints out he card name and sets handValues
	void printCardOut(short, short);

	~DeckOfCards(void);
};