#pragma once
class Betting
{
	int betAmount;
	int chipCount;
public:
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