#include "dealer.h"

card dealer::getTopCard()
{
	return dealersHand.getLastCard();
}

dealer::dealer()
{
	 stay = false;
}

void dealer::soft17()
{
	int total = 0;
	total = dealersHand.getTotVal();
	if (total >= 17)
	{
		stay = true;
	}
}
dealer::~dealer()
{
}
