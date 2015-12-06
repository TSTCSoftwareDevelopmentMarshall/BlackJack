#include "card.h"
#include "QImage"
using namespace std;

Card::Card(SUITS suit, QString image, int value)
{
	mCardSuit = suit;
	mCardImage = image;
	mCardValue = value;
}


int Card::getCardValue()
{
	return mCardValue;
}

void Card::setCardValue(int value)
{
	mCardValue = value;
}

Card::SUITS operator++(Card::SUITS &cs, int)
{
	return cs = static_cast<Card::SUITS>(cs + 1);
}

QString Card::getCardImage() {
    return mCardImage;
}

void Card::showCard(QLabel *label) {
    QPixmap image;
    QImage *imageObject;
    imageObject = new QImage();
    imageObject->load(getCardImage());
    image = QPixmap::fromImage(*imageObject);
    image = image.scaled(150,150,Qt::KeepAspectRatio);
    label->setPixmap(image);
    label->setFixedSize(image.size());
}
