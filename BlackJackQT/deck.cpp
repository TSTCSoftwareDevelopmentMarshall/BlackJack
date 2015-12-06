#include "deck.h"
#include <algorithm>
#include <iostream>
using namespace std;

Deck::Deck()
{
    mDeck.empty();
    QString image = "";
    Card::CARD_VALUES value;
    int intValue;
	for (Card::SUITS cs = Card::SPADE; cs <= Card::CLUB; cs++)
		for (int i = 1; i <= 13; ++i) {
			switch (cs)
			{
			case Card::SPADE:
				//Spades
				switch (i)
				{
				case 1:
					//Ace
                    value = Card::ACE_LOW;
                    image = ":/CardImages/SpadesAce";
					break;
				case 2:
					//Two
					value = Card::TWO;
                    image = ":/CardImages/SpadesTwo";
					break;
				case 3:
					//Three
					value = Card::THREE;
                    image = ":/CardImages/SpadesThree";
					break;
				case 4:
					//Four
					value = Card::FOUR;
                    image = ":/CardImages/SpadesFour";
					break;
				case 5:
					//Five
					value = Card::FIVE;
                    image = ":/CardImages/SpadesFive";
					break;
				case 6:
					//Six
					value = Card::SIX;
                    image = ":/CardImages/SpadesSix";
					break;
				case 7:
					//Seven
					value = Card::SEVEN;
                    image = ":/CardImages/SpadesSeven";
					break;
				case 8:
					//Eight
					value = Card::EIGHT;
                    image = ":/CardImages/SpadesEight";
					break;
				case 9:
					//Nine
					value = Card::NINE;
                    image = ":/CardImages/SpadesNine";
					break;
				case 10:
					//Ten
					value = Card::TEN;
                    image = ":/CardImages/SpadesTen";
					break;
				case 11:
					//Jack
					value = Card::JACK;
                    image = ":/CardImages/SpadesJack";
					break;
				case 12:
					//Queen
					value = Card::QUEEN;
                    image = ":/CardImages/SpadesQueen";
					break;
				case 13:
					//King
					value = Card::KING;
                    image = ":/CardImages/SpadesKing";
					break;
				default:
					cout << "Ranks out of range in Deck::Deck()" << endl;
				}
				break;
			case Card::HEART:
				//Hearts
                switch (i)
                {
                case 1:
                    //Ace
                    value = Card::ACE_LOW;
                    image = ":/CardImages/HeartsAce";
                    break;
                case 2:
                    //Two
                    value = Card::TWO;
                    image = ":/CardImages/HeartsTwo";
                    break;
                case 3:
                    //Three
                    value = Card::THREE;
                    image = ":/CardImages/HeartsThree";
                    break;
                case 4:
                    //Four
                    value = Card::FOUR;
                    image = ":/CardImages/HeartsFour";
                    break;
                case 5:
                    //Five
                    value = Card::FIVE;
                    image = ":/CardImages/HeartsFive";
                    break;
                case 6:
                    //Six
                    value = Card::SIX;
                    image = ":/CardImages/HeartsSix";
                    break;
                case 7:
                    //Seven
                    value = Card::SEVEN;
                    image = ":/CardImages/HeartsSeven";
                    break;
                case 8:
                    //Eight
                    value = Card::EIGHT;
                    image = ":/CardImages/HeartsEight";
                    break;
                case 9:
                    //Nine
                    value = Card::NINE;
                    image = ":/CardImages/HeartsNine";
                    break;
                case 10:
                    //Ten
                    value = Card::TEN;
                    image = ":/CardImages/HeartsTen";
                    break;
                case 11:
                    //Jack
                    value = Card::JACK;
                    image = ":/CardImages/HeartsJack";
                    break;
                case 12:
                    //Queen
                    value = Card::QUEEN;
                    image = ":/CardImages/HeartsQueen";
                    break;
                case 13:
                    //King
                    value = Card::KING;
                    image = ":/CardImages/HeartsKing";
                    break;
                default:
                    cout << "Ranks out of range in Deck::Deck()" << endl;
                }
				break;
			case Card::DIAMOND:
				//Diamonds
                switch (i)
                {
                case 1:
                    //Ace
                    value = Card::ACE_LOW;
                    image = ":/CardImages/DiamondsAce";
                    break;
                case 2:
                    //Two
                    value = Card::TWO;
                    image = ":/CardImages/DiamondsTwo";
                    break;
                case 3:
                    //Three
                    value = Card::THREE;
                    image = ":/CardImages/DiamondsThree";
                    break;
                case 4:
                    //Four
                    value = Card::FOUR;
                    image = ":/CardImages/DiamondsFour";
                    break;
                case 5:
                    //Five
                    value = Card::FIVE;
                    image = ":/CardImages/DiamondsFive";
                    break;
                case 6:
                    //Six
                    value = Card::SIX;
                    image = ":/CardImages/DiamondsSix";
                    break;
                case 7:
                    //Seven
                    value = Card::SEVEN;
                    image = ":/CardImages/DiamondsSeven";
                    break;
                case 8:
                    //Eight
                    value = Card::EIGHT;
                    image = ":/CardImages/DiamondsEight";
                    break;
                case 9:
                    //Nine
                    value = Card::NINE;
                    image = ":/CardImages/DiamondsNine";
                    break;
                case 10:
                    //Ten
                    value = Card::TEN;
                    image = ":/CardImages/DiamondsTen";
                    break;
                case 11:
                    //Jack
                    value = Card::JACK;
                    image = ":/CardImages/DiamondsJack";
                    break;
                case 12:
                    //Queen
                    value = Card::QUEEN;
                    image = ":/CardImages/DiamondsQueen";
                    break;
                case 13:
                    //King
                    value = Card::KING;
                    image = ":/CardImages/DiamondsKing";
                    break;
                default:
                    cout << "Ranks out of range in Deck::Deck()" << endl;
                }
				break;
			case Card::CLUB:
				//Clubs
                switch (i)
                {
                case 1:
                    //Ace
                    value = Card::ACE_LOW;
                    image = ":/CardImages/ClubsAce";
                    break;
                case 2:
                    //Two
                    value = Card::TWO;
                    image = ":/CardImages/ClubsTwo";
                    break;
                case 3:
                    //Three
                    value = Card::THREE;
                    image = ":/CardImages/ClubsThree";
                    break;
                case 4:
                    //Four
                    value = Card::FOUR;
                    image = ":/CardImages/ClubsFour";
                    break;
                case 5:
                    //Five
                    value = Card::FIVE;
                    image = ":/CardImages/ClubsFive";
                    break;
                case 6:
                    //Six
                    value = Card::SIX;
                    image = ":/CardImages/ClubsSix";
                    break;
                case 7:
                    //Seven
                    value = Card::SEVEN;
                    image = ":/CardImages/ClubsSeven";
                    break;
                case 8:
                    //Eight
                    value = Card::EIGHT;
                    image = ":/CardImages/ClubsEight";
                    break;
                case 9:
                    //Nine
                    value = Card::NINE;
                    image = ":/CardImages/ClubsNine";
                    break;
                case 10:
                    //Ten
                    value = Card::TEN;
                    image = ":/CardImages/ClubsTen";
                    break;
                case 11:
                    //Jack
                    value = Card::JACK;
                    image = ":/CardImages/ClubsJack";
                    break;
                case 12:
                    //Queen
                    value = Card::QUEEN;
                    image = ":/CardImages/ClubsQueen";
                    break;
                case 13:
                    //King
                    value = Card::KING;
                    image = ":/CardImages/ClubsKing";
                    break;
                default:
                    cout << "Ranks out of range in Deck::Deck()" << endl;
                }
				break;
			default:
				cout << "Suits out of range in Deck::Deck()" << endl;

			}
            intValue = static_cast<int>(value);
            mDeck.push_back(Card(cs, image, intValue));
		}
	shuffle();
}

Card Deck::getFirstCard()
{
	return mDeck.front();
}

Card Deck::getSecondCard()
{
	return mDeck[1];
}
void Deck::shuffle()
{
	random_shuffle(mDeck.begin(), mDeck.end());
}

Card Deck::giveCard()
{
	Card card = mDeck.back();
	mDeck.pop_back();
	return card;
}

