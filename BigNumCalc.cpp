#include "BigNumCalc.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <list>

BigNumCalc::BigNumCalc() {

}

BigNumCalc::~BigNumCalc() {
    
}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> newlist;
    if (numString.empty()) {
        return newlist;
    }
    for (auto i : numString) {
        if (isdigit(i)) {
            newlist.push_back(i - '0');
        }
    }

    return newlist;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) { // add num1 to num2
    std::list<int> result;
    
    auto i1 = num1.rbegin();
    auto i2 = num2.rbegin();


    int carry = 0;

    while (i1 != num1.rend() || i2 != num2.rend() || carry != 0) {
        int sum1 = 0;
        if (i1 != num1.rend()) {
            sum1 = *i1;
            i1++;
        }

        int sum2 = 0;
        if (i2 != num2.rend()) {
            sum2 = *i2;
            i2++;
        }

        int total = sum1 + sum2 + carry;
        result.push_front(total % 10);
        carry = total / 10;
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    
    auto i1 = num1.rbegin();
    auto i2 = num2.rbegin();


    int borrow = 0;

    while (i1 != num1.rend() || i2 != num2.rend()) {
        int sum1 = 0;
        if (i1 != num1.rend()) {
            sum1 = *i1;
            i1++;
        }

        int sum2 = 0;
        if (i2 != num2.rend()) {
            sum2 = *i2;
            i2++;
        }


        int total = sum1 - sum2 - borrow;
        
        if (total < 0) {
            total += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.push_front(total);
    }

    while (result.size() > 1 && result.front() == 0){
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;

    if (num1.empty() || num2.empty()) {
        return {};
    }

    int carry = 0;

    int digit = num2.back();

    auto i = num1.rbegin();

    while (i != num1.rend() || carry != 0) {
        int n = 0;
        if (i != num1.rend()) {
            n = *i;
        }

        int product = n * digit + carry;
        result.push_front(product % 10);
        carry = product / 10;

        if (i != num1.rend()) i++;
    }

    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }

    return result;
}