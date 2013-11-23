#pragma once
class PlayerHands
{
private:
	//DELETE THIS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	int temp;


	//players hand value
	short playerHandValue;

	//player enters this, used in checking if bet is valid
	int newBetAmount;

	//checks for blackjacks, busts, player turns
	bool blackJackState;
	bool bustedState;
	bool playerTurn;
public:
	//lets player hit or stand
	//TODO: add other options for insurrance and such..may not be best to place in THIS func though
	void inGameOptions();

	//returns playerHandValue
	int getPlayerHandValue();

	//returns bets.getChipCount
	//TODO: find out a better way to access this
	int getPlayerChipCount();

	//returns each state
	bool getBlackJackState();
	bool getBustedState();
	bool getPlayerTurn();
	
	//checks if the bet is a multiple of 10
	int checkBetAmountModTen(int);
	//checks if cined value is an integer
	int integerChecker(int);

	//checks for blackjacks and busts
	int checkHandValue(short);

	//Allows player to hit
	//TODO: move the switch statement
	void playerHit();

	//allows player to stand, changes playerTurn to false
	void PlayerStand(bool);

	//TODO: ADD THESE!!
	//insurance
	//surrender
	//split
	//double down

	//Called in construct, resets all flags for player
	void resetFlagVariables();
	
	//Sets bet amount and prints chip count
	void playerBet();

	//TODO check out gameLogic, try to change this
	//calls correct handle in bets
	void handleBets(int);


	PlayerHands(void);
	~PlayerHands(void);
};