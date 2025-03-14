#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    std::string move1 = p1move->getName();
    std::string move2 = p2move->getName();

    if (move1 == move2) {
        return nullptr;
    }

    if ((move1 == "Rock" && (move2 == "Scissors" || move2 == "Robot")) ||
        (move1 == "Scissors" && (move2 == "Paper" || move2 == "Monkey")) ||
        (move1 == "Paper" && (move2 == "Rock" || move2 == "Pirate")) ||
        (move1 == "Robot" && (move2 == "Monkey" || move2 == "Zombie")) ||
        (move1 == "Monkey" && (move2 == "Pirate" || move2 == "Ninja")) ||
        (move1 == "Pirate" && (move2 == "Zombie" || move2 == "Scissors")) ||
        (move1 == "Ninja" && (move2 == "Robot" || move2 == "Paper")) ||
        (move1 == "Zombie" && (move2 == "Ninja" || move2 == "Rock"))) {
        return player1;
    }

    return player2;
}

