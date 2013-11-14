#pragma once
#include <string>
class DeckOfCards
{
private:
	int card[52];
	std::string suit[4];

public:
	DeckOfCards(void);

	void shuffleDeck();
	void dealCard();
	void printCardOut(int);

	~DeckOfCards(void);
};
