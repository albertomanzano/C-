#include "template_clases.h"

template <typename T>
Punto<T>::Punto(T x,T y){
	this->x = x;
	this->y = y;
}
template <typename T>
Punto<T>::Punto(){
	this->x = 0;
	this->y = 0;
}
template <typename T>
void Punto<T>::print(){
	cout<<"X: "<<this->x<<" Y: "<<this->y<<endl;
}
template <typename T>
T Punto<T>::getx(){
	return this->x;
}
