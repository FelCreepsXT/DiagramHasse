#pragma once
#include "String.h"

using namespace std;
using namespace System::Drawing;

class cAgregar {
private:
	int *arregloConjunto;
	int contador;

	int *arregloMCD;
	int MCD;

	int Nivel;
	int *auxiliar;
	int *arregloNivel;

	int *CantidaNivel;
	int determinarNivel;

public:
	cAgregar();
	~cAgregar();

	void SET_Contador(int numero);
	void CrearArregloConjunto(int numero);
	int GET_ArregloConjunto(int indice);
	int GET_Contador();

	void SET_MCD(int numero);
	void CrearArregloMCD(int numero);
	int GET_ArregloMCD(int indice);
	int GET_MCD();

	void UsarAuxiliar();
	void AgregarNiveles();
	int GET_ArregloNivel(int indice);

	void ArregloCantidadNivel();
	int GET_CantidadNivel(int indice);
};

cAgregar::cAgregar() {
	contador = 0;
	MCD = 0;
	Nivel = 0;
	determinarNivel = 0;
}
cAgregar::~cAgregar() {
	delete arregloConjunto;
	delete arregloMCD;
	delete arregloNivel;
	delete auxiliar;
	delete CantidaNivel;
}

void cAgregar::SET_Contador(int numero) {
	for (int i = 0; i < numero; i++)
		if (numero % (i + 1) == 0)
			contador++;
}

void cAgregar::CrearArregloConjunto(int numero) {
	arregloConjunto = new int[contador];
	int determinar = 0;

	for (int i = 0; i < numero; i++)
		if (numero % (i + 1) == 0) {
			arregloConjunto[determinar] = (i + 1);
			determinar++;
		}
}

void cAgregar::SET_MCD(int numero) {
	for (int i = 0;i < numero;i++) {
		if (numero % (i + 1) == 0 && numero != 1 && i != 0) {
			numero = numero / (i + 1);
			MCD++;
			i = 0;
		}
	}
}

void cAgregar::CrearArregloMCD(int numero) {
	arregloMCD = new int[contador];
	int determinarMCD = 0;
	for (int j = 0; j < numero; j++) {
		if (numero % (j + 1) == 0 && numero != 1 && j != 0) {
			numero = numero / (j + 1);
			arregloMCD[determinarMCD] = (j + 1);
			determinarMCD++;
			j = 0;
		}
	}
}

void cAgregar::UsarAuxiliar() {
	auxiliar = new int[contador];
	for (int i = 0; i < contador; i++)
		auxiliar[i] = arregloConjunto[i];
}

void cAgregar::AgregarNiveles() {
	arregloNivel = new int[contador];
	int especifica = 0;
	for (int i = 0; i < contador; i++) {
		Nivel = 0;
		for (int j = 0; j < MCD; j++) {
			if (auxiliar[i] % arregloMCD[j] == 0) {
				auxiliar[i] = (auxiliar[i] / arregloMCD[j]);
				especifica++;
				Nivel++;
			}
		}
		arregloNivel[i] = Nivel;
	}
}

int cAgregar::GET_ArregloNivel(int indice) {
	return arregloNivel[indice];
}

void cAgregar::ArregloCantidadNivel() {
	CantidaNivel = new int[contador];
	int calcular = 0;
	int determinar = 0;


	for (int i = 0; i < contador; i++) {
		calcular = 0;

		for (int j = 0; j < contador; j++) {
			if (arregloNivel[i] == arregloNivel[j]) {
				calcular++;
			}
		}

		CantidaNivel[determinar] = calcular;
		determinar++;
	}
}

int cAgregar::GET_Contador() {
	return contador;
}

int cAgregar::GET_CantidadNivel(int indice) {
	return CantidaNivel[indice];
}

int cAgregar::GET_ArregloMCD(int indice) {
	return arregloMCD[indice];
}

int cAgregar::GET_ArregloConjunto(int indice) {
	return arregloConjunto[indice];
}

int cAgregar::GET_MCD() {
	return MCD;
}