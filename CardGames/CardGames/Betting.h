#pragma once
class Betting
{
	//used in paying out bets
	int betAmount;
	int chipCount;
public:

	//returns ChipCount
	int getChipCount();

	//bet amount gets set, chipCount -= betAmount
	void betChips(int);

	//TODO: setting betAmount to 10 everytime may be silly
	//used in payouts
	void winBet();
	void winBlackJack();
	void betPush();

	//prints out the current chipCount
	void printChipCount();

	Betting(void);
	~Betting(void);
};