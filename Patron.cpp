#include "Patron.h"

Patron::Patron() : patronID(0) {}

Patron::Patron(int patronID) : patronID(patronID) {}

int Patron::get_patronID() { return patronID; }

void Patron::set_patronID(int patronID) { this->patronID = patronID; }