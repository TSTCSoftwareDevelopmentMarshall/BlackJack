#pragma once
#include <string>
#include "hand.h"
using namespace std;

class player
{
public:
	bool checkBackdoorKenny(); 
	int initializePlayer(); 
	bool checkVictory( player& ) ;
	player(double, string );  
	~player();
	void makeBet(double);  
	double getBalance();  
	void declareVictory(double);  // need to know how much should user gain from a victory
	void declareDefeat(double loss); 
	int getTotalVal(); 
	void pushBet(); // return bet money without gain or loss
private:
	string name; 
	int victories;
	int lost;
	double balance;
	hand userHand;
	double currentBet;
	void addWin();
};
