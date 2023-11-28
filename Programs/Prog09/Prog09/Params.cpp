//Params.cpp
// Kamal Giri
// COSC 1030 SP 2022 
// Program 09
// March 24 2022

#include "Params.hpp"
void LLParams(const double x[], const double y[], int size, double& m, double& n)
{
	double temsum = 0.0;
	double temulxy;
	double temsumx = 0.0;
	double temsumy = 0.0;
	double temsumx2 = 0.0;
	double temsumy2 = 0.0;
	double temsumsqx = 0.0;
	double temsumxy;

	for (int i = 0; i < size; i++)
	{
		temulxy = x[i] * y[i];
		temsum += temulxy;
		temsumx += x[i];
		temsumy += y[i];
		temsumsqx += (x[i] * x[i]);
	}
	temsumxy = temsumx * temsumy;
	double nume = (size * temsum - temsumxy);
	double denume = (size * temsumsqx - (temsumx * temsumx));
	m = nume / denume;
	n = (temsumy - m * temsumx) / size;
	return;
}