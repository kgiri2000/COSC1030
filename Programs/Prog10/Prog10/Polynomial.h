// Polynomial.h
//Kamal Giri
// COSC 1030
// Sp 2022
// Program 10
// VERY Incomplete declaration of Polynomial class
// for COSC 1030 Programming Assignment 10
//April 01 2022


#ifndef _POLY_H
#define _POLY_H

#include<iostream>
using std::ostream;
using std::istream;

#include<vector>
using std::vector;

class Polynomial
{

  public:
    Polynomial();
    Polynomial( int deg, const vector<double> coefficients );
    Polynomial( const Polynomial& );
    const Polynomial& operator=( const Polynomial& );
    bool operator==( const Polynomial& ) const;
    double getCoeff(int) const;
    void setCoeff(double n);
    int getIndex() const;
    void setIndex(int deg);
   
    

  private:
    vector<double> coeffs;
    int degree;
    
};

ostream& operator<<( ostream& , const Polynomial& );
istream& operator>>( istream& , Polynomial& );

#endif
