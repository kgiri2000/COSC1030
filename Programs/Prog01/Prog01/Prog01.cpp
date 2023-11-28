// Prog01.cpp
// Kamal Giri
// COSC 1030 SP 2022 Section 01
// Programming Assignment 01
// Jan 21 2022

#include<iostream>

using namespace std;

int main()
{
	int num1,num2,num3,num4,sum;

	cout << "INPUT THE FIRST NUMBER:" << endl;

	cin >> num1;

	cout << "INPUT THE SECOND NUMBER:" << endl;

	cin >> num2;

	cout << "INPUT THE THIRD NUMBER:" << endl;

	cin >> num3;

	cout << "INPUT THE FOURTH NUMBER:" << endl;

	cin >> num4;

	sum = num1 + num2 + num3 + num4;

	
	cout << "The sum of " << num1<< ", " << num2 << ", " << num3 << " and " << num4 << " is " << sum << "." << endl;

}