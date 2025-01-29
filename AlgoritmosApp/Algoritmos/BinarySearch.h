#pragma once
#include <string.h>
#include <iostream>
#include <vector>

#define MAX 100

class BinarySearch
{
public:
	int alto, baixo, meio, chute, numero, posicao;
	std::vector<int> vetor;
	int PesquisaBinaria(const std::vector<int> vetorOrdenado, int chute);
	void PegaNumero();
	//std::vector<int> GeraVetor(std::vector<int> vet);
};

