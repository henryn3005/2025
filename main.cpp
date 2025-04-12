#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>

int main() {
    int size;
    std::cout << "How big do you want your list?" << std::endl;
    std::cin >> size;

    std::vector<int> list;

    for (int i = 0; i < size; i++){
        int choice;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> choice;
        list.push_back(choice);
    }

    QuickSort q;

    std::vector<int> sorted = q.sort(list);

    RecursiveBinarySearch r;

    
    for (auto i : sorted){
        std::cout << i << " ";
    }
}