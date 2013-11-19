#pragma once
#include <string>
class DeckOfCards
{
private:
	int pointerToDeck;
	
	short card[52];
	std::string suit[4];

	void checkIfFaceCard(short);
	short handValue;
public:
	
	void resetPointerToDeck();
	void setHandValue(short);
	int getHandValue();


	DeckOfCards(void);

	void PrintFullDeck();
	void createDeck();
	void shuffleDeck();
	void dealCard(short);
	
	void printCardOut(short, short);

	~DeckOfCards(void);
};