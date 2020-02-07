#pragma once
#include "Estudiante.h"

class Nodo
{
private:

	Nodo* siguiente;
	Estudiante* estudiante;

public:

	Nodo(Estudiante* Estudiante)
	{
		estudiante = Estudiante;
	}

	Nodo* getSiguiente() { return siguiente; }
	void setSiguiente(Nodo* Siguiente) { siguiente = Siguiente; }

	Estudiante* getEstudiante() { return estudiante; }
	void setEstudiante(Estudiante* Estudiante) { estudiante = Estudiante; }

};

class ListaEstudiantes
{

private:

	Nodo* root;

public:

	ListaEstudiantes()
	{
		root = NULL;
	}

	void insertar(long carne, string nombe)
	{
		Estudiante* nvoEstudiante = new Estudiante(carne, nombe);

		Nodo* nvoNodo = new Nodo(nvoEstudiante);

		if (root == NULL)
		{
			root = nvoNodo;
		}
		else
		{
			nvoNodo->setSiguiente(root);
			root = nvoNodo;

		}

	}

	Nodo* buscar(int carnet)
	{
		Nodo* aux = root;

		while (aux != NULL)
		{
			if (aux->getEstudiante()->getCarne == carnet)
			{
				return aux;
			}

		}

	}

	void Eliminar(Nodo* nodo)
	{
		if (nodo == root)
		{
			root == NULL;
		}
		else
		{
			nodo->setSiguiente(NULL);
		}

	}

};


