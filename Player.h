#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
    public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
    virtual char getMove() = 0;

};


#endif  