#include "LinkedList.h"
#include <iostream>

int main() {
    LinkedList list;
    list.InsereNoFinal(2);
    list.InsereNoFinal(5);
    list.InsereNoFinal(8);
    std::cout << "Lista original: ";
    list.ImprimeLista();
    list.DeletaValor(5);
    list.ImprimeLista();

    return 0;
}
