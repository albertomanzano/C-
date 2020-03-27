#include <iostream>
#include <cmath>
using namespace std;
// Si usamos una variable global i=5
// Se puede llamar con ::i
// Revisar uso de static y de &

struct Punto{
double x;
double y;
};// Ojo no olvidarse de ;

struct Rectangulo{
Punto pi;// Punto inferior
Punto ps;// Punto superior
double base;
};/* Queda univocamente determinado
usando dos puntos*/

/*
struct Rect2{
	
}
*/

void print(Punto &p);

int main(){
Punto p;
p.x = 5;
p.y = 10;
print(p);

Rectangulo r;
r.pi.x = 0.0;
r.pi.y = 0.0;
r.ps.x = 1.0;
r.ps.y = 1.0;
r.base = fabs(r.ps.x-r.pi.x);
print(r.pi);

// Cuando trabajamos con punteros a estructuras
// es quivalente poner (*p).x p->x
Punto *otro = new Punto;// Si no inicializamos no podemos llamar a las componentes
otro->x = 2.0;
otro->y = 2.0;

// Vamos a perder memoria pero lo hacemos igualmente
otro = &p;
otro->x = 30.0;
otro->y = 30.0;
print(p);

/*
// Vamos a trabajar con punteros dentro de estructuras
Rect2 r2;
r2.ptos = new Punto[2];
r2.ptos[0].x = 5.0;
r2.ptos[0].y = 5.0;
r2.ptos[1].x = 6.0;
r2.ptos[1].x = 6.0;
// Equivalentemente
(r2.ptos)->x=3.0;// Equivale a la primera linea
(r2.ptos)->y=3.0;// Equivale a la segunda linea
(r2.ptos+1)->x=4.0;
(r2.ptos+1)->y=4.0;
*/
}

void print(Punto &p){
cout<<"Coordenada x: "<<p.x<<" Coordenada y: "<<p.y<<endl;
}


