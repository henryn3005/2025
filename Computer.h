#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Rock.h"

class Computer : public Player {
    std::string name;
    public:
    Computer();
    Move* makeMove();

    std::string getName();

};

#endif