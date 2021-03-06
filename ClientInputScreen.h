#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "Income.h"
#include "IncomeRecord.h"

class ClientInputScreen
{
private:
	ClientList* ptrClientList;
	IncomeRecord* ptrIncomeRecord;
	string cName;
	int insNumber;
	int insType;
	int insPeriod;

public:
	ClientInputScreen(ClientList* ptrTL, IncomeRecord* ptrIR) : ptrClientList(ptrTL), ptrIncomeRecord(ptrIR)
	{
	}
	void setClient();
};