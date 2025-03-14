#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Move.h"
#include "Rock.h"
#include "Ninja.h"
#include "Scissors.h"
#include "Robot.h"
#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Paper.h"

class Player {
    public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;

};


#endif  