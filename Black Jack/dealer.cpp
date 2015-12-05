#include "dealer.h"
#include "player.h"



dealer::dealer() : player()
{
	mStay = false;
}

bool dealer::soft17()
{
	if (mDHand.getTotVal >= 17)
	{
		mStay = true;
	}
	return mStay;
}

dealer::~dealer()
{
}
