#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"



int main() {
    Referee r;
    Human h1;
    Computer c1;

    Player* results = r.refGame(&h1,&c1);

    if (results){
        std::cout << results->getName() << " Wins!" << std::endl;
        } else { std::cout << "Tie Game" << std::endl;

        }
}