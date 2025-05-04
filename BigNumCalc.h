#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <list>
#include <iostream>

class BigNumCalc {
    public:
    BigNumCalc();
    ~BigNumCalc();

    std::list<int> buildBigNum(std::string numString); //creates a list of strings, so 12345 would be 5 individual nodes

    std::list<int> add(std::list<int> num1, std::list<int> num2);
    std::list<int> sub(std::list<int> num1, std::list<int> num2);
    std::list<int> mul(std::list<int> num1, std::list<int> num2);
};

#endif