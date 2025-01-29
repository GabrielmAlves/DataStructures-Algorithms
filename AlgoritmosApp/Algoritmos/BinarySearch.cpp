#include "BinarySearch.h"
#include <iostream>
#include <algorithm>
#include <locale>

#define MAX 50

int BinarySearch::PesquisaBinaria(const std::vector<int> vetor, int numero) {
	this->baixo = 0;
	this->alto = vetor.size() - 1;

	while (baixo <= alto) {
		this->meio = (baixo + alto) / 2;
		this->chute = vetor[meio];

		if (this->chute == numero) {
			return meio;
		}
		else if (this->chute > numero) {
			alto = meio - 1;
		}
		else if (this->chute < numero) {
			baixo = meio + 1;
		}
	}
	return -1;
}

void BinarySearch::PegaNumero() {
	const int minimo = 1, maximo = 20;

	vetor.resize(MAX);
	std::srand(std::time(nullptr));

	std::cout << "Qual numero deseja verificar se existe no vetor? ";
	std::cin >> this->numero;

	for (int i = 0; i < MAX; i++) {
		vetor[i] = minimo + (std::rand() % (maximo - minimo + 1));
	}
	
	std::sort(vetor.begin(), vetor.end());
	std::cout << "\n\nVetor gerado: ";
	for (const int& numero : this->vetor) {
		std::cout << numero << " ";
	}
	this->posicao = PesquisaBinaria(vetor, numero);
	
	if (this->posicao == -1) {
		std::cout << "\nParece que n\306o tem esse numero no vetor!";
	}
	else {
		std::cout << "\n\nO indice do numero " << this->numero << " eh: " << this->posicao;
	}
}

int main() {
	BinarySearch bs;

	bs.PegaNumero();
}