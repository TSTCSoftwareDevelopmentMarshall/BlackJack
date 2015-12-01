#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;
class Card
{
public:

	enum SUITS 
	{ 
		SPADE,
		HEART, 
		DIAMOND, 
		CLUB 
	};

	enum CARD_VALUES
	{
		ACE_LOW = 1, TWO, THREE, FOUR, FIVE,
		SIX, SEVEN, EIGHT, NINE, TEN, JACK=10,
		QUEEN=10, KING=10, ACE_HIGH
	};

	friend Card::SUITS operator++(Card::SUITS &cs, int);
	Card::Card(SUITS suit, string image, int value);
	int getCardValue();
	void setCardValue(int value);
	


private:

	string mCardImage;
	SUITS mCardSuit;
	int mCardValue;
};
#endif

