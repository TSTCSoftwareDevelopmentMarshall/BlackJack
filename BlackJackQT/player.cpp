#include "player.h"

using namespace std;


player::player()
{
	mVictories = 0;
	mLost = 0;
    mCurrentBet = 0;
    mBalance = 0;
}

int  player::getTotalVal()
{
	//have doubts about this one
	return mHand.getTotVal();

}

void player::setBalance()
{
    //Set balance with label
}

double player::getBalance()
{
	return mBalance;
}
double player::getBet()
{
	return mCurrentBet;
}
void player::setBet(double value)
{
    mCurrentBet = value;
    //mBalance = mBalance - bet;
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

