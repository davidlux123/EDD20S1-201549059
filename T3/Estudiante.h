#pragma once
#include <string>

using namespace std;

class Estudiante
{

private:

	long carne;
	string nombre;

public:

	Estudiante(long Carne, string Nombre)
	{
		carne = Carne;
		nombre = Nombre;
	}

	long getCarne() { return carne; }
	void setCarne(long Carne) { carne = Carne; }

	string getNombre() { return nombre; }
	void setNombre(string Nombre) { nombre = Nombre; }

};

