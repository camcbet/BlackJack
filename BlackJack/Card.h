#pragma once
#include "global.h"
class Card
{
public:
	Card();
	Card(Rank r, Suit s, bool IsFaceUp);
	~Card();
	int getRank() const;
	int getSuit() const;
	void Flip();
	friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
private:
	Rank m_Rank;
	Suit m_Suit;
	bool m_IsFaceUp;
};
