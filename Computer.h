#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
    std::string name;
    char move;
    public:
    Computer() : name("Computer"), move('R') {}

    
    char makeMove()  { return move;}

};

#endif