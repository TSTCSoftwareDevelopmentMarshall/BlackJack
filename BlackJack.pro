#-------------------------------------------------
#
# Project created by QtCreator 2015-11-25T21:00:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BlackJack
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    info.cpp \
    card.cpp \
    deck.cpp \
    hand.cpp \
    dealer.cpp \
    game.cpp \
    player.cpp

HEADERS  += mainwindow.h \
    info.h \
    card.h \
    deck.h \
    hand.h \
    dealer.h \
    game.h \
    player.h

FORMS    += mainwindow.ui \
    info.ui

DISTFILES += \
    cards_png/b1fh.png \
    cards_png/b1fv.png \
    cards_png/b1pb.png \
    cards_png/b1pl.png \
    cards_png/b1pr.png \
    cards_png/b1pt.png \
    cards_png/b2fh.png \
    cards_png/b2fv.png \
    cards_png/b2pb.png \
    cards_png/b2pl.png \
    cards_png/b2pr.png \
    cards_png/b2pt.png \
    cards_png/c1.png \
    cards_png/c2.png \
    cards_png/c3.png \
    cards_png/c4.png \
    cards_png/c5.png \
    cards_png/c6.png \
    cards_png/c7.png \
    cards_png/c8.png \
    cards_png/c9.png \
    cards_png/c10.png \
    cards_png/cj.png \
    cards_png/ck.png \
    cards_png/cq.png \
    cards_png/d1.png \
    cards_png/d2.png \
    cards_png/d3.png \
    cards_png/d4.png \
    cards_png/d5.png \
    cards_png/d6.png \
    cards_png/d7.png \
    cards_png/d8.png \
    cards_png/d9.png \
    cards_png/d10.png \
    cards_png/dj.png \
    cards_png/dk.png \
    cards_png/dq.png \
    cards_png/ec.png \
    cards_png/h1.png \
    cards_png/h2.png \
    cards_png/h3.png \
    cards_png/h4.png \
    cards_png/h5.png \
    cards_png/h6.png \
    cards_png/h7.png \
    cards_png/h8.png \
    cards_png/h9.png \
    cards_png/h10.png \
    cards_png/hj.png \
    cards_png/hk.png \
    cards_png/hq.png \
    cards_png/jb.png \
    cards_png/jr.png \
    cards_png/s1.png \
    cards_png/s2.png \
    cards_png/s3.png \
    cards_png/s4.png \
    cards_png/s5.png \
    cards_png/s6.png \
    cards_png/s7.png \
    cards_png/s8.png \
    cards_png/s9.png \
    cards_png/s10.png \
    cards_png/sj.png \
    cards_png/sk.png \
    cards_png/sq.png

RESOURCES += \
    cardimages.qrc
