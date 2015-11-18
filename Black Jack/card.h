#pragma once
class card
{
public:
	int getValue();
	int setValue();
	int assignValue(int);
	int reInitializeCard(char, char);
	card(char, char);
	card();
	~card();
private:
	enum suit_e { spade, heart, diamond, club};
	char symb;
	suit_e suit;
	int value;
};

