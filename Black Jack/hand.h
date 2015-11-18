#pragma once
#include <vector>
#include "card.h"
using namespace std;
class hand
{
public:
	hand();
	~hand();
	int calcTotalValue();
	int getTotVal();
	card getFirstCard();
	card getSecondCard();
	int addCard(card ); 
	int initializeHand();
	int showCards(); // how are we going to do this? 
private:
	vector<card> userCards;
	int num_of_cards;
	int totalVal;
};

