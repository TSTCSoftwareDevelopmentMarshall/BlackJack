#pragma once
#include "player.h"
#include "dealer.h"
#include "deck.h"
#include "card.h"
class game
{
public:
	void declareVictory(double);  // need to know how much should user gain from a victory
	void declareDefeat(); 
	void checkVictory();
	void pushBet(); // return bet money without gain or loss

	bool checkBackdoorKenny(); 
	
	game(double, string);
	~game();
	card getFirstCard(); //  get first card of the deck
	string askName();
	double askBalance();
	//void initializePlayer(); 
	int askUserNumOfDecks();     
	
	

private:
	dealer newDealer;
	player newPlayer;
	deck * shoe;

};

