#pragma once
#include "Character.h"
class Command
{
public:
	virtual ~Command() {};
	virtual void execute(Character& Character) = 0;
	virtual void undo(Character& Character) = 0;

private:

};

