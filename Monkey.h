#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
    std::string name;
    public:
    Monkey();
    std::string getName();
};

#endif