#include "House.h"

House::House(const std::string& name = "House") { std::cout << "Construct: House." << std::endl; }
House::House() { std::cout << "Construct: House." << std::endl; const std::string& name = "House"; }
House::~House() { std::cout << "Destruct: House." << std::endl; }

bool House::IsHitting() {
	return (getTotal() <= 16);
}

void House::FlipFirstCard() {
	if (!(m_Cards.empty()))
	{
		m_Cards[0]->Flip();
	}
	else
	{
		std::cout << "No card to flip!" << std::endl;
	}
}
