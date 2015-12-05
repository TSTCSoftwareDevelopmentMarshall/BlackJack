#pragma once
#include <string>
#include "hand.h"
using namespace std;

class player
{
public:

	player(double balance, string name);
	player(); //had to create a default constructor :( 
	~player();
	int getTotalVal();
	double getBalance();
	void setBet(double);
	double getBet();
	void victory(double percentage);
	void defeat();
	void push();

	

	//TODO:show cards functions 
	//TODO:show all hand 
private:
	string mName;
	int mVictories;
	int mLost;
	double mBalance;
	double mCurrentBet;
	Hand mHand;

};
