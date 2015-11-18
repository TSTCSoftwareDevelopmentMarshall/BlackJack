#include "deck.h"
#include <algorithm>
using namespace std;


card deck::getFirstCard()
{
	return shoe.front();
}

card deck::getSecondCard()
{
	return shoe[1];
}
int deck::shuffle()
{
	random_shuffle(shoe.begin(), shoe.end());
	return 0;
}
int deck::initialize(int amntOfDecks)
{
	int num = 0;
	char symb;
	int num_of_decks = 0;
	//shoe.resize(amntOfDecks * 52);
	while (num_of_decks < amntOfDecks)
	{
				while (num < 4)
				{
					switch (num)
					{
					case 0:
						symb = 'C';
						break;
					case 1:
						symb = 'S';
						break;
					case 2:
						symb = 'H';
						break;
					case 3:
						symb = 'D';
						break;
					default:
						break;
				}// end of switch

					int card_num = 2;
					while (card_num < 10)
					{
			
						card cards((char)card_num, symb);
						shoe.push_back(cards);
						card_num = card_num + 1;
					}

					card cards('K', symb);
					shoe.push_back(cards);
				    cards.reInitializeCard('Q', symb);
					shoe.push_back(cards);
					cards.reInitializeCard('J', symb);
					shoe.push_back(cards);

					num = num + 1;
				}//end of while loop


			num_of_decks = num_of_decks + 1;
	} //end of external while loop
	shuffle();
	return 0;
}
deck::deck(int amn_of_decks)
{
	initialize(amn_of_decks);
}
card deck::giveCard()
{
	card cards;
	cards = shoe.back();
	shoe.pop_back();
	return cards;
}
deck::~deck()
{
}
