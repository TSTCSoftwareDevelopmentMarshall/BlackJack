#include "player.h"


player::player()
{
}
int player::checkVictory()
{
	int score;
	score = userHand.getTotVal();
	return score;
}
int player::initializePlayer()
{
	userHand.initializeHand(); 
	victories = 0;
	lost = 0;
	name = "";

}
player::~player()
{
}
