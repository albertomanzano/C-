#include "elfin.h"

Elfin::Elfin(int n){
	this->n = n;
	this->vertices = new punto*[n];
}
void Elfin::ComputeArea(){
	this->area=0;
}
