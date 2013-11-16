#include <iostream>
#include "PlayerHands.h"
#include "DeckOfCards.h"
#include "Betting.h"

DeckOfCards myDeck;
Betting bets;

PlayerHands::PlayerHands(void){
	myDeck.handValue = 0;
	playerHandValue = 0;
	playerTurn = 0;
	busted = 0;
	blackJack = 0;
}

void PlayerHands::playerBet(){
	bets.betChips();
	bets.printChipCount();
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
	playerHandValue += myDeck.handValue;
	std::cout<<" Count: "<< playerHandValue<<std::endl;

	switch (checkHandValue(playerHandValue)){
	case 0:
		break;
	case 1:
		std::cout<<"BlackJack!"<<std::endl;
		blackJack = 1;
		playerTurn = 1;
	case 2:
		std::cout<<"Busted!"<<std::endl;
		busted = 1;
		playerTurn = 1;
		break;
	}
}

int PlayerHands::checkHandValue(short playerHandValue) {
	if (playerHandValue > 21){
		return 2;
	} else if (playerHandValue == 21){
		return 1;
	}
	return 0;
}

void PlayerHands::PlayerStand(){
	std::cout<<"Stand!"<<std::endl;
	playerTurn = 1;
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


PlayerHands::~PlayerHands(void){
}
