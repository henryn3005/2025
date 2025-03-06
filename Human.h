#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    std::string name;
    char move;
    public:
    Human(std::string name) : name(name) {}
    Human() : name("Human") {}

    char makeMove() override {
        std::cout << "Enter Move: " << std::endl;
        std::cin >> move;

        if(move != 'R','P','S') { 
            std::cout << "invalid, choose either R, P, or S"; 
            std::cout << "Enter Move: " << std::endl;
            std::cin >> move;}

    return move;
    }
    std::string getName() override {return name;}

};

#endif