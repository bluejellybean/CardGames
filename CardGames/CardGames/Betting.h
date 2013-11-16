#pragma once
class Betting
{
	int betAmount;
public:
	int chipCount;
	int getChipCount();

	void betChips();

	void winBet();
	void LooseBet();
	void winBlackJack();
	void betPush();


	void printChipCount();

	Betting(void);
	~Betting(void);
};

