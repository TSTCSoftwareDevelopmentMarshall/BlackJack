#pragma once
#include <vector>
#include "card.h"
using namespace std;
class deck
{
public:
	int shuffle();
	int initialize(int); // when deck is initialized it is automatically shuffles need to specify how many shoes is going to be used (every shoe has 52 cards.)
	card giveCard(); // gives a random card and deletes it from the deck
	card getFirstCard(); //return a first card from the deck.
	card getSecondCard(); // returns a second card from the deck
	deck(int);
	~deck();
	vector<card> shoe;
};

