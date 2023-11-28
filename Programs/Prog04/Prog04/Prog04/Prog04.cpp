#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int myPrompt(void);
int mySum(int input1);
int myFact(int input1);
int myMod(int input1);
void myPrint(int result, int input1);

int main()
{
	int input1, result;
	input1 = myPrompt();
}

int myPrompt(void)
{
	int SENTINEL(-9999);
	int input1;
	int result;

	cout << "Enter the non-negative integer(-9999 to end): ";
	cin >> input1;

	while (input1 > SENTINEL && input1 != SENTINEL)
	{
			result = mySum(input1);
			result = myFact(input1);
			result = myMod(input1);

		cout << "\nEnter the non-negative integer(-9999 to end): ";
		cin >> input1;
	}
	return input1;

}
int mySum(int input1)

{

	if (input1 >= 10 && input1 <= 45)
	{
		
		int result = 0;
		int value2 = input1;
		for (int i = 1; i <= value2; value2--)
		{
			result += value2;
		}
		myPrint(result, input1);
		return result;
	}

}

int myFact(int input1)
{
	int result = 1;
	int value1 = input1;
	if (input1 == 0)
	{
		result = 1;
		myPrint(result, input1);
		return result;

	}
	else if (value1 < 10)
	{
		for (int i = 1; i < value1; value1--)
		{
			result = result * value1;
		}
		myPrint(result, input1);
		return result;
		
	}
}

int  myMod(int input1)

{
	int result;
	if (input1 > 45)
	{
		result = input1 % 13;
		myPrint(result, input1);
		return result;
	}
}

void myPrint(int result, int input1)
{
	if (input1 >= 10 && input1 <= 45)
	{
		cout << "\nThe sum from 1 to " << input1 << " is: " << result << endl;
	}
	if (input1 >= 0 && input1 < 10)
	{
		cout << "\n The  produt from  1 to  " << input1 << " is: " << result << endl;
	}
	if (input1 > 45)
	{
		cout << "\n The  remainder of " << input1 << "/13 is: " << result << endl;
	}

}

