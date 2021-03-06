#ifndef HAND_H
#define HAND_H

#include <vector>
#include "card.h"
#include "QLabel"
class Hand
{
public:
	Hand();
	int getTotVal();
	Card getFirstCard();
	Card getSecondCard();
	void addCard(Card newCard);
	Card getLastCard(); // returns the last card (the most recent) from the hand
    void showCards(QLabel label); // still need to do
private:
	vector<Card> mHand;
	int mNumCards;
	int mTotalVal;
};
#endif

// need to change ace value somehow.
