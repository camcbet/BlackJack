#pragma once
#include "Hand.h"
class GenericPlayer : virtual public Hand
{
protected:
	std::string m_Name;
public:
	GenericPlayer(const std::string& name = "");
	virtual ~GenericPlayer();
	virtual bool IsHitting() = 0;
	bool IsBusted();
	void Bust() const;
	friend std::ostream& operator<<(std::ostream& os, GenericPlayer& aGenericPlayer);
};