#pragma once
#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"

class NewInsurance
{
private:
	ClientList* ptrClientList;
	string n;
	int iNo, iType, iPrd;

public:
	NewInsurance(ClientList* ptrCl);
	void setClient(); // добавить данные о жильце
};