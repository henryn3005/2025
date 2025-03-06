#include "Human.h"

Human::Human(std::string name) : name(name) {}
Human::Human() : name("Human") {}

char Human::makeMove() {
    std::cout << "Enter Move: " << std::endl;
    std::cin >> move;

    while(move != 'R' && move != 'P' && move != 'S') {
        std::cout << "invalid, choose either R, P, or S" << std::endl;
        std::cin >> move;
    }

    return move;
}

std::string Human::getName() { return name; }