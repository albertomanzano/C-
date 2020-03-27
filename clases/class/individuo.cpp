#include <iostream>
#include "individuo.h"
using namespace std;

Individuo::Individuo(){
	this->time = 0.0;
	this->speed = 0.0;
	this->x = 0.0;
	this->y = 0.0;
}
Individuo::Individuo(   double t,
			double s,
			double xpos,
			double ypos){
	this->time = t;
	this->speed = s;
	this->x = xpos;
	this->y = ypos;
}
// Getters
double Individuo::get_time(){
	return this->time;
}
double Individuo::get_speed(){
	return this->speed;
}
double Individuo::get_x(){
	return this->x;
}
double Individuo::get_y(){
	return this->y;
}

// Setters
void Individuo::set_time(double t){
	this->time = t;
}
void Individuo::set_speed(double s){
	this->speed = s;
}
void Individuo::set_x(double xpos){
	this->x = xpos;
}
void Individuo::set_y(double ypos){
	this->y = ypos;
}
