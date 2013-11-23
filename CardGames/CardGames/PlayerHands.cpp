#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"
#include "Betting.h"

DeckOfCards myDeck;
Betting bets;

PlayerHands::PlayerHands(void){
	resetFlagVariables();
}
//TODO: add this in the other functions
int PlayerHands::integerChecker(int checkedNumber){

	checkedNumber = 0;
	std::cin>>checkedNumber;
	if(!std::cin>>checkedNumber){
		std::cin.clear();
		std::cin.ignore(1000,'\n');
	}
	return checkedNumber;
}

//TODO: fix compiler warning of not all control paths return a value
int PlayerHands::checkBetAmountModTen(int newBetAmountToCheck){
	newBetAmountToCheck = 0;

	std::cin>>newBetAmountToCheck;
	if(!std::cin>>newBetAmountToCheck || newBetAmountToCheck % 10 != 0){
		std::cin.clear();
		std::cin.ignore(100,'\n');
		std::cout<<"Enter a valid bet"<<std::endl;
		checkBetAmountModTen(newBetAmountToCheck);
	} else {
		return newBetAmountToCheck;
	}
}

void PlayerHands::playerBet(){
	std::cout<<"Enter in amount to bet, must be multiple of 10"<<std::endl;
	newBetAmount = checkBetAmountModTen(newBetAmount);


	bets.betChips(newBetAmount);
	bets.printChipCount();
}


void PlayerHands::inGameOptions(){
	std::cout<<"1. Hit!\n2. Stand!"<<std::endl;
	int userChoice;
	std::cin>>userChoice;
	switch (userChoice){
	case 1:
		playerHit();
		userChoice = 0;
		break;
	case 2: 
		PlayerStand(true);
		userChoice = 0;
		break;
	}
}
//TODO: change this to bool. true for player, false for dealer
void PlayerHands::playerHit(){
	
	myDeck.dealCard(playerHandValue);
	playerHandValue += myDeck.getHandValue();
	std::cout<<" Count: "<< playerHandValue<<std::endl;

	switch (checkHandValue(playerHandValue)){
	case 0:
		break;
	case 1:
		std::cout<<"BlackJack!"<<std::endl;
		blackJackState = true;
		playerTurn = false;
		break;
	case 2:
		std::cout<<"Busted!"<<std::endl;
		bustedState = true;
		playerTurn = false;
		break;
	}
}

int PlayerHands::checkHandValue(short playerHandValue) {
	if (playerHandValue == 21){
		return 1;
	} else if (playerHandValue > 21){
		return 2;
	}
	return 0;
}

void PlayerHands::PlayerStand(bool player){
	if(player == true){
		std::cout<<"Stand!"<<std::endl;
	}
	playerTurn = false;
}

int PlayerHands::getPlayerHandValue(){
	return playerHandValue;
}

void PlayerHands::handleBets(int betType){
	switch(betType){
	case 1:
		bets.winBet();
		break;
	case 2:
		//Bet lost
		break;
	case 3:
		bets.winBlackJack();
		break;
	case 4:
		bets.betPush();
		break;
	}
	bets.printChipCount();
}

void PlayerHands::resetFlagVariables(){
	myDeck.shuffleDeck();
	myDeck.resetPointerToDeck();
	myDeck.setHandValue(0);
	playerHandValue = 0;
	newBetAmount = 10;
	playerTurn = true;
	bustedState = false;
	blackJackState = false;
}

int PlayerHands::getPlayerChipCount(){
	return bets.getChipCount();
}

bool PlayerHands::getBlackJackState(){
	return blackJackState;
}

bool PlayerHands::getBustedState(){
	return bustedState;
}

bool PlayerHands::getPlayerTurn(){
	return playerTurn;
}

PlayerHands::~PlayerHands(void){
}