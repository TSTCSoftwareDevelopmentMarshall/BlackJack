#include "deck.h"
#include <algorithm>
using namespace std;

Deck::Deck()
{
	/*TODO:Figure out a good way to add image and value into this function using QT reference file and CardValue enum*/
	string image;
	int value = 0;
	for (Card::SUITS cs = Card::SPADE; cs <= Card::CLUB; cs++)
		for (int i = 1; i <= 13; ++i)
			 mDeck.push_back(Card(cs, image, value));
	shuffle();
}

Card Deck::getFirstCard()
{
	return mDeck.front();
}

Card Deck::getSecondCard()
{
	return mDeck[1];
}
void Deck::shuffle()
{
	random_shuffle(mDeck.begin(), mDeck.end());
}

Card Deck::giveCard()
{
	Card card = mDeck.back();
	mDeck.pop_back();
	return card;
}

