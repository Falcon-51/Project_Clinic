#pragma once
#include "Clinic.h"
#include "Client.h"
#include "Expenses.h"
#include "ExpensesRecord.h"

class ExpensesInputScreen
{
private:
	ExpensesRecord* ptrExpensesRecord;

public:
	ExpensesInputScreen(ExpensesRecord*);
	void setExpense();
};
