#include "player.h"
#include <iostream>
#include <string>
using namespace std;

card player::getFCard()
{
	return userHand.getFirstCard();
}
card player:: getSCard()
{
	return userHand.getSecondCard();
}

player::player()
{}
player::player(double userBalance, string userName = "Player")
{
	if (userBalance < 0)
	{
		balance = userBalance;
	}
	else
	{
		balance = 100;
	}
	
	name = userName;

}
void player::addVictoryCount()
{
	victories = victories + 1;
}
double player:: getBet()
{
	return currentBet;
}
void player::addLostCount()
{
	lost = lost + 1;
}
void player::addWin(double percentage)
{
	balance = balance + (balance * percentage);

}
int player::initializePlayer()
{
	userHand.initializeHand(); 
	victories = 0;
	lost = 0;
	name = "";
	return 0;
}
player::~player()
{
}
void player:: initializeBet()
{
	currentBet = 0;
}
void player::makeBet(double bet)
{
	if (bet < balance)
	{
		currentBet = bet;
		balance = balance - bet;
	}
}
double player::getBalance()
{
	return balance;
}

void player:: pushBet()
{
	balance = balance + currentBet;
	currentBet = 0;
}

int  player:: getTotalVal()
{
	return userHand.getTotVal();

}