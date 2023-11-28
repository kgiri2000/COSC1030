#include<iostream>

using namespace std;

int main()
{
    int f = 7;
    if (3 <= f <= 5)
    {
        f = f + 3;
    }
    else
    {
        f = f + 2;
    }
    cout << f << endl;
}
