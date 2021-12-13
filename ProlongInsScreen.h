#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "Income.h"
#include "IncomeRecord.h"

class ProlongInsScreen
{
private:
	ClientList* ptrClientList;
	IncomeRecord* ptrIncomeRecord;
	int insNumber;
	int insPeriod;

public:
	ProlongInsScreen(ClientList* ptrTL, IncomeRecord* ptrIR) : ptrClientList(ptrTL), ptrIncomeRecord(ptrIR)
	{
	}
	void ProlongIns();
};