#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch() {}

bool RecursiveBinarySearch::search(std::vector<int> array, int target) {
    if(array.empty()){
        return false;
    }
    int index = array.size() / 2;
    int value = array[index];
    if(target == value){
        return true;
    }

    if (target < value) {
        array.erase(array.begin() + index, array.end());
    } else {
        array.erase(array.begin(), array.begin() + index+1);
    }
    return search(array,target);
}