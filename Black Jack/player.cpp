#include "player.h"
#include <iostream>
#include <string>
using namespace std;

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
bool player::checkBackdoorKenny()
{
	bool victory = false;
	card fcard, scard;
	fcard = userHand.getFirstCard();
	scard = userHand.getSecondCard();
	if (fcard.getValue() == 10 && scard.getValue() == 11)
	{
		cout << "\n\n";
		cout << "You pulled a Backdoor Kenny!\n" << endl;
		cout << "Win an additional 1:4 payout\n" << endl;

		declareVictory(.25);
		victory = true;
	}
	return victory;
	
	
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
void player::declareVictory(double win)
{
	victories = victories + 1;
	balance = balance + currentBet + (currentBet * win );
	cout << "Winnings multiplier: " << currentBet * win << endl;
	currentBet = 0;
}
void player:: declareDefeat(double loss)
{
	lost = lost + 1;
	currentBet = 0;
	
}
bool player::checkVictory (player& dealer) 
{
	if ((userHand.getTotVal() == 21) && (dealer.getTotalVal() == 21))
	{
		
		cout << "The Dealer and you both got Blackjack." << endl;
		cout<<"Push in your favor at 1:1 payout!" << endl;
		declareVictory(1);
		dealer.declareVictory(1);
	}
	else if ((userHand.getTotVal() != 21) && (userHand.getTotVal() > dealer.getTotalVal()))
	{
		cout << "You won! ." << endl;
		cout << "Push in your favor at 1:1 payout!" << endl;
		declareVictory(1);
		dealer.declareDefeat(1);
	}
	else if ((userHand.getTotVal() == 21) && (dealer.getTotalVal() != 21))
	{
		cout << "Blackjack! You win a 3:2 payout." << endl;
		declareVictory(1.5);
		dealer.declareDefeat(1.5);

	}
	else if ( (userHand.getTotVal() != 21) &&( userHand.getTotVal() < dealer.getTotalVal()))
	{
		declareDefeat(1);
		declareVictory(1);

	}
	else if (userHand.getTotVal() == dealer.getTotalVal())
	{
		cout << "\n";
	   cout << "Push in the Dealer's favor. 0:1 payout." << endl;
	   pushBet();
	   dealer.pushBet();
	}
	return 0;
}
void player::pushBet()
{
	balance = balance + currentBet;
	currentBet = 0;

}

int  player:: getTotalVal()
{
	return userHand.getTotVal();

}