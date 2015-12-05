#pragma once
#include "player.h"
#include "dealer.h"
#include "deck.h"
#include "card.h"
class game
{
public:

	void declareDefeat();
	void checkVictory();
	void pushBet(); // return bet money without gain or loss
	//give card to 
	bool checkBackdoorKenny();
	game(double, string);
	~game();
	card getFirstCard(); //  get first card of the deck


private:
	dealer mNewDealer;
	player mNewPlayer;
	Deck mDeck;

};

