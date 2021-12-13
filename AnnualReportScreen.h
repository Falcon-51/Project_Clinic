#pragma once

#include "Clinic.h"
#include "Client.h"
#include "Income.h"
#include "IncomeRecord.h"
#include "Expenses.h"
#include "ExpensesRecord.h"

class AnnualReportScreen
{
private:
	IncomeRecord* ptrIncomeRecord;
	ExpensesRecord* ptrExpensesRecord;
public:
	AnnualReportScreen(IncomeRecord* ptrIncRec, ExpensesRecord* ptrExpRec) : ptrIncomeRecord(ptrIncRec), ptrExpensesRecord(ptrExpRec)
	{
	}
	~AnnualReportScreen();
	void showAnnualReport();
};
