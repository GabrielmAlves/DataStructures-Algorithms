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
    std::vector<int> vetor = { 3,4,5,9 };
 
    quickSort->quickSort(vetor, 0, vetor.size() - 1, quickSort);

    return 0;
}
