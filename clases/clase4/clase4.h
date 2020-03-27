/* Definicion de la clase */
#include <iostream>
using namespace std;

#ifndef PUNTO_H
#define PUNTO_H
class Punto{
	private:
		double x;
		double y;
	public:
// El constructor necesita tener el mismo nombre que la clase
// Puede haber tantos como haga falta
// no es de ningun tipo, ni siquiera void
		Punto(); // Constructor por defecto
		Punto(double x, double y);
		Punto(const Punto & other);
		~Punto(); // destructor
		void print();
		void set(double x, double y);
};
#endif
