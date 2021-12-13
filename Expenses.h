#pragma once

#include "Clinic.h"
#include "Client.h"

class Expenses
{
public:
	int month, day; 
	string provider; 
	string description;
	float amount;
	Expenses()
	{
	}
	Expenses(int m, int d, string pr, string des, float a) : month(m), day(d), provider(pr), description(des), amount(a)
	{
	}
};