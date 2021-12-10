#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"

class ClientInputScreen
{
private:
	ClientList* ptrClientList;
	string cName;
	int insNumber;
	int insType;
	int insPeriod;

public:
	ClientInputScreen(ClientList* ptrTL) : ptrClientList(ptrTL)
	{
	}
	void setClient();
};