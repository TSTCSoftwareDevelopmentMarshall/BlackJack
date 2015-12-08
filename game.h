#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "dealer.h"
#include "deck.h"
#include "card.h"

class game
{

public:
    bool check17();
    bool checkDefeat();
    double checkVictory();
    bool checkKenny();
    void deal();
    game();
    dealer mDealer;
    player mPlayer;
    Deck mDeck;

};
#endif
