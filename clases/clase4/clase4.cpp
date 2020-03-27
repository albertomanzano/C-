/* Metodos de la clase punto */

#include "clase4.h"


Punto::Punto(){
	cout<<"(1)"<<endl;
	this->x=0;
	this->y=0;
}

Punto::Punto(double x,double y){
	cout<<"(2)"<<endl;
	this->x = x;
	this->y = y;
}
Punto::~Punto(){
	cout<<"Destructor"<<endl;
}

Punto::Punto(const Punto & other){
	cout<<"(3)"<<endl;
	this->x = other.x;
	this->y = other.y;
}

void Punto::print(){
	cout<<"("<<this->x<<","<<this->y<<")"<<endl;
}

void Punto::set(double x, double y){
	this->x = x;
	this->y = y;
	this->print();
}
