#ifndef PIRATE_H
#define PIRATE_H

#include <Move.h>

class Pirate : public Move {
    std::string name;
    public:
    Pirate();
    std::string getName();
};

#endif