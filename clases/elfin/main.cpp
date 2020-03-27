#include "punto.h"
#include "elfin.h"
#include "P1.h"
#include <iostream>
using namespace std;

int main(){
punto* p0 = new punto(0,0);
punto* p1 = new punto(1,0);
punto* p2 = new punto(0,1);
punto* p3 = new punto(1,1);

Elfin elf(4);

elf.vertices[0] = p0;
elf.vertices[0] = p1;
elf.vertices[0] = p2;
elf.vertices[0] = p3;
cout<<"Coordenada x"<<elf.vertices[0]->x<<endl;

P1 T(p0,p1,p2);
}
