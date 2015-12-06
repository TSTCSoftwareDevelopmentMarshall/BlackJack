#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "info.h"
#include "deck.h"
#include "card.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Set up view here
    imageObject = new QImage();
    imageObject->load(deck.mDeck[13].getCardImage());
    image = QPixmap::fromImage(*imageObject);
    image = image.scaled(150,150,Qt::KeepAspectRatio);
    cout << deck.mDeck[13].getCardValue() << endl;
    ui->imgLblCard1->setPixmap(image);
    ui->imgLblCard1->setFixedSize(image.size());

    ui->imgLblCard2->setPixmap(image);
    ui->imgLblCard2->setFixedSize(image.size());

    ui->imgLblCard3->setPixmap(image);
    ui->imgLblCard3->setFixedSize(image.size());
    //ui->imgLblCard3->setVisible(false);

    imageObject = new QImage();
    imageObject->load(":/CardImages/RedBackCard");
    image = QPixmap::fromImage(*imageObject);
    image = image.scaled(150,150,Qt::KeepAspectRatio);

    ui->imgLblCard4->setPixmap(image);
    ui->imgLblCard4->setFixedSize(image.size());

    ui->imgLblCard5->setPixmap(image);
    ui->imgLblCard5->setFixedSize(image.size());

    ui->imgLblCard6->setPixmap(image);
    ui->imgLblCard6->setFixedSize(image.size());

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
    deck.shuffle();
    imageObject = new QImage();
    imageObject->load(deck.mDeck[13].getCardImage());
    image = QPixmap::fromImage(*imageObject);
    image = image.scaled(150,150,Qt::KeepAspectRatio);
    cout << deck.mDeck[13].getCardValue() << endl;
    ui->imgLblCard1->setPixmap(image);
    ui->imgLblCard1->setFixedSize(image.size());

    ui->imgLblCard2->setPixmap(image);
    ui->imgLblCard2->setFixedSize(image.size());

    ui->imgLblCard3->setPixmap(image);
    ui->imgLblCard3->setFixedSize(image.size());
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
