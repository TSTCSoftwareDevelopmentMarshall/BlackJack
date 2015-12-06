#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "hand.h"
using namespace std;

class player
{
public:

	player();
	int getTotalVal();
	double getBalance();
	void setBalance(double balance);
	void setBet(double);
	double getBet();
	void victory(double percentage);
	void defeat();
	void push();

	

	//TODO:show cards functions 
	//TODO:show all hand 
protected:
	string mName;
	int mVictories;
	int mLost;
	double mBalance;
	double mCurrentBet;
	Hand mHand;

};
#endif
