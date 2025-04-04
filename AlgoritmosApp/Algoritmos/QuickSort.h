#pragma once
#include <vector>
#include <memory>

class QuickSort
{
public:
	int pivot;
	const std::vector<int> vetorOriginal;
	std::vector<int> vetorMenor;
	std::vector<int> vetorMaior;

	QuickSort() {}
	int partition(std::vector<int>& vec, const int& inicio, const int& fim, std::shared_ptr<QuickSort> ptr);
	void quickSort(std::vector<int>&vec, const int& inicio, const int& fim, std::shared_ptr<QuickSort> ptr);
};