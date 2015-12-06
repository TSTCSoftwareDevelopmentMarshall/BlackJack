#include "game.h"
#include "player.h"

#include <iostream>
using namespace std;

game::game(double balance, string name)
{
	player mNewPlayer(balance, name);

}
card game::getFirstCard()
{
	return shoe->getFirstCard();
}



game::~game()
{
	delete shoe;
}

bool game::checkBackdoorKenny()
{
	bool victory = false;
	card fcard, scard;

	fcard = newPlayer.getFCard();
	scard = newPlayer.getSCard();
	if (fcard.getValue() == 10 && scard.getValue() == 11)
	{
		cout << "\n\n";
		cout << "You pulled a Backdoor Kenny!\n" << endl;
		cout << "Win an additional 1:4 payout\n" << endl;

		declareVictory(0.25);
		victory = true;
	}
	return victory;

}
void game::pushBet()
{
	newPlayer.pushBet();
}
//void game:: declareVictory(double percentage)
//{
//	newPlayer.addVictoryCount();
//	newPlayer.addWin(percentage);
//	cout << "Congradulations!" << endl;
//	cout << "You won!" << endl;
//	cout << "Winnings multiplier: " << newPlayer.getBet() + (newPlayer.getBet() * percentage )<< endl;
//	cout << "Your total balance: " << newPlayer.getBalance() << endl;
//	newPlayer.initializeBet();
//}
void game::checkVictory()
{

	if (mNewPlayer)
	{


	}
	else if ((mNewPlayer.getTotalVal() == 21) && (mNewDealer.getTotalVal() == 21))
	{

		cout << "The Dealer and you both got Blackjack." << endl;
		cout << "Push in your favor at 1:1 payout!" << endl;
		mNewPlayer.victory(1);
	}
	else if ((mNewPlayer.getTotalVal() != 21) && (mNewPlayer.getTotalVal() > mNewDealer.getTotalVal()))
	{
		cout << "You won! ." << endl;
		cout << "Push in your favor at 1:1 payout!" << endl;
		mNewPlayer.victory(1);
	}
	else if ((mNewPlayer.getTotalVal() == 21) && (mNewDealer.getTotalVal() != 21))
	{
		cout << "Blackjack! You win a 3:2 payout." << endl;
		mNewPlayer.victory(1.5);
	}
	else if ((mNewPlayer.getTotalVal() != 21) && (mNewPlayer.getTotalVal()< mNewDealer.getTotalVal()))
	{
		cout << "Unfortunately, you lost." << endl;
		mNewPlayer.defeat();
	}
	else if (mNewPlayer.getTotalVal() == mNewDealer.getTotalVal())
	{

		cout << "Push in the Dealer's favor. 0:1 payout." << endl;
		mNewPlayer.push();
	}
}
//void game:: declareDefeat()
//{
//	newPlayer.addLostCount();
//	newPlayer.initializeBet();
//	cout << "You lost." << endl;
//	cout << "Your total balance: " << newPlayer.getBalance() << endl;
//}
