#include "Hand.h"
#include <typeinfo>

Hand::Hand() {
	std::cout << "Construct: Hand." << std::endl;
	m_Cards.reserve(14); //сумма карт с мин знач
	HowManyAce = 0;
}

Hand::~Hand() {
	clear();
	std::cout << "Destruct: Hand." << std::endl;
}

void Hand::Add(Card* pCard) { m_Cards.push_back(pCard); }

void Hand::clear() {
	m_Cards.clear();
	m_Cards.shrink_to_fit();
	HowManyAce = 0;
}

int Hand::getTotal() {

	if (m_Cards.empty()) return 0;

	int total = 0;
	int rr;
	std::vector<Card*>::const_iterator it;
	for (it = m_Cards.begin(); it != m_Cards.end(); it++) {
		rr = (*it)->Card::getRank();
		total += rr;
		if (rr == 1) ++HowManyAce;
	}
	return total;
}