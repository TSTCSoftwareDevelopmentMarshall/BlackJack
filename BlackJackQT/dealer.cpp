#include "dealer.h"
#include "player.h"


dealer::dealer()
{

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


