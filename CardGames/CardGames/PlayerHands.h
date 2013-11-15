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


	void playerHit();
	void PlayerStand();

	//insurance
	//surrender
	//split
	//double down
	void playerBet();
	void handleBets(int);


	PlayerHands(void);
	~PlayerHands(void);
};
