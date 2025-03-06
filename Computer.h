#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
    std::string name;
    char move;
    public:
    Computer();
    char makeMove();

    std::string getName();

};

#endif