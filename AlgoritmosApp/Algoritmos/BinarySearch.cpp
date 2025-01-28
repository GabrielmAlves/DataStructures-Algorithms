#include "BinarySearch.h"
#include <iostream>

#define MAX 50

int BinarySearch::PesquisaBinaria(int vetor[], int numero) {

}

void BinarySearch::PegaNumero() {
	std::cout << "Qual número deseja verificar se existe no vetor? ";
	std::cin >> this->numero;

	std::srand(std::time(nullptr));

	this->posicao = PesquisaBinaria(this->vetor, numero);
}