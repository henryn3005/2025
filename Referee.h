#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
    public:
    Referee() {}

    Player* refGame(Player* player1, Player* player2) {
        if (player1->makeMove() == 'R' && player2->makeMove() == 'S') { return player1;}
        if (player1->makeMove() == 'R' && player2->makeMove() == 'P') { return player2;}
        if (player1->makeMove() == 'R' && player2->makeMove() == 'R') { return nullptr; }
        if (player1->makeMove() == 'S' && player2->makeMove() == 'R') { return player2;}
        if (player1->makeMove() == 'S' && player2->makeMove() == 'P') { return player1;}
        if (player1->makeMove() == 'S' && player2->makeMove() == 'S') { return nullptr; }
        if (player1->makeMove() == 'P' && player2->makeMove() == 'S') { return player2;}
        if (player1->makeMove() == 'P' && player2->makeMove() == 'R') { return player1;}
        if (player1->makeMove() == 'P' && player2->makeMove() == 'P') { return nullptr; }

        return 0;
    }

    //asks players to make moves, determines outcome of game

    
};

#endif