#pragma once
class Node
{
public:
	int conteudo;
	Node* proximo;
	Node(int valor) : conteudo(valor), proximo(nullptr) {} // conteudo vai receber um valor int
														  // proximo � inicializado com nullptr para mostrar que n�o aponta pra outro n� (HEAD -> |conteudo | proximo|)
};

