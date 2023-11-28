#include<iostream>
#include"Para.h"

using namespace std;

int main()
{
	double xData[] = { 0.0, 1.0, 2.0, 4.0, 5.0, 8.0, 9.0 };
	double yData[] = { -2.5, 3.0, 4.5, 7.0, 9.5, 10.0, 12.5 };
	int size = 7;
	double m = 0;
	double b = 0;
	LLParams(xData, yData, size, m, b);

	cout << "m: " << m << endl;
	cout << "n: " << b;


	return 0;
}