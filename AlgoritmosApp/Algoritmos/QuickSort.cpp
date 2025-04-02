#include "QuickSort.h"
#include <memory>
#include <iostream>
#include <vector>

int QuickSort::partition(const std::vector<int>& vec, const int& inicio, const int& fim, std::shared_ptr<QuickSort> ptr) {

	int meio = (inicio + fim) / 2;
	int pivo = vec[meio];
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < pivo) {
			ptr->vetorMenor.reserve(10);
			ptr->vetorMenor.emplace_back(vec[i]);
		}
	}

	for (const int &i : ptr->vetorMenor) {
		std::cout << i;
	}

	return 1;
}


void QuickSort::quickSort(const std::vector<int>& vec, const int& inicio, const int& fim, std::shared_ptr<QuickSort> ptr) {
	if (inicio < fim) {
		int partitionIndex = partition(vec, inicio, fim, ptr);
	}
}