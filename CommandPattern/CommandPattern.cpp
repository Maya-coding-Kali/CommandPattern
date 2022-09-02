// CommandPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>
#include <random>
#include "Move.h"
#include "Character.h"
int main()
{
    srand(time(NULL));
    std::vector<Command*> command_queue;
    Character maya("Maya");
    Move* move1 = new Move();
    Move* move2 = new Move();
    Move* move3 = new Move();
    Move* move4 = new Move();
    command_queue.push_back(move1);
    command_queue.push_back(move2);
    command_queue.push_back(move3);
    command_queue.push_back(move4);
    for (int i = 0; i < command_queue.size(); i++)
    {
       command_queue[i]->execute(maya);
    }
    for (int i = command_queue.size()-1; i >= 0; i--)
    {
        command_queue[i]->undo(maya);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
