
//Prog07.cpp
//Kamal Giri
//COSC 1030 SP 2022
//Programming Assignment 07
//04 Mar 2022

#include<iostream>
#include<string>
#include<fstream>

using std::ofstream;
using std::ifstream;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;


struct Employee {

	int id;
	char department[25];
	float hours;
};

int main()
{
	Employee info;
	string filename1, filename2;
	float t_hours(0);
	int counter(0);
	float average=0;
	ifstream iFile;
	ofstream oFile;

	cout << "Enter the input file:";
	getline(cin, filename1);
	cout << "Enter the output file:";
	getline(cin, filename2);
	iFile.open(filename1);
	oFile.open(filename2, std::ios::app);
	
	while (!(iFile && oFile))
	{
		iFile.clear();
		iFile.close();
		oFile.clear();
		oFile.close();
		cout << "Enter the input file:";
		getline(cin, filename1);
		cout << "Enter the output file:";
		getline(cin, filename2);
		iFile.open(filename1);
		oFile.open(filename2, std::ios::app);
	}
	

	iFile.read(reinterpret_cast<char *>( &info), sizeof(info));
	while (!iFile.eof())
	{
		if (info.id == 0)
		{
			break;	
		}
		else
		{
			t_hours += info.hours;
			counter++;
			average = t_hours / counter;
			iFile.read(reinterpret_cast<char*>(&info), sizeof(info));
		}
	}

	cout << "Process was succesfully done." << endl;
	

	oFile << filename1<<": " <<counter << " employees" << endl;
	oFile << "Total hours: " << t_hours << ", " << "Average per employee: "
		<< average <<" hours."<< endl<<endl;

	//closing the files
	iFile.close();
	oFile.close();
	return 0;
}



	