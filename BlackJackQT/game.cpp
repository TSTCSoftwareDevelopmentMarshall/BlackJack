#include "game.h"
#include <iostream>
using namespace std;


game::game() {
    //set up game here
    mCanBet = false;
    mGameOver = false;
    mDealer.mHand.addCard(mDeck.giveCard()); //Give dealer first card
    mPlayer.mHand.addCard(mDeck.giveCard()); //Give player first card
    mDealer.mHand.addCard(mDeck.giveCard()); //Give dealer second card
    mPlayer.mHand.addCard(mDeck.giveCard()); //Give player second card
    checkStatus(mPlayer);

}

void game::toggleBet(QDoubleSpinBox *spinbox) {
    if(mCanBet) {
        spinbox->setVisible(true);
    } else {
        spinbox->setVisible(false);
    }
}

void game::hit(QLabel *label) {
    mPlayer.mHand.addCard(mDeck.giveCard());
    mPlayer.mHand.getLastCard().showCard(label);
    label->setVisible(true);
    checkStatus(mPlayer);
}

int game::checkStatus(player thePlayer) {
    cout << thePlayer.mHand.getTotVal() << endl;
    if (thePlayer.mHand.getTotVal() < 21) {
        //They can still play
        return 0;
        cout << "You can still play..." << endl;
    } else if(thePlayer.mHand.getTotVal() == 21) {
        //They won
        mGameOver = true;
        return 1;
    } else {
        //They lost
        mGameOver = true;
        return 2;
    }
}
