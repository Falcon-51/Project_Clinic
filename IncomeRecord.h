#pragma once

#include "Clinic.h"
#include "Client.h"
#include "Income.h"

class IncomeRecord
{
private:
	vector<Income*> vectPtrsIncome;
	vector<Income*>::iterator iter;

public:
	~IncomeRecord();
	void insertIncome(Income*);
	void showIncome();
	int summaryIncome();
	void showIncomeReport();
};
