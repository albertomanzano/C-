#include "rn.h"
#include "math.h"
#include <iostream>
int Rn::veccount = 0;

Rn::Rn(int dim){
	this->dim = dim;
	this->v = new double[dim];
	for (int i=0;i<dim;i++) this->v[i] = 1;
	std::cout<<"Creado un vector"<<std::endl;
	Rn::veccount++;
}

Rn::~Rn(){
	delete[] this->v;
	std::cout<<"Destruido un vector"<<std::endl;
	Rn::veccount--;
}
int Rn::numVec(){
	return Rn::veccount;
}

int Rn::getDim(){
	return this->dim;
}

double Rn::Norm2(){
	double norma=0;
	for (int i=0;i<this->dim;i++)
		norma+=(this->v[i]*this->v[i]);

	return sqrt(norma);
	std::cout<<"Calculada una norma"<<std::endl;
}
