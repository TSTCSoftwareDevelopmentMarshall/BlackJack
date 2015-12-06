#ifndef DEALER_H
#define DEALER_H

#include "player.h"

class dealer : public player
{
public:
	dealer();
	bool soft17();   //checks wheather dealer has to stay when he hits 17 and changes a value of stay member variable

};
#endif
