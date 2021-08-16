#pragma once
#include <iostream>
#include <vector>
//константы
const enum Rank {
	ACE = 1,
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	JACK = TEN,
	QUEEN = TEN,
	KING = TEN
};
const enum Suit {
	HEARTS = 0,
	CLUBS,
	SPADES,
	DIAMONDS
};