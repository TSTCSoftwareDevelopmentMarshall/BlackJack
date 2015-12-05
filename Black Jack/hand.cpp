#include "hand.h"
using namespace std;

Hand::Hand()
{
	mNumCards = 0;
	mTotalVal = 0;
	mHand.clear();
}

int Hand::getTotVal()
{
	return mTotalVal;
}

void Hand::addCard(Card newCard)
{
	mHand.push_back(newCard);
	mTotalVal += newCard.getCardValue;
	mNumCards++;
}

void Hand::showCards()
{
	//TODO:We need to figure out how we plan to do this.
}
Card Hand::getFirstCard()
{
	return mHand.front();
}
Card Hand::getSecondCard()
{
	return mHand[1];
}
Card Hand::getLastCard()
{
	return mHand.back();
}
