#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node* head;
public:
	LinkedList() { head = nullptr; }
	void InsereNoFinal(int valor);
	void ImprimeLista();
	void DeletaValor(int valor);
};

