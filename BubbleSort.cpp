#include "Sort.h"
#include "BubbleSort.h"

#include <iostream>
#include <algorithm>

BubbleSort::BubbleSort() {}

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int temp = list.size();
    bool swapped = false;
    for (int i = 0; i < list.size() - 1; i++){
        swapped = false;
        for (int j = 0; j < temp - 1; j++){
            if(list[j] > list[j+1]){
                std::swap(list[j], list[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
        temp--;
    }

    return list;
}