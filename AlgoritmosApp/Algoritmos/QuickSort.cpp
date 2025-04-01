#include "QuickSort.h"

int QuickSort::partition(std::vector<int>& vec, int& inicio, int& fim, std::shared_ptr<QuickSort> ptr) {
	
	int meio = (inicio + fim) / 2;
	int pivo = vec[meio];

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < pivo) {
			ptr->menorVetor.emplace_back(vec[i]);
			std::cout << vec[i];
		}
	}
}


void QuickSort(std::vector<int>&vec, int& inicio, int& fim, std::shared_ptr<QuickSort> ptr) {
	
	if (inicio < fim) {
		int partitionIndex = partition(vec, inicio, fim, ptr);
	}
}