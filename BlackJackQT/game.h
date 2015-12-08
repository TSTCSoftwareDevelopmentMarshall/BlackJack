#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "dealer.h"
#include "deck.h"
#include "card.h"
#include "QDoubleSpinBox"
#include "QLabel"

class game
{
public:
    game();
    int checkStatus(player thePlayer);
    void toggleBet(QDoubleSpinBox *spinbox);
    void hit(QLabel *label);
    dealer mDealer;
    player mPlayer;
    Deck mDeck;
    bool mCanBet;
    bool mGameOver;



};
#endif
