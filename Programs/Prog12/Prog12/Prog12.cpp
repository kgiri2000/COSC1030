// Prog12.cpp
// Kamal Giri
// SP2022
// April 15 2022

#include <iostream>
using std::cout;
using std::endl;

#include "Circle.h"
#include "Square.h"
#include "EqTriangle.h"

#include <vector>
using std::vector;
#include <algorithm>
bool compAreas(TwoDShape* left, TwoDShape* right) 
{ 
  return left->getArea() < right->getArea(); 
}
bool compPerimeter(TwoDShape* left, TwoDShape* right) {
    return left->getPerimeter() < right->getPerimeter();
}
int main()
{
  vector<TwoDShape*> ShapeSet(0);
  ShapeSet.push_back( new Circle(2) );
  ShapeSet.push_back( new Square(2) );
  ShapeSet.push_back( new EqTriangle(2) );
  ShapeSet.push_back( new Circle(3) );
  ShapeSet.push_back( new EqTriangle(2.75) );
  cout << "The unsorted shapes are as follows:" << endl;
  for (size_t i = 1; i <= ShapeSet.size(); i++) {
      cout << "(" << i << ") " << ShapeSet[i - 1]->getName()
          << " with perimeter " << ShapeSet[i - 1]->getPerimeter() << endl;
  }
  sort(ShapeSet.begin(), ShapeSet.end(), compPerimeter);
  cout << endl << "The shape list, sorted by perimeter, is as follows:" << endl;
  for (size_t i = 1; i <= ShapeSet.size(); i++) {
      cout << "(" << i << ") " << ShapeSet[i - 1]->getName()
          << " with perimeter " << ShapeSet[i - 1]->getPerimeter() << endl;
  }
  return 0;
}
