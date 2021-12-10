#pragma once
#include "Clinic.h"
#include "Client.h"
#include "Expenses.h"

///////////////////класс ExpenseRecord/////////////////////
//Класс записей о затратах
class ExpensesRecord
{
private:
	vector<Expenses*> vectPtrsExpenses; //вектор указателей на расходы
	vector<Expenses*>::iterator iter;

public:
	~ExpensesRecord();
	void insertExpenses(Expenses*);
	void showExpenses();
	float showSummaryExpenses(); // нужно для годового отчета
};
