#include "player.h"
#include <iostream>
#include <string>
using namespace std;


player::player()
{
	mVictories = 0;
	mLost = 0;
	mCurrentBet = 0;
	setBalance(0.0);
}

int  player::getTotalVal()
{
	//have doubts about this one
	return mHand.getTotVal();

}

void player::setBalance(double balance)
{
	mBalance = balance;
}

double player::getBalance()
{
	return mBalance;
}
double player::getBet()
{
	return mCurrentBet;
}
void player::setBet(double bet)
{
	mCurrentBet = bet;
	mBalance = mBalance - bet;
}



void player::victory(double percentage)
{
	mBalance = mBalance + mCurrentBet + (mCurrentBet * percentage);
	mVictories++;
	mCurrentBet = 0;
}
void player::defeat()
{
	mCurrentBet = 0;
	mLost++;
}
void player::push()
{
	mBalance = mBalance + mCurrentBet;
	mCurrentBet = 0;
}

