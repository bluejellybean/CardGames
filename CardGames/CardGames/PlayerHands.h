#pragma once
class PlayerHands
{
public:
	//bet

	short cardValue;

	void playerHit();
	void PlayerStand();

	//insurance
	//surrender
	//split
	//double down


	PlayerHands(void);
	~PlayerHands(void);
};

