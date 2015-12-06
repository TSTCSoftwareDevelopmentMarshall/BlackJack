#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "dealer.h"
#include "deck.h"
#include "card.h"

class game
{
public:
    game();

    dealer mDealer;
    player mPlayer;
    Deck mDeck;

};
#endif
