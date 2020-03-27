// Una dimension, -lap(T) = f(x) = 0.0
#include <iostream>
#include "omp.h"
using namespace std;

// Para referirnos al indice de las matrices
inline int I(int x,int y,int n){
	return x*n+y;
}

// Para imprimir resultados
void print(double *x,int m,int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
			cout<<x[I(i,j,n)]<<" ";
		cout<<endl;
	}
}

// Cambiar direcciones de memoria
void swap(double* &x,double* &y){
	double *aux;
	aux = x;
	x = y;
	y = aux;
}

// Jacobi Ax = b
void jacobi(double* &A,// Matriz a la que se aplica el metodo
	    double* &b,// Vector
	    double* &x,// Resultado
	    int n,// Dimension de la matriz/vector
	    int niter// numero de iteraciones del metodo
	    ){

// Inicializacion del vector auxiliar
double* temporal = new double[n];
double suma;
// Numero de veces que hacemos la iteracion
for (int k = 0; k<niter;k++){
	swap(x,temporal);
	#pragma omp parallel for private(suma)// paralelizar
	for (int i=0;i<n;i++){
		suma = 0;
		for (int j=0;j<n;j++) suma+=A[I(i,j,n)]*temporal[j];
		x[i] = (b[i]+A[I(i,i,n)]*temporal[i]-suma)/A[I(i,i,n)];
	}
}
delete[] temporal;
}


int main(){
// Variables a modificar por el usuario
int n = 5000; // Dimension
double temperatura0 = 0.0;
double temperaturaL = 9.0;

// Creacion e inicializacion de vectores x y b
double *temperatura = new double[n];
for (int i = 0;i<n;i++) temperatura[i] = 1.0;


double *b = new double[n];
for (int i = 0;i<n;i++) b[i] = 0.0;
b[0] = temperatura0;
b[n-1] = temperaturaL;


// Creacion e inicializacion de la matriz A
double* matriz = new double[n*n];
for (int i = 1; i<n-1;i++){
	matriz[I(i,i-1,n)] = 1;
	matriz[I(i,i,n)] = -2;
	matriz[I(i,i+1,n)] = 1;
}
matriz[0] = 1;
matriz[n*n-1] = 1;


// Aplicamos el metodo
jacobi(matriz,b,temperatura,n,10);
}


