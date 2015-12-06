#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "info.h"
#include "deck.h"
#include "card.h"
#include "game.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Set up view here
    hideLabels();
    myGame.toggleBet(ui->doubleSpinBox);
    myGame.mPlayer.mHand.getFirstCard().showCard(ui->imgLblCard7);
    myGame.mPlayer.mHand.getSecondCard().showCard(ui->imgLblCard8);
    myGame.mDealer.mHand.getFirstCard().showCard(ui->imgLblCard1);
    myGame.mDealer.mHand.getSecondCard().showCard(ui->imgLblCard2);
    ui->imgLblCard1->setVisible(true);
    ui->imgLblCard2->setVisible(true);

    ui->imgLblCard7->setVisible(true);
    ui->imgLblCard8->setVisible(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRules_triggered()
{
    info.show();
}

void MainWindow::on_btnHit_clicked()
{
    int whatHappened;
    //Do something when hit button is clicked
    if(!myGame.mGameOver) {
    if(!ui->imgLblCard9->isVisible()){
        myGame.hit(ui->imgLblCard9);
    } else if(!ui->imgLblCard10->isVisible()){
        myGame.hit(ui->imgLblCard10);
    } else if(!ui->imgLblCard11->isVisible()){
        myGame.hit(ui->imgLblCard11);
    } else if(!ui->imgLblCard12->isVisible()){
        myGame.hit(ui->imgLblCard12);
    } else {
        cout << "Ran out of space...." << endl;
    }
    whatHappened = myGame.checkStatus(myGame.mPlayer);
    switch (whatHappened) {
    case 0:
        cout << "Keep playing" << endl;
        break;
    case 1:
        cout << "Winner" << endl;
        hideLabels();
        break;
    case 2:
        cout << "Loser" << endl;
        hideLabels();
        break;
    }
}
}

void MainWindow::on_btnStand_clicked()
{
    //Do something when stand button is clicked
}

void MainWindow::on_btnDoubleD_clicked()
{
    //Do something when double down button is clicked
}

void MainWindow::on_btnSplit_clicked()
{
    //Do something when split button is clicked
}

void MainWindow::on_btnSurrender_clicked()
{
    //Do something when surrender button is clicked
}
void MainWindow::on_doubleSpinBox_valueChanged() {
    myGame.mPlayer.setBet(ui->doubleSpinBox->value());
}

void MainWindow::on_actionNew_Game_triggered()
{

    myGame = game();
    myGame.toggleBet(ui->doubleSpinBox);
    myGame.mPlayer.mHand.getFirstCard().showCard(ui->imgLblCard7);
    myGame.mPlayer.mHand.getSecondCard().showCard(ui->imgLblCard8);
    myGame.mDealer.mHand.getFirstCard().showCard(ui->imgLblCard1);
    myGame.mDealer.mHand.getSecondCard().showCard(ui->imgLblCard2);
    ui->imgLblCard1->setVisible(true);
    ui->imgLblCard2->setVisible(true);

    ui->imgLblCard7->setVisible(true);
    ui->imgLblCard8->setVisible(true);
}

void MainWindow::hideLabels() {
    ui->imgLblCard1->setVisible(false);
    ui->imgLblCard2->setVisible(false);
    ui->imgLblCard3->setVisible(false);
    ui->imgLblCard4->setVisible(false);
    ui->imgLblCard5->setVisible(false);
    ui->imgLblCard6->setVisible(false);
    ui->imgLblCard7->setVisible(false);
    ui->imgLblCard8->setVisible(false);
    ui->imgLblCard9->setVisible(false);
    ui->imgLblCard10->setVisible(false);
    ui->imgLblCard11->setVisible(false);
    ui->imgLblCard12->setVisible(false);
}
