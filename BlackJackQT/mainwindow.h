#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "info.h"
#include "deck.h"


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

    void on_btnDoubleD_clicked();

    void on_btnSplit_clicked();

    void on_btnSurrender_clicked();

private:
    Ui::MainWindow *ui;
    QPixmap image;
    QImage *imageObject;
    QGraphicsScene *scene;
    Info info;
    Deck deck;

};

#endif // MAINWINDOW_H
