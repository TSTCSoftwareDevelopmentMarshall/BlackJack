#include "player.h"
#include <QInputDialog>

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
    //not nice - temporary desicion
    QInputDialog * dialog = new QInputDialog();
    dialog->setOptions(QInputDialog:: NoButtons);
    mBalance = dialog->getDouble(NULL, "Get Total Balance", "Amount: ", 10, 10, 100000, 10);

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
    // mCurrentBet = MainWindow::ui->doubleSpinBox->value();
    //mBalance = mBalance - bet;
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

