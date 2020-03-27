#include "P1.h"
#include "elfin.h"
#include "punto.h"
P1(punto* &p0,punto* &p1,punto* &p2):Elfin(3){
	this->vertices[0] = p0;
	this->vertices[1] = p1;
	this->vertices[2] = p2;
}
