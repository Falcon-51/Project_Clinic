#pragma once

#include "Clinic.h"
#include "Client.h"

class SeeDoctor
{
public:
	int month, day; 
	int category, service; 
	int insNo; 
	SeeDoctor()
	{ 
	}
	SeeDoctor(int m, int d, int c, int s, int p) : month(m), day(d), category(c),service(s), insNo(p)
	{
	}

	int getDoctor(); // возвращает тип страховки
	int getService(); // возвращает тип страховки
};