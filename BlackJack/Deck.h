#pragma once
#include "GenericPlayer.h"
#include <algorithm>

class Deck : virtual public Hand
{
public:
	Deck();
	virtual ~Deck();
	void Populate(); //создаёт колоду 52 карты
	void Shuffle(); //тасует колоду
	void Deal(Hand& aHand); //раздает одну карту в руки
	void AdditionalCards(GenericPlayer& aGenericPlayer); //даёт дополнительные карты игроку
};