#include <iostream>
#include <string.h>
using namespace std;

void print(int *v,int n){
	for (int i = 0;i<n;i++)
		cout<<v[i]<<endl;
}
void print(double *v,int n){
	for (int i = 0;i<n;i++)
		cout<<v[i]<<endl;
}
// Definimos un tipo de dato generico T
template<typename T>
void print2(T *v,int n){
	for (int i = 0;i<n;i++)
		cout<<v[i]<<endl;
}

template<typename T>
T maximo(T a, T b){
	return (a>b)?a:b;
}

char* maximo(char* a,char* b){
	return (strcmp(a,b)>0)?a:b;
}

int main(){
// Ejemplo 1
double *a;
int n = 20;
a = new double[n];
for (int i=0;i<n;i++) a[i] = i;

// Ejemplo 2
int numero1 = 1;
int numero2 = 2;
cout<<maximo(numero1,numero2)<<endl;

//Ejemplo 3
char[] uno = "hola";
char[] dos = "hola juan";
cout<<maximo(uno,dos)<<endl;
}
