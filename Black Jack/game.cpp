#include "stdafx.h"
#include "game.h"
#include "player.h"
#include "dealer.h"
#include <iostream>
using namespace std;
game::game(double balance, string name) 
{
	shoe = new deck(askUserNumOfDecks());
}
card game:: getFirstCard()
{
	return shoe->getFirstCard();
}
int game::askUserNumOfDecks()
{  int num;
	bool stop = false;
	while ( stop ==false)
	{
		try
		{
		
		cout << "Please enter amount of decks you want to use in the game." << endl;
		cin >> num;
		if (!cin)
		{
			throw 0;
		}
		stop = true;
		}
		catch (int)
		{
			cout << "Incorrect input. Please, try again." << endl;
		}//end catch
	}//end of while loop
	return num;
}
game::~game()
{
	delete shoe;
}
bool game:: checkBackdoorKenny()
{
		bool victory = false;
		card fcard, scard;
	
		fcard = 	newPlayer.getFCard();
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
void game:: pushBet()
{
	newPlayer.pushBet();
}
void game:: declareVictory(double percentage)
{
	newPlayer.addVictoryCount();
	newPlayer.addWin(percentage);
	cout << "Congradulations!" << endl;
	cout << "You won!" << endl;
	cout << "Winnings multiplier: " << newPlayer.getBet() + (newPlayer.getBet() * percentage )<< endl;
	cout << "Your total balance: " << newPlayer.getBalance() << endl;
	newPlayer.initializeBet();
}
void game::checkVictory()
{
	if ((newPlayer.getTotalVal() == 21) && (newDealer.getTotalVal() == 21))
	{
		
		cout << "The Dealer and you both got Blackjack." << endl;
		cout<<"Push in your favor at 1:1 payout!" << endl;
		declareVictory(1);
		newDealer.addLostCount();
	}
	else if ((newPlayer.getTotalVal() != 21) && (newPlayer.getTotalVal() > newDealer.getTotalVal()))
	{
		cout << "You won! ." << endl;
		cout << "Push in your favor at 1:1 payout!" << endl;
		declareVictory(1);
		newDealer.addLostCount();
	}
	else if ((newPlayer.getTotalVal() == 21) && (newDealer.getTotalVal() != 21))
	{
		cout << "Blackjack! You win a 3:2 payout." << endl;
		declareVictory(1.5);
		newDealer.addLostCount();

	}
	else if ((newPlayer.getTotalVal() != 21) && (newPlayer.getTotalVal()< newDealer.getTotalVal()))
	{
		declareDefeat();
		newDealer.addVictoryCount();

	}
	else if (newPlayer.getTotalVal() == newDealer.getTotalVal())
	{
		cout << "\n";
	   cout << "Push in the Dealer's favor. 0:1 payout." << endl;
	   pushBet();
	}
}
void game:: declareDefeat()
{
	newPlayer.addLostCount();
	newPlayer.initializeBet();
	cout << "You lost." << endl;
	cout << "Your total balance: " << newPlayer.getBalance() << endl;
}

string game::askName() // ask user's name
{
	string name;
	cout << "Enter your name. " << endl;
	cin >> name;
	return name;
}
double game::askBalance()   // ask user about max balance
{
	double balance;
	bool stop = false;
	while (stop == false)
	{
		try
		{
			cout << "Enter your max balance. " << endl;
			cin >> balance;
			if (!cin)
			{
				throw 1;
			}
			cout << "Your balance is $" << balance << "." << endl;
			stop = true;
		}
		catch (int)
		{
			cout << "Incorrect input. Please try again." << endl;
		}
		return balance;
	}
}

	//void game::initializePlayer()
	//{
	//
	//
	//}