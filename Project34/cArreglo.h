#pragma once
#include "Agregar.h"
#include <conio.h>

using namespace std;
using namespace System::Drawing;


class cArreglo {
private:
	cAgregar **vector;
	int N;

	int *Posx;
	int *Posy;
public:
	~cArreglo();
	cArreglo();

	void Agregar(cAgregar *dato,int Cant);
	void Hasse(Graphics^g);
	void Linea(Graphics ^g);

	int GET_NumeroConjunto(int indice);
	int GET_NumeroNivel(int indice);
	int GET_CantidadNivel(int indice);

	int GET_N();

	int GET_Posx(int indice);
	int GET_Posy(int indice);
};


cArreglo::cArreglo() {
	N = 0;
	vector = new cAgregar*[N];
}
cArreglo::~cArreglo() {
	delete vector;
	delete Posx;
	delete Posy;
}

void cArreglo::Agregar(cAgregar *dato, int Cant) {
	for (int i = 0; i < Cant; i++) {
		cAgregar**aux = new cAgregar*[N + 1];
		for (int j = 0; j < N; j++)
			aux[j] = vector[j];
		aux[N] = dato;
		N = N + 1;
		if (vector != NULL)
			delete vector;
		vector = aux;
	}
}

void cArreglo::Hasse(Graphics ^g) {

	int y = 0;
	int yy = 15 + 7;
	int calcular;
	int auxx;

	Posx = new int[N];
	Posy = new int[N];

	Font ^mifuente = gcnew Font("Arial Black", 10);

	int mayor = GET_NumeroNivel(0);

	for (int i = 0; i < N; i++) {
		if (mayor < GET_NumeroNivel(i)) {
			mayor = GET_NumeroNivel(i);
		}
	}

	for (int i = mayor+1; i >= 0; i--) {

		int x = g->VisibleClipBounds.Width;
		auxx = 0;

		for (int j = 0; j < N; j++) {

			if (i == GET_NumeroNivel(j)) {
				
				calcular = GET_CantidadNivel(j);
				auxx++;
				g->DrawString("" + GET_NumeroConjunto(j), mifuente, Brushes::Red, (x / 2) - ((calcular - (auxx * 2) - 1) * 20), y);
				g->FillEllipse(Brushes::DarkBlue, (x / 2) - ((calcular - (auxx * 2) - 1) * 20), y + 15, 10, 10);
				Posx[j] = (x / 2) - ((calcular - (auxx * 2) - 1) * 20) + 5;
				Posy[j] = yy;
			}
		}

		yy = yy + 20;
		y = y + 20;
	}
}

void cArreglo::Linea(Graphics ^g) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (GET_NumeroNivel(i)+1 == GET_NumeroNivel(j)) {
				if(GET_NumeroConjunto(j) % GET_NumeroConjunto(i) == 0)
				g->DrawLine(Pens::Black, Posx[i], Posy[i], Posx[j], Posy[j]);
			}
		}
	}
}

int cArreglo::GET_N() { return N; }

int cArreglo::GET_NumeroConjunto(int indice) {
	return vector[indice]->GET_ArregloConjunto(indice);
}
int cArreglo::GET_NumeroNivel(int indice) {
	return vector[indice]->GET_ArregloNivel(indice);
}
int cArreglo::GET_CantidadNivel(int indice) {
	return vector[indice]->GET_CantidadNivel(indice);
}

int cArreglo::GET_Posx(int indice) { return Posx[indice]; }
int cArreglo::GET_Posy(int indice) { return Posy[indice]; }