// EqTriangle.cpp
// Kamal Giri
// SP2022
// April 15 2022

#ifndef EQTRIANGLE_H
#define EQTRIANGLE_H
#include "TwoDShape.h "
#include "Point.h"

class EqTriangle : public TwoDShape
{
public:

    EqTriangle(double dside = 0, Point refp = Point(0, 0), double dangle = 0)
        : TwoDShape(refp, dangle), side(dside) {
        name = "EqTriangle";
    }

    EqTriangle(const EqTriangle& Eq)
        : TwoDShape(Eq.refpoint, Eq.angle), side(Eq.side)
    {
        name = "circle";
    }

   virtual ~EqTriangle() { }

    virtual void setSide(double dside)
    {
        side = (dside < 0) ? 0 : dside;
    }

    virtual double getSide() const { return side; }

    virtual double getPerimeter() const
    {
        return 3 * side;
    }

    virtual double getArea() const
    {
        return (sqrt(3)/4) * 4 * side * side;
    }

protected:

    double side;
};
#endif

