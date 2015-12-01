#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
using namespace std;
class Deck
{
public:
	int SIZE_OF_DECK = 52;
	Deck();
	void shuffle();
	Card giveCard(); // gives a random card and deletes it from the deck
	Card getFirstCard(); //return a first card from the deck.
	Card getSecondCard(); // returns a second card from the deck
private:
	vector<Card> mDeck;
};
#endif
