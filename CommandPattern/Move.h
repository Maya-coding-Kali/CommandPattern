#pragma once
#include "Command.h"
#include <time.h>
#include <random>
class Move : public Command
{
public:
	Move();
	~Move();
	void execute(Character& character) {
		 x = rand() % 4;
		 y = rand() % 4;
		character.move(x, y);
		std::cout << character.GetName() << " Moved: " << x<< " on the x axis and "<< y << " on the y axis\n";

	};
	void undo(Character& character) {
		character.move(-x, -y);
		std::cout << character.GetName() << " Moved back: " << -x << " on the x axis and " << -y << " on the y axis \n";

	};
private:
	int x;
	int y;
};

Move::Move()
{
}

Move::~Move()
{
}