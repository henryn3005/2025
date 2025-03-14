#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
    std::string name;
    public:
    Robot();
    std::string getName();
};

#endif