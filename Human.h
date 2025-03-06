#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    std::string name;
    char move;
    public:
    Human(std::string name);
    Human();

    char makeMove();

    std::string getName();
    
};

#endif