#pragma once
#include <vector>
#include "card.h"
using namespace std;
class deck
{
public:
	int shuffle();
	int initialize(int);
	card giveCard(); // gives a random card and deletes it from the deck
	deck(int);
	~deck();
	vector<card> shoe;
};

