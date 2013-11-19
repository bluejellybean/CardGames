#pragma once
class GameLogic
{
private:
	//Player chooses if they want to play again
	bool playAgain;
	
public:
	//call to plaeyr.getPlayerChipCount
	int checkPlayerChipCount();
	//Resets flag variables, allows player to bet, first cards come up
	void gameSetup();
	//Logic for player turns
	void playerLogic();
	//Logic for dealer tuns
	void dealerLogic();

	//TODO:figure out why this isnt being used
	void placeBet();

	
	//asks user if they want to play again, also sets if they do
	//TODO: split these up and add int checking for input
	void playAgainPrompt();

	//returns playAgain, used for main loop
	bool getPlayAgain();
	//Checks for wins/loss. Calls handling funcs for it
	//TODO: change handles to return a number instead
	void checkWins();

	GameLogic(void);
	~GameLogic(void);
};