#pragma once
class PlayerHands
{
private:
	short playerHandValue;
	int checkHandValue();
public:
	//bet
	void inGameOptions();
	int playerTurn;
	int busted;
	int blackJack;
	int getPlayerHandValue();

	int getPlayerChipCount();

	//Was in turnLogic
	int checkHandValue(short);

	void playerHit();
	void PlayerStand();

	//insurance
	//surrender
	//split
	//double down

	void resetFlagVariables();

	void setPlayerHandValue(int);
	void playerBet();
	void handleBets(int);


	PlayerHands(void);
	~PlayerHands(void);
};