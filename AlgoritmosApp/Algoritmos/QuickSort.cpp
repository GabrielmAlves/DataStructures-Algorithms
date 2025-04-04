#include "QuickSort.h"
#include <memory>
#include <iostream>
#include <vector>

int QuickSort::partition(std::vector<int>& vec, const int& inicio, const int& fim, std::shared_ptr<QuickSort> ptr) {

	const int meio = (inicio + fim) / 2;
	ptr->pivot = vec[fim];
	int i = (inicio - 1);

	for (int j = inicio; j <= fim - 1; j++) {

		if (vec[j] <= pivot) {
			i++;
			std::swap(vec[i], vec[j]);
		}
	}

	std::swap(vec[i + 1], vec[fim]);

	return (i+1);
}


void QuickSort::quickSort(std::vector<int>& vec, const int& inicio, const int& fim, std::shared_ptr<QuickSort> ptr) {
	if (inicio < fim) {
		int partitionIndex = partition(vec, inicio, fim, ptr);
		quickSort(vec, inicio, partitionIndex - 1, ptr);
		quickSort(vec, partitionIndex + 1, fim, ptr);
	}
}