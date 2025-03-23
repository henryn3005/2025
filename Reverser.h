#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>

class Reverser {
    public:

    int reverseDigit(int value); // takes non-negative value, reverses digits using recursion
    int reverseDigit(int value, int acc);

    std::string reverseString(std::string characters);

};

#endif