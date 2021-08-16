#pragma once
#include "GenericPlayer.h"
class House : virtual public GenericPlayer
{
public:
	House(const std::string& name);
	House();
	virtual ~House();
	bool IsHitting() override;
	void FlipFirstCard();
};