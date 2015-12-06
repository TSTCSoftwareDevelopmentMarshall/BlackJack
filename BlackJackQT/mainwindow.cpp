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
    game myGame;

    //Set up view here
    //Testing - not finished yet
    myGame.mPlayer.mHand.getFirstCard().showCard(ui->imgLblCard1);
    myGame.mPlayer.mHand.getSecondCard().showCard(ui->imgLblCard2);
    ui->imgLblCard3->setVisible(false);
    myGame.mDealer.mHand.getFirstCard().showCard(ui->imgLblCard4);
    myGame.mDealer.mHand.getSecondCard().showCard(ui->imgLblCard5);
    ui->imgLblCard6->setVisible(false);

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
    //Do something when hit button is clicked

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
    cout <<"It changed" << endl;
}
