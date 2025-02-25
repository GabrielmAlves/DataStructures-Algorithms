#pragma once
#include <vector>

class QuickSort
{
public:
	int pivot;
	vector<int> originalVector;
	vector<int> smallerVector;
	vector<int> biggerVector;

	int partition(vector<int>& vec, int low, int high);
	void quickSort(vector<int> &vec);
};

