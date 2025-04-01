#pragma once

class QuickSort
{
public:
	int pivot;
	const std::vector<int> vetorOriginal;
	std::vector<int> vetorMenor;
	std:: vector<int> vetorMaior;
	
	QuickSort() {}
	int partition(std::vector<int>& vec, int inicio, int fim);
	void quickSort(const std::vector<int> &vec);
};

