//String1030.cpp
//Kamal Giri
//April 04, 2022
//COSC 1030 SP2022

#include"String1030.hpp"
#include<cstring>

String1030::String1030(const char* buf) :buffer(0), mysize(0)
{
	setString(buf);
}
String1030::String1030(const String1030& obj) : buffer(0), mysize(0) {
	setString(obj.buffer);
}
String1030::~String1030()
{
	if (buffer != 0)
	{
		delete[] buffer;
	}
}
char& String1030::operator[](int index)
{
	if (index < mysize && index >= 0)
	{
		return buffer[index];
	}
	else {
		return buffer[0];
	}
}
String1030& String1030::operator=(const String1030& obj1)
{
	setString(obj1.buffer);
	return*this;
}
int String1030::getSize(void) const
{
	return mysize;
}
void String1030::setSize(int newmysize)
{
	if (mysize == newmysize || newmysize < 0)
		return;
	if (buffer != 0)
	{
		delete[] buffer;
		buffer = 0;
	}
	mysize = newmysize;
	if (mysize == 0)
	{
		return;
	}
	buffer = new char[mysize + 1];
	if(buffer == 0)
	{
		cerr << "Can't allocate the space" << endl;
		exit(1);
	}
}
const char* String1030::getString(void)
{
	return buffer;
}
void String1030::setString(const char* buf)
{
	if (buf != 0)
	{
		setSize(strlen(buf));
	}
	else
	{
		setSize(0);
	}
	if (mysize > 0)
	{
		for (int i = 0; i < mysize; i++)
		{
			buffer[i] = buf[i];
		}
		buffer[mysize] = '\0';
	}
}