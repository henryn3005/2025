#ifndef PAPER_H
#define PAPER_H

#include <Move.h>

class Paper : public Move {
    std::string name;
    public:
    Paper();
    std::string getName();
};

#endif