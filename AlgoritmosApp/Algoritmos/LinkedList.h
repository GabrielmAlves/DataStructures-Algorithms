#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node* head;
public:
	void InsereNoFinal(int valor);
	LinkedList() { head = nullptr; }
	void ImprimeLista();
};

