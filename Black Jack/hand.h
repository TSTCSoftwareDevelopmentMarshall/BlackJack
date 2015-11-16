#pragma once
#include <vector>
#include "card.h"

class hand
{
public:
	hand();
	~hand();
	int calcTotalValue();
	int getTotVal();
	int addCard(card ); 
	int initializeHand();
	int showCards(); // how are we going to do this? 
private:
	vector<card> userCards;
	int num_of_cards;
	int totalVal;
};

