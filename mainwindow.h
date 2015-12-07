#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "info.h"
#include "deck.h"
#include "game.h"
#include <QHBoxLayout>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionRules_triggered();

    void on_btnHit_clicked();

    void on_btnStand_clicked();

    void declareVictory(double percentage);

    void on_btnSurrender_clicked();

    void disableButtons();

    void on_doubleSpinBox_valueChanged();

    void on_actionNew_Game_triggered();

private:
    Ui::MainWindow *ui;
    QPixmap image;
    QImage *imageObject;
    Info info;
  //  Deck deck;
    game myGame;
    QMessageBox msgBox;
    QHBoxLayout * pLayout;
    QHBoxLayout * dLayout;

};

#endif // MAINWINDOW_H
