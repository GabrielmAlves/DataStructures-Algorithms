#include "LinkedList.h"
#include <iostream>
#include "QuickSort.h"
#include <vector>

int main() {
    /*LinkedList list;
    list.InsereNoFinal(2);
    list.InsereNoFinal(5);
    list.InsereNoFinal(8);
    std::cout << "Lista original: ";
    list.ImprimeLista();
    list.DeletaValor(5);
    list.ImprimeLista();*/

    std::shared_ptr<QuickSort> quickSort = std::make_shared<QuickSort>();
    std::vector<int> vector = { 8,4,5,9 };
    
    quickSort->quickSort(vector, 0, vector.size() - 1);

    return 0;
}
