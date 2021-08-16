#pragma once
#include "Card.h"
#include <string>
class Hand
{
protected:
	std::vector <Card*> m_Cards;
	int HowManyAce;
public:
	Hand();
	virtual ~Hand();
	void Add(Card* pCard);
	void clear();
	int getTotal();
};