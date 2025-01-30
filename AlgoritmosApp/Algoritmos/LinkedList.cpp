#include "LinkedList.h"
#include "Node.h"
#include <iostream>


void LinkedList::ImprimeLista() {
	Node* temp = head;
	while (temp != nullptr) {
		std::cout << temp->conteudo << " -> ";
		temp = temp->proximo;
	}
	std::cout << "NULL" << std::endl;
}

void LinkedList::InsereNoFinal(int valor) {
	Node* novoNo = new Node(valor);
	if (head == nullptr) {
		head = novoNo; // lista vazia, novo nó
	}
	else {
		Node* temp = head;
		while (temp->proximo != nullptr) {
			temp = temp->proximo;
		}
		temp->proximo = novoNo;
	}
}
