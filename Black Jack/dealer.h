#pragma once

#include "hand.h"
class dealer :public player
{
public:

	dealer();
	~dealer();
	bool soft17();   //checks wheather dealer has to stay when he hits 17 and changes a value of stay member variable



private:

	Hand mDHand;
	bool mStay = false;
};