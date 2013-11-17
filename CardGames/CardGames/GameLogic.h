#pragma once
class GameLogic
{
private:
	bool playAgain;

public:

	int checkPlayerChipCount();
	void gameSetup();
	void playerLogic();
	void placeBet();

	void dealerLogic();

	void playAgainPrompt();

	bool getPlayAgain();
	void checkWins();

	GameLogic(void);
	~GameLogic(void);
};