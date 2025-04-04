#include "LinkedList.h"
#include <iostream>
#include "QuickSort.h"
#include <vector>

int main() {
 
    std::shared_ptr<QuickSort> quickSort = std::make_shared<QuickSort>();
    std::vector<int> vetor = { 10, 7, 8, 9, 1, 5 };

    quickSort->quickSort(vetor, 0, vetor.size() - 1, quickSort);

    for (const int& i : vetor) {
        std::cout << i << " ";
    }
    return 0;
}
