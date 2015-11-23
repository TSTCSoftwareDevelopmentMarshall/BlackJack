#pragma once
#include <string>
#include "hand.h"
using namespace std;

class player
{
public:
	int initializePlayer(); 
	player(double, string );  
	~player();
	player();
	void makeBet(double);  
	double getBalance();  
	int getTotalVal(); 
	void addWin(double); 
	double getBet();
	void initializeBet();
	card getFCard();
	card getSCard();
	void addVictoryCount();
	void addLostCount();
	void pushBet();
	//show all hand - still need to do
private:
	string name; 
	int victories;
	int lost;
	double balance;
	hand userHand;
	double currentBet;

};
