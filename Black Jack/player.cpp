#include "player.h"
#include <iostream>
#include <string>
using namespace std;


player::player(double balance, string name = "Player") // good
{
	//need to implement checking of the balance value in QT
	mVictories = 0;
	mLost = 0;
	mCurrentBet = 0;
	mName = name;
	mBalance = balance;

}
int  player::getTotalVal()
{
	//have doubts about this one
	return mHand.getTotVal();

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
player::~player()
{
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








