#include "Deck.h"

Deck::Deck()
{
	std::cout << "Construct: Deck." << std::endl;
	m_Cards.reserve(52);
	Populate();
}

Deck::~Deck() { std::cout << "Destruct: Deck." << std::endl; }

void Deck::Populate()
{
	std::cout << "Создание колоды" << std::endl;
	clear();
	for (int s = HEARTS; s <= DIAMONDS; ++s)
	{
		for (int r = ACE; r <= KING; ++r)
		{
			Add(new Card(static_cast<Rank>(r), static_cast<Suit>(s), true));
		}
		for (int r = 0; r < 3; ++r)
		{
			Add(new Card(static_cast<Rank>(10), static_cast<Suit>(s), true));
		}
	}
}

void Deck::Shuffle()
{
	random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Deck::Deal(Hand& aHand)
{
	if (!m_Cards.empty())
	{
		aHand.Add(m_Cards.back());
		m_Cards.pop_back();
	}
	else
	{
		std::cout << "Out of cards. Unable to deal.";
	}
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer) {
	while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting())
	{
		Deal(aGenericPlayer);
		std::cout << aGenericPlayer << std::endl;
		if (aGenericPlayer.IsBusted()) { aGenericPlayer.Bust(); }
	}
}