#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <Move.h>

class Zombie : public Move {
    std::string name;
    public:
    Zombie();
    std::string getName();
};

#endif