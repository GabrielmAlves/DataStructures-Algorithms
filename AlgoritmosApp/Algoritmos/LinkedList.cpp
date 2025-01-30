#include "LinkedList.h"
#include "Node.h"
#include <iostream>


void LinkedList::DeletaValor(int valor) {
	if (head == nullptr) {
		return;
	}
	
	if (head->conteudo == valor) { // valor já é o primeiro conteúdo da lista
		Node* temp = head;
		head = head->proximo; // head vai para o próximo nó
		delete temp;
		std::cout << "O conteudo " << valor << " foi removido.\n\n\nLista atualizada: ";
		return;
	}
	Node* temp = head;

	while (temp->proximo && temp->proximo->conteudo != valor) { // head → [10] → [20] → [30] → [40] → NULL | remover o 30
		temp = temp->proximo;								   // head → [10] → [20] → [40] → NULL | verifica se o conteúdo do próximo nó é igual ao que quero remover
	}														  // temp->proximo vê se não é o último nó, e temp->proximo->data faz o citado acima

	if (temp->proximo) { // próximo nó já é o que deve ser removido
		Node* noDeletado = temp->proximo;
		temp->proximo = temp->proximo->proximo; // muda a referência do ponteiro para o próximo do que vai ser removido
		delete noDeletado;
		std::cout << "O valor " << valor << " foi removido.\n\n\nLista atualizada: ";
		return;
	}

}

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
