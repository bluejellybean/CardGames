#pragma once
class GameLogic
{


public:
	

	void createNewPlayer();
	void createNewDealer();

	void dealerLogic();

	void checkWins();

	GameLogic(void);
	~GameLogic(void);
};