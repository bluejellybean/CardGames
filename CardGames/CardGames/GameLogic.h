#pragma once
class GameLogic
{
private:
	

public:

	int checkPlayerChipCount();
	void gameSetup();
	void playerLogic();
	void placeBet();

	void dealerLogic();

	void checkWins();

	GameLogic(void);
	~GameLogic(void);
};

