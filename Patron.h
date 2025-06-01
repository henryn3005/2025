#ifndef PATRON_H
#define PATRON_H

#include <iostream>

class Patron {
    int patronID;
    public:
    Patron();
    Patron(int patronID);

    int get_patronID();
    void set_patronID(int patronID);
};

#endif