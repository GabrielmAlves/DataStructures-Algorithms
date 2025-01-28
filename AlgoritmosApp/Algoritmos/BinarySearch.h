#pragma once
#include <string.h>
#include <iostream>
#include <vector>

#define MAX 100

class BinarySearch
{
public:
	int alto, baixo, chute, numero, posicao;
	int vetor[MAX];
	int PesquisaBinaria(int vetor[], int chute);
	void PegaNumero();
};

