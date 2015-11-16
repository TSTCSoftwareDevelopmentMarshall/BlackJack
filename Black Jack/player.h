#pragma once
#include <string>
#include "hand.h"
using namespace std;

class player
{
public:
	int checkVictory();
	int initializePlayer(); 
	player();
	~player();

private:
	string name; 
	int victories;
	int lost;
	hand userHand;
};

