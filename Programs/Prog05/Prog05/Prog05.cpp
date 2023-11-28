#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>

using std::setprecision;
using std::setfill;
using std::setw;

#include<climits>
#include<cfloat>

const int TABSIZE(15);
const int TABSIZE2(8);
const int TABSIZE3(TABSIZE + 5);
const int DOUBLE_PREC(DBL_DIG);

void displayTop(void);
int promptForInput(void);
double pieValue(int max_n);
void displayResult(double pie);

int main()
{
	cout << "Computing pi Series Summation by ML Formula" << endl;
	displayTop();
	int max_n;
	double pie;
	max_n = promptForInput();
	if (max_n == 0)
	{
		cout << "Approximation of pi is " <<fixed<< setprecision(DOUBLE_PREC) << 4.0 << endl;
	}
	else
	{
		pie = pieValue(max_n);
		displayResult(pie);
	}
	return 0;
}
int promptForInput(void)

{
	int max_n;
	do {
		cout << "Enter the maximum value of k in truncated series: ";
		cin >> max_n;

	} while (max_n < 0);

	return max_n;
}
void displayTop(void)
{
	cout << setfill('=') << setw(TABSIZE) << "="
		<< setfill('+') << setw(TABSIZE2) << "+"
		<< setfill('=') << setw(TABSIZE3) << "=" << endl;
	return;
}

double pieValue(int max_n)
{
	double base = -1.0;
	double power = 1.0;
	double bottom = 1.0;

	double pie = 1.0;

	for (int i = 1; i <= max_n; i++)
	{
		power = power * base;
		bottom = (2 * (static_cast<double>(i)) + 1);
		pie += (power / bottom);
	}
	return pie;

}

void displayResult(double pie)
{
	cout << "Approximation of pi is " <<fixed<< setprecision(DOUBLE_PREC) << 4.0 * pie << endl;
	return;
}