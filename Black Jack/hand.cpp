#include "hand.h"
using namespace std;


int hand:: calcTotalValue()
{
	int num = 0;
	int total = 0;
	while ( num != userCards.size() )
	{
		total =total + userCards[num].getValue();
	}

	return 0;
}
int hand:: getTotVal()
{
	calcTotalValue();
	return totalVal;
}
hand::hand()
{
}
int hand::initializeHand()
{
	userCards.clear();
	return 0;
}
int hand::addCard(card newCard)
{
	
	userCards.push_back(newCard);
	return 0;
}
hand::~hand()
{
}
int hand::showCards()
{
	return 0;
}
card hand::getFirstCard()
{
	return userCards.front();
}
card hand::getSecondCard()
{

	return userCards[1];
}
card hand::getLastCard()
{
	return userCards.back();
}
