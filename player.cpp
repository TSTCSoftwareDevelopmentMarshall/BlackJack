#include "player.h"
#include <QInputDialog>

using namespace std;


player::player()
{
	mVictories = 0;
	mLost = 0;
    mCurrentBet = 0;
    mBalance = 99999999999999; //Default for dealer
}

int  player::getTotalVal()
{
	//have doubts about this one
	return mHand.getTotVal();

}

void player::setBalance()
{
    //not nice - temporary desicion
    QInputDialog * dialog = new QInputDialog();
    dialog->setOptions(QInputDialog:: NoButtons);
    mBalance = dialog->getDouble(NULL, "Get Total Balance", "Amount: ", 10, 10, 100000, 2);

}

double player::getBalance()
{
	return mBalance;
}
double player::getBet()
{
	return mCurrentBet;
}
void player::setBet()
{
    QInputDialog * dialog = new QInputDialog();
    dialog->setOptions(QInputDialog:: NoButtons);
    mCurrentBet = dialog->getDouble(NULL, "Get Total Bet", "Amount: ", 10, 10, 100000, 2);
}



double player::victory(double percentage)
{
    double prize =0;
    prize = mCurrentBet + (mCurrentBet * percentage);
    mBalance = mBalance + prize;
	mVictories++;

	mCurrentBet = 0;
    return  prize;
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

