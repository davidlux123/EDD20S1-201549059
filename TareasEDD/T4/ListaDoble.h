#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nodo
{

private:

	Nodo* next;
	Nodo* before;
	char dato;

public:

	Nodo(char Char)
	{
		next = 0;
		before = 0;
		dato = Char;
	}

	Nodo* getNext() { return next; }
	void setNext(Nodo* n) { next = n; }

	Nodo* getBefore() { return before; }
	void setBefore(Nodo* n) { before = n; }

	char getDato() { return dato; }
	void setDato(char Char) { dato = Char; }

};

class ListaDoble
{

private:

	Nodo* first;
	Nodo* last;
	bool isEmpty() { return first == 0; }

public:

	ListaDoble() {

		first = 0;
		last = 0;
	}

	void addFirst(char Char);
	void removeLast();
	Nodo* searchWord(string word);

};

void ListaDoble::addFirst(char Char)
{
	Nodo* nvo = new Nodo(Char);

	if (isEmpty())
	{
		first = nvo;
		last = nvo;
	}
	else
	{
		nvo->setNext(first);
		first->setBefore(nvo);
		first = nvo;
	}
}

void ListaDoble::removeLast()
{
	if (isEmpty())
	{
		cout << "\n\n Error: No puedes remover datos porque la lista esta vacia\n\n";
	}
	else
	{
		if (last->getBefore() != NULL) {

			Nodo* remover = last;
			last = last->getBefore();
			last->setNext(0);
			remover->setBefore(0);

		}
		else
		{
			last = 0;
			first = 0;
		}


	}
}

Nodo* ListaDoble::searchWord(string word)
{
	string Word = "";

	Nodo* aux = first;

	while (aux != 0) {

		if (aux->getDato() == word[0]) {

			Nodo* temp = aux;

			for (int i = 1; i < word.length & aux != 0; i++) {

				if (aux->getDato() == word[i]) {

					Word += aux->getDato();

					aux = aux->getNext();
				}

			}

			if (Word == word)
			{
				return temp;
			}
			else
			{
				Word = "";
			}

		}

		aux = aux->getNext();

	}

}
