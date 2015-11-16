#include "card.h"
#include <cctype>
using namespace std;

int card::getValue()
{
	return value;
}
int card::assignValue( int val)
{
	value = val;

}
int card::setValue()
{

if (symb >= '2' && symb <= '9')
	{
		value = (int)symb;
	}
	else if (symb == 'K' || symb == 'J' || symb == 'Q')
	{
		value = 10;
	}
	else
	{
		value = 11; // should it be 1 in some cases? 
	}
	return 0;
}

card::card(char symbol, char suits)
{
	symb = symbol;
	switch (suits)
	{
	case 'C':
	case 'c':
		suit = club;
		break;
	case 'S':
	case 's':
		suit = spade;
		break;
	case 'H':
	case 'h':
		suit = heart;
		break;
	case 'D' :
	case 'd':
		suit = diamond;
		break;
	default:
		break;
	}
	setValue();
}
card::card()
{


}

card::~card()
{
}
