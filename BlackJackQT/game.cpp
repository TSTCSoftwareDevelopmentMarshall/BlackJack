#include "game.h"

game::game() {
    //set up game here
    mDealer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.addCard(mDeck.giveCard());
    mDealer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.addCard(mDeck.giveCard());
}
