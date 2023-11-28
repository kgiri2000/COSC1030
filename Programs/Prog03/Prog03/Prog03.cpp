//Prog03.cpp
//Kamal Giri
//COSC 1020 Section 01 
//SP 2022
//Program 03
//Feb 03 2022

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	//Task a
	int input1;
	int sum = 0;
	do
	{
		cout << "Please input an integer greater than or equal to 1: ";
		cin >> input1;

	} while (input1 < 1);

	for (int i = 1; i <= input1; i++) {
		sum = sum + i;
	}
	cout << "\nThe sum of integer from 1 to " << input1 << " is:  " << sum << endl;

	//Task b

	int input2, input3;
	int counter = -1;

	cout << "\n\nPlease input two integers: ";
	cin >> input2;
	cin >> input3;
	int value1 = input2;
	int value2 = input3;


	if (input2 == input3) {
		counter = 0;
	}
	while (input2 > input3) {
		input3++;
		counter++;
	}
	while (input3 > input2) {
		input2++;
		counter++;
	}
	cout << "The interval betweeen "<<value1<<" "<<value2<<" is: " << counter << endl;

	//Task c.

	int input4;
	int power1;
	int temProduct = 1;
	int counter2 = 0;

		
	
	do {
		cout << "\n\nPlease input two integers, the second must be non-negative:";
		cin >> input4;
		cin >> power1;

		
	} while (power1<0);

	do
	{
		if (power1 == 0) {
			temProduct = 1;
			break;
		}

		temProduct = temProduct * input4;
		counter2++;
		

	} while (counter2<power1);

	cout << "\nThe product of " << input4 << "^" << power1 << " is:" << temProduct << endl;

}