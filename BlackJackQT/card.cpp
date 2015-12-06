#include "card.h"
using namespace std;

Card::Card(SUITS suit, QString image, int value)
{
	mCardSuit = suit;
	mCardImage = image;
	mCardValue = value;
}


int Card::getCardValue()
{
	return mCardValue;
}

void Card::setCardValue(int value)
{
	mCardValue = value;
}

Card::SUITS operator++(Card::SUITS &cs, int)
{
	return cs = static_cast<Card::SUITS>(cs + 1);
}

QString Card::getCardImage() {
    return mCardImage;
}
