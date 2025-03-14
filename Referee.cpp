#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* player1move = player1->makeMove();
    Move* player2move = player2->makeMove();

    std::string p1move = player1->getName();
    std::string p2move = player2->getName();

    if ((p1move == "Rock" && p2move == "Scissors") || (p1move == "Rock" && p2move == "Robot")) return player1;
    if ((p1move == "Scissors" && p2move == "Paper") || (p1move == "Scissors" && p2move == "Monkey")) return player1;
    if ((p1move == "Paper" && p2move == "Rock") || (p1move == "Paper" && p2move == "Pirate")) return player1;
    if ((p1move == "Monkey" && p2move == "Robot") || (p1move == "Monkey" && p2move == "Zombie")) return player1;
    if ((p1move == "Robot" && p2move == "Ninja") || (p1move == "Robot" && p2move == "Monkey")) return player1;
    if ((p1move == "Pirate" && p2move == "Zombie") || (p1move == "Pirate" && p2move == "Robot")) return player1;
    if ((p1move == "Ninja" && p2move == "Pirate") || (p1move == "Ninja" && p2move == "Monkey")) return player1;
    if ((p1move == "Zombie" && p2move == "Pirate") || (p1move == "Zombie" && p2move == "Ninja")) return player1;

    return nullptr;
}

