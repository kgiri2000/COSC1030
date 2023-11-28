// ThreeDVec.cpp
// Kamal Giri
// COSC1030
// Program 13

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cmath>
#include"ThreeDVec.h"

ThreeDVec::ThreeDVec()
{
	x = 0;
	y = 0;
	z = 0;
}

ThreeDVec::ThreeDVec(double xc, double yc, double zc)
{
	x = xc;
	y = yc;
	z = zc;
}
//Copy constructor
/*
ThreeDVec::ThreeDVec(ThreeDVec& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
}
*/

void ThreeDVec::setX(double xc)
{
	x = xc;
}
void ThreeDVec::setY(double yc)
{
	y = yc;
}
void ThreeDVec::setZ(double zc)
{
	z = zc;
}

double ThreeDVec::getX() const
{
	return x;
}
double ThreeDVec::getY() const
{
	return y;
}
double ThreeDVec:: getZ() const
{
	return z;
}

//operator overloading(+ operator)
ThreeDVec ThreeDVec::operator + (ThreeDVec& rhs)
{

	ThreeDVec temp;
	temp.x = x + rhs.x;
	temp.y = y + rhs.y;
	temp.z = z + rhs.z;
	
	return temp;

}

double ThreeDVec::mag()
{
	double mag;
	mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return mag;
}
//Dot product

double ThreeDVec::operator*(ThreeDVec& rhs) 
{
	double dot;
	dot = x * rhs.x + y * rhs.y + z * rhs.z;
	return dot;
}

//Cross Product

ThreeDVec& ThreeDVec::operator^(ThreeDVec& rhs) 
{
	
	ThreeDVec tmp;
	tmp.x = y * rhs.z - z * rhs.y;
	tmp.y = z * rhs.x - x * rhs.z;
	tmp.z = x * rhs.y - y * rhs.x;
	return tmp;

	
	

}

// overloading = operator.
/*ThreeDVec ThreeDVec:: operator = (ThreeDVec& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	return *this;
}
*/

 istream& operator >>(istream& in, ThreeDVec& rhs) {

	 in >> rhs.x;
	 in >> rhs.y;
	 in >> rhs.z;

	 return in;
}
ostream& operator<<(ostream& os, const ThreeDVec& rhs)
{
	os << "( " << rhs.getX() << " , " << rhs.getY() << " , " << rhs.getZ() << " )" << endl;
	return os;
}