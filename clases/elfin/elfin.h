#include "punto.h"

#ifndef ELFIN_H
#define ELFIN_H

class Elfin{
private:

protected:
public:

	int n; // numero de vertices
	punto **vertices;// Array de vertices
	double area;// Area del elemento finito

	Elfin(int n);

	void ComputeArea();
};
#endif
