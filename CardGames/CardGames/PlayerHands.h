#pragma once
class PlayerHands
{
private:
	short playerHandValue;
	int checkHandValue();
public:
	//bet

	int playerTurn;

	int getTestValue();
	void playerHit();
	void PlayerStand();

	//insurance
	//surrender
	//split
	//double down


	PlayerHands(void);
	~PlayerHands(void);
};
