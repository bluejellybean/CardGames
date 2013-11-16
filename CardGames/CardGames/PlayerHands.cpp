#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"
#include "Betting.h"

DeckOfCards myDeck;
Betting bets;

PlayerHands::PlayerHands(void){
	resetFlagVariables();
}

void PlayerHands::playerBet(){
	bets.betChips();
	bets.printChipCount();
}

void PlayerHands::setPlayerHandValue(int newHandValue){
	playerHandValue = newHandValue;
}

void PlayerHands::inGameOptions(){

	int userChoice;
	std::cin>>userChoice;
	switch (userChoice){
	case 1:
		playerHit();
		userChoice = 0;
		break;
	case 2: 
		PlayerStand();
		userChoice = 0;
		break;
	}
}

void PlayerHands::playerHit(){
	myDeck.dealCard();
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

void PlayerHands::PlayerStand(){
	std::cout<<"Stand!"<<std::endl;
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
		bets.LooseBet();
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