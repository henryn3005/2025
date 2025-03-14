#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    std::string name;
    std::string move;
    public:
    Human(std::string name);
    Human();

    Move* makeMove();

    std::string getName();
    
};

#endif