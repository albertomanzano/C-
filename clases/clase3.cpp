#include <iostream>
#include "header.h"

// Codigo inline ocupa mas memoria pero es mas rapida
// Para que sea eficaz se tiene que llamar a la funcion 
// muchas veces. Como restriccion el codigo tiene que ser muy cortito

using namespace std;

double cuadrado(double x = 1);
// Si no indico nada toma como variable 1
// No se hace en la funcion
double cuadrado_ref(double &x);
int cuadrado_ref(int &x);
void permutar(double &x, double &y);
void init(double *v,int &n);
void init2(double *v,int &n);
void init3(double *v,int &n);
void print(double *v,int &n);
double Vol(int l, int a=3,int h=4);
// Cuando llamamos a la funcion no podemos hacer:
// Vol(2,h=6) hay que respetar el orden

int main(){
double a = 10;
cout<<cuadrado(a)<<endl;// Machaca la copia
cout<<a<<endl;// No ha cambiado el valor
cout<<cuadrado_ref(a)<<endl;// Actúa sobre la variable a (no la copia)
// No hace falta indicar si es el puntero o la variable
// El operador esta sobrecargado
double b = 5;
cout<<endl;
cout<<"Al principio el valor de a: "<<a<<"b: "<<b<<endl;
cout<<"Haciendo permutacion"<<endl;
permutar(a,b);
cout<<"Ahora a: "<<a<<"b: "<<b<<endl;
cout<<endl;

//Inicializamos un vector
cout<<"Inicializamos un vector y lo imprimimos"<<endl;
int n=2;
double *v = new double[n];
init(v,n);
print(v,n);
delete[] v;
cout<<endl;

//Hacemos un ejemplo de scoping variable
double *w;
init2(w,n);
print(w,n);
init3(w,n);
cout<<endl;

// Hacemos un ejemplo de llamada a fcion
int l=1;
cout<<"El volumen es: "<<Vol(1)<<endl;
cout<<endl;
// Ejemplo de usar cabeceras con funcion inline
a = 20;
b = 30;
cout<<"El mayor de a y b es"<<maximo(a,b)<<endl;
cout<<endl;
}

double cuadrado(double x){
/* Cuando paso un argumento de esta manera
se hace una copia del mismo, esto puede llevar 
a realizar copias demasiado grandes*/
x = 10.0;// Machacamos la COPIA
return x*x;
}

double cuadrado_ref(double &x){
// No hace falta indicar que vamos a usar su valor *x

return x*x;
}
int cuadrado_ref(int &x){
// No hace falta indicar que vamos a usar su valor *x

return x*x;
}

void permutar(double &x, double &y){
double temp;
temp = x;
x = y;
y = temp;
}

void print(double *v,int &n){
cout<<"[";
for (int i=0;i<n;i++) cout<<" "<<v[i];
cout<<"]"<<endl;
}
void init(double *v,int &n){
for (int i=0;i<n;i++) v[i] = 2*i;
}
void init2(double *v,int &n){
// Estoy apuntando la COPIA hacia una nueva dirección
// Ya no hacemos la referencia a w
v = new double[2];
for (int i=0;i<n;i++) v[i] = 2*i;
print(v,n);
delete[] v;
}
void init3(double *v,int &n){
// Estoy apuntando la COPIA hacia una nueva dirección
// Ya no hacemos la referencia a w
v = new double[2];
for (int i=0;i<n;i++) v[i] = 2*i;
print(v,n);
delete[] v;
}
double Vol(int l,int a,int h){
	return l*a*h;
}

