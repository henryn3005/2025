#include "Human.h"

Human::Human(std::string name) : name(name) {}
Human::Human() : name("Human") {}

Move* Human::makeMove() {
    std::cout << "Enter Move: " << std::endl;
    std::cin >> move;
    while (true) {
        if (move == "Rock") return new Rock();
        if (move == "Paper") return new Paper();
        if (move == "Scissors") return new Scissors();
        if (move == "Robot") return new Robot();
        if (move == "Monkey") return new Monkey();
        if (move == "Pirate") return new Pirate();
        if (move == "Ninja") return new Ninja();
        if (move == "Zombie") return new Zombie();

        std::cout << "Invalid Move";
    }
}

std::string Human::getName() { return name; }