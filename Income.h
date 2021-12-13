#pragma once

#include "Clinic.h"
#include "Client.h"

class Income
{
public:
	int month, day, type, insNumb, amount;
	Income()
	{
	}
	Income(int m, int d, int t, int n, int a) : month(m), day(d), type(t), insNumb(n), amount(a)
	{
	}
};