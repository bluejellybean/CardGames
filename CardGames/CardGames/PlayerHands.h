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


	//Was in turnLogic
	int checkHandValue(short);

	void handleBlackJack();
	void handleBust();
	/////




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



//int TurnLogic::checkHandValue(short playerHandValue){
//	if(playerHandValue < 21){
//		return 0;
//	}  else if(playerHandValue > 21){
//		handleBust();
//		return 2;
//	} else if(playerHandValue == 21){
//		handleBlackJack();
//		return 1;
//	}
//}
//
//void TurnLogic::handleBlackJack(){
//	std::cout<<"BlackJack!"<<std::endl;
//}
//
//void TurnLogic::handleBust(){
//	std::cout<<"BUST!"<<std::endl;
//}