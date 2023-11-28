#include<fstream>
#include<iostream>
#include<string>

using std::ifstream;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    string fileName;
    ifstream inFile;

    cout << "Please enter a filename: ";

    //allows use of string instead of c-string
    getline(cin, fileName);

    inFile.open(fileName);

    if (!inFile) {
        cerr << "Could not open: " << fileName << endl;
        return 1;
    }
}