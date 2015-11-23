#pragma once
#include "player.h"
#include "hand.h"
class dealer:public player
{
public:
	card getTopCard(); //returns the last card (the most recent) from the dealers hand
	dealer();
	bool getStayVal(); // returns true when dealer has to stay or false when dealer has to hit
	void showDHand(); 	//show dealers hand only the last card is really visible - same problem - still need to do
	~dealer();
	void soft17();   //checks wheather dealer has to stay when he hits 17 and changes a value of stay member variable
private:

	hand dealersHand;
	int loss, win;
	bool stay = false;
};