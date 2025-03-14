#ifndef ROCK_H
#define ROCK_H

#include <Move.h>

class Rock : public Move {
    std::string name;
    public:
    Rock();
    std::string getName();
};

#endif