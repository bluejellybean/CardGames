#pragma once
class PlayerHands
{
private:

	short playerHandValue;

	int checkHandValue();
public:
	//bet

	

	void playerHit();
	void PlayerStand();

	//insurance
	//surrender
	//split
	//double down


	PlayerHands(void);
	~PlayerHands(void);
};

