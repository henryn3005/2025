#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
    std::string name;
    public:
    Scissors();
    std::string getName();
};

#endif