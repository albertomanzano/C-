// Metodos de la clase
#include <iostream>
#include "vectores_rn.h"
using namespace std;

vectores_rn::vectores_rn(int dim){
	cout<<"(1)"<<endl;
	if (dim!=0){
		this->n=dim;
		this->v=new double[this->n];
	}
	else{
	this->n=0;
	this->v=nullptr;
	}
}
vectores_rn::vectores_rn(int dim, double *w){
	this->n=dim;
	this->v=new double[this->n];
	for (int i=0;i<n;i++)
		(this->v)[i] = w[i];
}

vectores_rn::~vectores_rn(){
	cout<<"Despejando memoria"<<endl;
	if (this->v!=nullptr) delete[] this->v;
}

void vectores_rn::print(void){
for (int i=0;i<this->n;i++)
	cout<<this->v[i]<<endl;

}
