// Clase de vectores de rn

#include <iostream>
using namespace std;

#ifndef VECTORES_RN_H
#define VECTORES_RN_H
class vectores_rn{
	private:
		int n; // dimension
		double *v; // coordenadas
	public:
		vectores_rn(int n=0);
		vectores_rn(int dim, double *w);
		~vectores_rn();
		void print();

};
#endif
