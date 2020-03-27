// Clases mas complicadas

#include <iostream>
#include "vectores_rn.h"
using namespace std;

int main(){
	vectores_rn v1;// Ojo que hemos reservado memoria
	vectores_rn v2 = vectores_rn(500);
	double *u = new double[5];
	for (int i=0;i<5;i++) u[i] = i;
	vectores_rn v3 = vectores_rn(5,u);
	delete[] u;// Si redirigieramos el puntero en vez de copiarlo
	// no haria falta hacer esta copia
	v3.print();
}
