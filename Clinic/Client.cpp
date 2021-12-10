#include <iostream>
#include "Clinic.h"
#include "Client.h"
using namespace std;

// Методы класса Client

Client::Client(string n, int iNo, int iType, int iPrd) : name(n), insNumber(iNo), insType(iType), insPeriod(iPrd)
{
}

Client::~Client()
{
}

string Client::getName()
{
	return name;
}

int Client::getInsNumber()
{
	return insNumber;
}

int Client::getInsType()
{
	return insType;
}

int Client::getInsPeriod()
{
	return insPeriod;
}