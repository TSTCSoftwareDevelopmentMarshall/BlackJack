#include "game.h"


bool game::check17()
{
    // returns true if dealer should take more cards, otherwise returns false

    bool check = true;
    if (mDealer.mHand.getTotVal() >= 17)
    {
        check = false;
    }
    return check;
}
game::game() {
    //set up game here
    mDealer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.addCard(mDeck.giveCard());
    mDealer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.addCard(mDeck.giveCard());
}
bool game::checkKenny()
{
    //returns true if player wins backdoor Kenny
    //given only to the player, right?

    bool result = false;

    if ((mPlayer.mHand.getFirstCard().getCardValue() == 10) && (mPlayer.mHand.getSecondCard().getCardValue() == 11))
    {
        result = true;
    }
    return result;

}

bool game::checkDefeat()
{
    //returns true if the limit has not been hit, returns false if user lost.
    bool check = true;
    if (mPlayer.mHand.getTotVal() > 21)
    {
        check = false;
    }
    return check;

}

double game::checkVictory()
{

     if ((mPlayer.mHand.getTotVal() == 21) && (mDealer.mHand.getTotVal() == 21))
    {
        return 1;
    }
    else if ((mPlayer.mHand.getTotVal() != 21) && (mPlayer.mHand.getTotVal() > mDealer.mHand.getTotVal()))
    {
        return 1;
    }
    else if ((mPlayer.mHand.getTotVal() == 21) && (mDealer.mHand.getTotVal() != 21))
    {
        return 1.5;

    }
    else if ((mPlayer.mHand.getTotVal() != 21) && (mPlayer.mHand.getTotVal()< mDealer.mHand.getTotVal()))
    {
        return -1;
    }
    else if (mPlayer.mHand.getTotVal() == mDealer.mHand.getTotVal())
    {
        return 0;
    }
}


void game::deal() {
    mDealer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.addCard(mDeck.giveCard());
    mDealer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.addCard(mDeck.giveCard());
}




