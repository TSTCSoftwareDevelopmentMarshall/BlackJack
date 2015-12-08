#include "dealer.h"


dealer::dealer()
{
    mBalance = 999999999999999999;
}

bool dealer::soft17()
{
	bool stay = false;
	if (mHand.getTotVal() >= 17)
	{
		stay = true;
	}
	return stay;
}


