//Prog02.cpp
//Kamal Giri
//COSC 1030 SP 2022
//Jan 25 2022
//Programming Assignment 02

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int value1, value2; 
	int i=-9999; 
	int temul=1; // Variable to store Temporary product of the integers

	cout << "Enter the first integer "<<i<<" to end:" <<endl;
	cin >> value1;



	cout << "Enter the value of second integer " <<i<<" to end:"<< endl;
	cin >> value2;

	int input1 = value1;
	int input2 = value2;



	if (value1 <= value2 && value1>i && value2>i)
	{
		
		while (i<value2) 
		{
			i = value1;
			temul = temul * (value1);
			
			value1++;

		}


		
		cout << "The product of integers in the bounded interval " << input1 << " to " << input2 << " is " << temul << "" << endl;


	}
	else if (value2 < value1 && value1 > i && value2 > i)
	{
		while (i < value1)
		{
			i = value2;
			temul = temul * (value2);

			value2++;

		}
		cout << "The product of integers in the bounded interval " << input2 << " to " << input1 << " is " << temul << "" << endl;
		
	}
	else 
	{
		cout << "Error!" << endl;
	}
	
	return 0;
}