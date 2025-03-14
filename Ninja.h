#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move {
    std::string name;
    public:
    Ninja();
    std::string getName();
};

#endif