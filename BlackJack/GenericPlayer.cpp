#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const std::string& name) : m_Name(name) { /*std::cout << "Construct: GenericPlayer." << std::endl;*/ }
GenericPlayer::~GenericPlayer() { /*std::cout << "Destruct: GenericPlayer." << std::endl;*/ }

bool GenericPlayer::IsBusted() //проверка на перебор
{
	return (getTotal() > 21);
}

void GenericPlayer::Bust() const
{
	std::cout << m_Name << " busts." << std::endl;
}

std::ostream& operator<<(std::ostream& os, GenericPlayer& aGenericPlayer)
{
	os << aGenericPlayer.m_Name << ":\t";
	std::vector<Card*>::const_iterator pCard;
	if (!aGenericPlayer.m_Cards.empty())
	{
		for (pCard = aGenericPlayer.m_Cards.begin(); pCard != aGenericPlayer.m_Cards.end();	++pCard)
		{
			os << *(*pCard) << "\t";
		}

		if (aGenericPlayer.getTotal() != 0)
		{
			std::cout << "(" << aGenericPlayer.getTotal() << ")";
		}
	}
	else
	{
		os << "<empty>";
	}

	return os;
}