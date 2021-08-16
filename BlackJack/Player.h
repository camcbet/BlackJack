#pragma once
#include "GenericPlayer.h"
class Player : virtual public GenericPlayer {
public:
	Player(const std::string& name);
	Player();
	virtual ~Player();
	bool IsHitting() override;
	void Win() const;
	void Lose() const;
	void Push() const;
};