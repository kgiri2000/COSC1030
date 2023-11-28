// MathFuncs.cpp
// Kim Buckner
// COSC 1030
// Lecture 08
// Intro to using C++ Standard Library math functions.

#include <iostream>   // For access to cout and instream manipulators.
using std::cout;
using std::endl;
using std::fixed;
using std::scientific;
#include <cfloat>  // Access to limits of precision.
#include <cmath>  // Access to math functions.
#include <iomanip>  // Access enhanced format manipulators.
using std::resetiosflags;
using std::ios_base;
using std::setprecision;

int main()
{
    const double PI = 4 * atan(1.0); // Arc tangent of 1 is PI/4
    int old_prec;

    cout << "The computed value of PI is: " << PI << endl;
    cout << "That was the C++ default digits of precision.\n" << endl;
    old_prec = cout.precision(DBL_DIG); // DBL_DIG defined in cfloat
    cout << DBL_DIG << " dig" << '\t' << PI << endl;
    cout << "That was setting the precision to DBL_DIG.\n" << endl;
    cout << "X 100" << '\t' << PI * 100 << endl;
    cout << "Now I multiply the answer by 100 and you can see" << endl;
    cout << "the precision just changes the number of digits from 6 to 15." << endl;
    cout << "The answer is not more precise, there are still just 15 digits.\n"
        << endl;

    cout << "pad?" << '\t' << 6.4389 << endl;
    cout << "This is a value with less than 6 digits. No trailing 0s are added.\n";
    cout << endl;

    cout << "Now changing to `fixed' display." << endl;
    cout << "fixed" << fixed << '\t' << PI << endl;
    cout << "X 100" << fixed << '\t' << PI * 100 << endl;
    cout << "The precision now means the number of digits to the right ";
    cout << "of the decimal.\n" << endl;

    cout << "And we can see that all values are 'padded' with 0s to the ";
    cout << "precision." << endl;
    cout << "pad?" << '\t' << 6.4389 << endl;

    cout << "\nNow changing to 'scientific' notation." << endl;
    cout << "sci" << scientific << '\t' << PI << endl;
    cout << "X 100" << scientific << '\t' << PI * 100 << endl;
    cout << "pad?" << '\t' << 6.4389 << endl;
    cout << "And I get exactly 15 digits to the right still." << endl;

    cout << "\nNow we reset to 'default', but still with 15 digits precision."
        << endl;
    cout << "reset" << resetiosflags(ios_base::scientific) << '\t' << PI << endl;

    cout << "\nAnd put the precision back to 6." << endl;
    cout << old_prec << " dig" << setprecision(old_prec) << '\t' << PI << endl;
    cout << "pad?" << '\t' << 6.4389 << endl;


    return 0;
}
