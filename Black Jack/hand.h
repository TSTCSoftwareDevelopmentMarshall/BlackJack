#pragma once
#include <vector>
#include "card.h"
using namespace std;
class hand
{
public:
	hand();
	~hand();
	int getTotVal();
	card getFirstCard();
	card getSecondCard();
	int addCard(card ); 
	int initializeHand();
	card getLastCard(); // returns the last card (the most recent) from the hand
	int showCards(); // still need to do
private:
	int calcTotalValue();
	vector<card> userCards;
	int num_of_cards;
	int totalVal;
};

// need to change ace value somehow.