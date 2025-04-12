#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
    std::vector<int> list;
    int size;

    while (iss >> size) {
        list.push_back(size);
    }

    QuickSort q;

    std::vector<int> sorted = q.sort(list);

    RecursiveBinarySearch r;

    int result = r.search(sorted,1);

    if (result == 1){
        std::cout << 'true';
    } else {
        std::cout << 'false';
    }

    
    for (auto i : sorted){
        std::cout << i << " ";
    }
}