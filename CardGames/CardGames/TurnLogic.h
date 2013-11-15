#pragma once
class TurnLogic
{
public:

	int checkHandValue(short);

	void handleBlackJack();
	void handleBust();


	TurnLogic(void);
	~TurnLogic(void);
};