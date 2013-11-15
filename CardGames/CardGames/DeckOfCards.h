#pragma once
#include <string>
class DeckOfCards
{
private:
	int pointerToDeck;
	
	short card[52];
	std::string suit[4];

	void checkIfFaceCard(short);

public:
	
	short handValue;

	DeckOfCards(void);

	void PrintFullDeck();
	void createDeck();
	void shuffleDeck();
	void dealCard();
	
	void printCardOut(short);

	~DeckOfCards(void);
};