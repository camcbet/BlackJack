#include "Player.h"

Player::Player(const std::string& name = "") { /*std::cout << "Construct: Player." << std::endl;*/ }
Player::~Player() { /*std::cout << "Destruct: Player." << std::endl;*/ }

bool Player::IsHitting() {
	std::cout << m_Name << ", do you want a hit? (Y/N): ";
	char response;
	std::cin >> response;
	return (response == 'y' || response == 'Y');
}

void Player::Win() const {
	std::cout << m_Name << " wins!" << std::endl;
}

void Player::Lose() const {
	std::cout << m_Name << " loses!" << std::endl;
}

void Player::Push() const {
	std::cout << m_Name << " pushes!" << std::endl;
}