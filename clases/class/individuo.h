#include <iostream>
using namespace std;

#ifndef INDIVIDUO_C
#define INDIVIDUO_C
class Individuo{
private:
	double time;
	double speed;
	double x;
	double y;
public:
	Individuo();
	Individuo(double t,
		  double s,
		  double xpos,
		  double ypos);

	double get_speed();
	double get_time();
	double get_x();
	double get_y();

	void set_speed(double vel);
	void set_time(double time);
	void set_x(double xpos);
	void set_y(double ypos);

	void move(void);
};
#endif
