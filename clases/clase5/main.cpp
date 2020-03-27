#include <iostream>
#include "rn.h"
#include "r3.h"
using namespace std;

int main(){
double norma;
int dimension;
int numvec;

Rn vector(5);
R3 vec3;
norma = vec3.Norm2();
dimension = vec3.getDim();
numvec = vec3.numVec();

cout<<"Numero de vectores: "<<numvec<<endl;
cout<<"Norma: "<<norma<<endl;
cout<<"Dimension: "<<dimension<<endl;
}
