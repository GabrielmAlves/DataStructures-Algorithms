#pragma once
class Node
{
public:
	int conteudo;
	Node* proximo;
	Node(int valor) : conteudo(valor), proximo(nullptr) {} // conteudo vai receber um valor int
														  // proximo é inicializado com nullptr para mostrar que não aponta pra outro nó (HEAD -> |conteudo | proximo|)
};

