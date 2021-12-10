#include <iostream>
#include "Clinic.h"


void getaLine(string& inStr)
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n');
	inStr = temp;
}

char getaChar()
{
	char ch = cin.get();
	cin.ignore(80, '\n');
	return ch;
}