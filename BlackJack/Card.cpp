#include "Card.h"

Card::Card() { /*std::cout << "Construct: Card." << std::endl;*/ m_Rank = ACE; m_Suit = SPADES; m_IsFaceUp = true; }
Card::Card(Rank r, Suit s, bool IsFaceUp) : m_Rank(r), m_Suit(s), m_IsFaceUp(IsFaceUp) { /*std::cout << "Construct: Card." << std::endl;*/ }
Card::~Card() { /*std::cout << "Destruct: Card." << std::endl;*/ }

int Card::getRank() const {
	if (m_IsFaceUp) {
		return m_Rank;
	}
	else return 0;
}

int Card::getSuit() const {
	if (m_IsFaceUp) {
		return m_Suit;
	}
	else return 0;
}

void Card::Flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}

std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
	const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	const std::string SUITS[] = { "H", "C", "S", "D" };

	if (aCard.m_IsFaceUp)
	{
		os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
	}
	else
	{
		os << "XX";
	}

	return os;
}