// Clase 2 c++

#include <iostream>
using namespace std;


int main(){
double *p = new double; // creo el puntero y reservo el espacio de memoria
*p = 11;

cout<<" Direccion de memoria: "<<p<<endl;
cout<<" Valor almacenado: "<<*p<<endl;
// Creamos ahora una variable d
double d = 12;
p = &d; 
cout<<" Nueva direccion de memoria: "<<*p<<endl;

// En este momento tengo un problema
// La direccio donde apuntaba p ya no la puedo recuperar
// delete p; Esto daría un error porque el comando delete borra
// (libera el espacio) el puntero y el la variable. Como apunta a una
// variable que es estatica no se puede delete ( no puedo liberar ese espacio
// de memoria)



/* Vamos a hacer un swap de memoria
Esto me permite ahorrar mucho tiempo de 
calculo porque no me hace falta hacer copias,
basta con decir que apunte hacia la nueva direccion
de memoria*/

double *q = new double;
// Tenemos que reservar el espacio si no no podemos asignarle un valor
double *r;

*p = 11;
*q = 13;
// Pointer swaping
cout<<"Pointer swaping: "<<endl;
cout<<"En p tenemos: "<<*p<<endl;
cout<<"En q tenemos: "<<*q<<endl;
r = p;
p = q;
q = r;
cout<<"Despues de hacer el swaping:"<<endl;
cout<<"En p tenemos: "<<*p<<endl;
cout<<"En q tenemos: "<<*q<<endl;

// Vamos a hacer lo mismo pero en el caso de vectores
int *v;
v = new int[10];
for (int i=1;i<11;i++)
	v[i] = i;
cout<<"El valor de v[9]: "<<v[9]<<endl;

// Vamos a hacer una matriz con dimension dinamica
int m=2,n=3;

// Creamos el espacio de memoria de la matriz
double **mat;
mat =new double*[m];
for (int i=0;i<m;i++){
	mat[i] = new double[n];
}

// Inicializamos el vector
for (int i=0;i<m;i++){
	for (int j=0;j<n;j++)
		mat[i][j] = i+j;
}

// Printeamos el vector
for (int i=0;i<m;i++){
	for (int j=0;j<n;j++)
		cout<<mat[i][j]<<" ";
	cout<<endl;
}

// Borramos todo lo guardado


return 0;
}

