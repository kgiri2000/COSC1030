// Polynomial.cpp
// Kamal Giri
// COSC 1030
// SP2022
// April 01 2022

#include "Polynomial.h"
ostream& operator<<(ostream& os, const Polynomial& p1) {
	if (p1.getIndex() != 0)
	{
		int deg = p1.getIndex();
		for (int i = 0; i <= p1.getIndex(); i++) {
			if (i != p1.getIndex()) {
				if (p1.getCoeff(i) > 0) {
					os << "+" << p1.getCoeff(i) << "x^(" << deg << ") ";
				}
				else {
					os << p1.getCoeff(i) << "x^(" << deg << ") ";
				}
			}
			else {
				if (p1.getCoeff(i) > 0) {
					os << "+" << p1.getCoeff(i) << "x^(" << deg << ") ";
				}
				else {
					os << p1.getCoeff(i);
				}
			}
			deg--;
		}
	}
	else {
		os << "empty";
	}
	return os;
}
istream& operator>>(istream& is, Polynomial& p2) {
	int deg;
	double c;
	while (!(is >> deg)) {
		is.clear();
		is.ignore();
	}
	p2.setIndex(deg);
	for (int i = 0; i <= deg; i++) {
		while (!(is >> c)) {
			is.clear();
			is.ignore();
		}
		p2.setCoeff(c);
	}
	return is;
}
Polynomial::Polynomial() {
	degree = 0;
}
Polynomial::Polynomial(int deg, const vector<double> coefficients) {
	setIndex(deg);
	for (int i = 0; i <= degree; i++) {
		coeffs.push_back(coefficients[i]);
	}
}
Polynomial::Polynomial(const Polynomial& p3) {
	degree = p3.getIndex();
	for (int i = 0; i <= degree; i++) {
		coeffs.push_back(p3.getCoeff(i));
	}
}

const Polynomial& Polynomial::operator=(const Polynomial& p4) {
	degree = p4.getIndex();
	return p4;
}
bool Polynomial::operator==(const Polynomial& p5) const {
	bool check = true;
	if (degree == p5.getIndex())
	{
		for (int i = 0; i <= degree; i++) {
			if (coeffs[i] != p5.getCoeff(i))
			{
				check = false;
				break;
			}
		}
	}
	else {
		check = false;
	}
	return check;
}
double Polynomial::getCoeff(int i) const {
	return coeffs[i];
}
int Polynomial::getIndex() const {
	return degree;
}
void Polynomial::setIndex(int deg) {
	degree = deg;
}
void Polynomial::setCoeff(double c) {
	coeffs.push_back(c);
}
