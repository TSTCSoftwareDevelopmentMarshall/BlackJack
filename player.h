#ifndef PLAYER_H
#define PLAYER_H

#include "hand.h"

class player
{

public:
    player();
	int getTotalVal();
	double getBalance();
    void setBalance();

    void setBet(double);

	double getBet();
    double victory(double percentage);
	void defeat();
	void push();
    Hand mHand;

	

	//TODO:show cards functions 
	//TODO:show all hand 
protected:
	int mVictories;
	int mLost;
	double mBalance;
	double mCurrentBet;


};
#endif
