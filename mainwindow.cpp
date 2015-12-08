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
    //Testing - not finished yet
    myGame.mPlayer.setBalance();
    myGame.mPlayer.setBet();


    ui->lblBalance->setText(QString::number(myGame.mPlayer.getBalance()));
    ui->lblCurrentBet->setText(QString::number(myGame.mPlayer.getBet()));
    pLayout = new QHBoxLayout();
    dLayout = new QHBoxLayout();

    ui->widgetP->setLayout(pLayout);

    QLabel * label1 = new QLabel();
    QLabel * label = new QLabel();

    myGame.mPlayer.mHand.getFirstCard().showCard(label);
    myGame.mPlayer.mHand.getSecondCard().showCard(label1);

    pLayout->addWidget(label);
    pLayout->addWidget(label1);


    ui->widgetD->setLayout(dLayout);
    QLabel * label2 = new QLabel();
    QLabel * label3 = new QLabel();

    myGame.mDealer.mHand.getFirstCard().showCard(label2);
    myGame.mDealer.mHand.getSecondCard().showCard(label3);
    dLayout->addWidget(label2);
    dLayout->addWidget(label3);
    if (myGame.checkKenny() == true)
    {
        declareVictory(0.25);
    }


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
    QLabel * label = new QLabel();
    myGame.mPlayer.mHand.addCard(myGame.mDeck.giveCard());
    myGame.mPlayer.mHand.getLastCard().showCard(label);
    ui->widgetP->layout()->addWidget(label);
    if (myGame.checkDefeat() == false)
    {
        on_btnSurrender_clicked();
    }
}

void MainWindow::on_btnStand_clicked()
{
    while (myGame.check17() == true)
    {

        QLabel * label = new QLabel();
        myGame.mDealer.mHand.addCard(myGame.mDeck.giveCard());
        myGame.mDealer.mHand.getLastCard().showCard(label);
        ui->widgetD->layout()->addWidget(label);

    }
    if(myGame.checkVictory() > 0)
    {
        declareVictory(myGame.checkVictory());
    }
    else if (myGame.checkVictory() == 0 )
    {
           disableButtons();
           msgBox.setText("Push in your favor at 1:1 payout");
           msgBox.setWindowTitle("Push");
           msgBox.exec();
           myGame.mPlayer.victory(1);
           ui->lblInfo->setTextFormat(Qt::RichText);
           ui->lblInfo->setText("<font size = '15' color = 'red' ><b>You got a push!</b></font>");
    }
    else
    {
        on_btnSurrender_clicked();
    }
}
void MainWindow::declareVictory(double percentage)
{
    double prize =0;
    msgBox.setText("You are the winner.");
    msgBox.setWindowTitle("Victory");
    msgBox.exec();
    ui->lblInfo->setTextFormat(Qt::RichText);
    ui->lblInfo->setText("<font size = '15' color = 'red' ><b>You are the Winner</b></font>");
    ui->lblAmount->setText("The amount you won: ");
    disableButtons();
    prize = myGame.mPlayer.victory(percentage);
    ui->lblNum->setText(QString::number(prize));
    delete pLayout;
    delete dLayout;

}
void MainWindow::disableButtons()
{
   //disables all the buttons
    ui->btnHit->setDisabled(true);
    ui->btnStand->setDisabled(true);
    ui->btnSurrender->setDisabled(true);

}
void MainWindow::on_btnSurrender_clicked()
{
     // gives information about defeat
    msgBox.setText("You lost.");
    msgBox.setWindowTitle("Defeat");
    msgBox.exec();
    ui->lblInfo->setTextFormat(Qt::RichText);
    ui->lblInfo->setText("<font size = '15' color = 'red' ><b>You lost</b></font>");
    ui->lblAmount->setText("The amount you lost: ");
    ui->lblNum->setText(QString::number(myGame.mPlayer.getBet()));
    disableButtons();
    myGame.mPlayer.defeat();
}


void MainWindow::on_actionNew_Game_triggered()
{
    enable();
    myGame = game();
    myGame.mPlayer.setBet();
    ui->lblCurrentBet->setText(QString::number(myGame.mPlayer.getBet()));
    delete pLayout;
    qDeleteAll(ui->widgetP->children());
    delete dLayout;
    qDeleteAll(ui->widgetD->children());
    pLayout = new QHBoxLayout();
    dLayout = new QHBoxLayout();

    ui->widgetP->setLayout(pLayout);
    QLabel * label1 = new QLabel();
    QLabel * label = new QLabel();

    myGame.mPlayer.mHand.getFirstCard().showCard(label);
    myGame.mPlayer.mHand.getSecondCard().showCard(label1);

    pLayout->addWidget(label);
    pLayout->addWidget(label1);

    ui->widgetD->setLayout(dLayout);
    QLabel * label2 = new QLabel();
    QLabel * label3 = new QLabel();

    myGame.mDealer.mHand.getFirstCard().showCard(label2);
    myGame.mDealer.mHand.getSecondCard().showCard(label3);
    dLayout->addWidget(label2);
    dLayout->addWidget(label3);



}

void MainWindow::enable()
{
    ui->lblInfo->setText("");
    ui->lblAmount->setText("");
    ui->lblNum->setText("");
    ui->btnHit->setDisabled(false);
    ui->btnStand->setDisabled(false );
    ui->btnSurrender->setDisabled(false);
}

