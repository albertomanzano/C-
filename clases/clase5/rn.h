#ifndef __vecrn_h__
#define __vecrn_h__

class Rn{

private:
	static int veccount;
protected:
	int dim;// Dimension
	double* v;// Puntero al vector
public:
	Rn(int dim);// Constructor
	~Rn();// Destructor

	int numVec();
	int getDim();
	double Norm2();// Norma 2 del vector
};

#endif
