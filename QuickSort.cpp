#include <iostream>
#include <algorithm>
#include <vector>

#include "QuickSort.h"

QuickSort::QuickSort() {}

std::vector<int> QuickSort::sort(std::vector<int> list){

    std::vector<std::pair<int,int>> sublist;

    sublist.push_back(std::make_pair(0, list.size() - 1));

    while (sublist.size() > 0){
        auto[start, end] = sublist.back();
        sublist.pop_back();

        if (start >= end){
            continue;
        }

        int subsize = end - start + 1;

        int pivotIndex;
        if (subsize >= 3) {
            pivotIndex = start + 2;
        } else {
        pivotIndex = end;
        }

        int pivotValue = list[pivotIndex];

        std::swap(list[pivotIndex], list[end]);
        pivotIndex = end;

        int i = start;

        for (int j = start; j < end; j++){
            if (list[j] < pivotValue){
                std::swap(list[i],list[j]);
                i++;
            }
        }

        std::swap(list[i], list[end]);

        sublist.push_back(std::make_pair(start, i - 1));
        sublist.push_back(std::make_pair(i + 1, end));
    }

    return list;
}