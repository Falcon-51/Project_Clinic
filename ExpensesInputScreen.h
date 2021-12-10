#pragma once
#include "Clinic.h"
#include "Client.h"
#include "Expenses.h"
#include "ExpensesRecord.h"
////////////////класс ExpenseInputScreen///////////////////
//Класс для ввода расходов
class ExpensesInputScreen
{
private:
	ExpensesRecord* ptrExpensesRecord; // запись о расходах

public:
	ExpensesInputScreen(ExpensesRecord*);
	void setExpense();
};
