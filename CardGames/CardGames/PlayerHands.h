#pragma once
class PlayerHands
{
private:
	short playerHandValue;
	int checkHandValue();
	
	int newBetAmount;

	bool blackJackState;
	bool bustedState;
	bool playerTurn;
public:
	//bet
	void inGameOptions();
	//int playerTurn;
	//int busted;
	//int blackJack;
	int getPlayerHandValue();

	int getPlayerChipCount();

	bool getBlackJackState();
	bool getBustedState();
	bool getPlayerTurn();
	
	int checkBetAmountModTen(int);
	int integerChecker(int);
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