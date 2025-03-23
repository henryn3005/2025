#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize){
        return 1;
    }

    int pile1;
    int pile2;

    if (numCrates % 2 == 1){
        pile1 = numCrates - 1;
        pile1 /= 2;
    } else {
        pile1 = numCrates / 2;
    }

    pile2 = numCrates - pile1;

    return numTrucks(pile1,loadSize) + numTrucks(pile2,loadSize);
}