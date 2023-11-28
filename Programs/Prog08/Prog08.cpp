// Prog08.cpp
// Kamal Giri
// COSC 1030
// 11 Mar 2022
//Enhancing the Execution Time Management

#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setfill;
using std::setw;
#include "FiboImp.h"
#include <windows.h>
const int MAXN(45);
int main()
{
    unsigned long int before, after, diff, result, max, min;
    cout << "Execution time for Fibonacci no. implementions (ms)\n";
    cout << setw(40) << "(ms min --- ms max)" << endl;
    cout << setfill('+') << setw(74) << "+" << endl << setfill(' ');
    cout << setw(4) << "n" << setw(30) << "Recursive"
        << setw(35) << "Iterative" << endl;
    cout << setfill('+') << setw(74) << "+" << endl << setfill(' ');
    for (int n = 0; n <= MAXN; n++) {
        cout << setw(4) << n;
     
        for (int i = 0; i < 6; i++)
        {
            before = GetTickCount64();
            result = FiboRecursive(n);
            after = GetTickCount64();
            diff = after - before;

            if (i == 0)
            {
                max = diff;
                min = diff;
            }
            if (max < diff)
            {
                max = diff;
            }
            if (min > diff)
            {
                min = diff;
            }
        }
 
        
        cout << setw(15) << result <<"  ("<<setw(5)
            << min<<" --- " << setw(7) << max << ")";
        for (int i = 0; i < 6; i++)
        {
            before = GetTickCount64();
            result = FiboIterative(n);
            after = GetTickCount64();
            diff = after - before;
            if (i == 0)
            {
                max = diff;
                min = diff;
            }
            if (max < diff)
            {
                max = diff;
            }
            if (min > diff)
            {
                min = diff;
            }

        }
        
        cout << setw(15) << result << "  (" << setw(3)
            << min <<" --- " << setw(7) << max << ")";
        cout << endl;
    }
    return 0;
}
