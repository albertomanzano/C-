#include <iostream>
#include "clase4.h" // Se sustituye la linea por el contenido del archivo
// El problema es que aparece duplicado
using namespace std;

int main(){
	Punto p1;// Inicializa las variables aunque no nos demos cuenta
		// Equivalente a Punto p1 = Punto();
	Punto p2 = Punto(3,4);
	Punto p3 = Punto(p2);


	p2.print();
	p1.set(10,10);
	p1.print();
}

