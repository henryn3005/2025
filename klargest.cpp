#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int> max_heap;
    if (k > values.size()) {
        return -1;
    }

    for (auto i : values) {
        max_heap.push(i);
    }

    for (int j = 1; j < k; j++){
        max_heap.pop();
    }

    int largest = max_heap.top();

    return largest;
}