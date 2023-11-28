// ThreeDVec.h
// Kamal Giri
// COSC1030
// Program 13

#ifndef THREEDVEC
#define THREEDVEC
#include<iostream>
using std::ostream;
using std::istream;
class ThreeDVec
{
private:
	double x, y, z;
public:
	ThreeDVec();
	ThreeDVec(double xc, double yc, double zc);

	//copy constructor
	//ThreeDVec(ThreeDVec&);

	//Setter Functions
	void setX(double xc);
	void setY(double yc);
	void setZ(double zc);

	//Getter Functions

	double getX() const;
	double getY() const;
	double getZ() const;

	//operator overloading function
	ThreeDVec operator + (ThreeDVec&);

	//magnitude function
	double mag();

	//dot
	double operator*(ThreeDVec&) ;

	//cross
	ThreeDVec& operator^(ThreeDVec&) ;

	
	friend istream& operator >>(istream&, ThreeDVec&);
	friend ostream& operator<<(ostream&, const ThreeDVec&);
};

#endif 
