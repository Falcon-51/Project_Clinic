#include <iostream>
#include "Clinic.h"
#include "Client.h"


////////////////методы класса Tenant///////////////////////
//в конструкторе задаём имя жильца и номер комнаты

Client::Client(string n, int iNo, int iType, int iPrd) : name(n), insuranceNumber(iNo), insuranceType(iType), insurancePeriod(iPrd)
{
	/* тут пусто */
}

//---------------------------------------------------------
Client::~Client() // деструктор
{
	/* тут тоже пусто */
}
