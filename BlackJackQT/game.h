#pragma once
#include "player.h"
#include "dealer.h"
#include "deck.h"
#include "card.h"

class game
{
public:
	game(double, string);
	void declareDefeat();
	void checkVictory();
	void pushBet(); // return bet money without gain or loss
	//give card to 
	bool checkBackdoorKenny();
	~game();
	card getFirstCard(); //  get first card of the deck


private:
	dealer mDealer;
	player mPlayer;
	Deck mDeck;

};

