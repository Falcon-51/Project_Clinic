#pragma once
#include "Clinic.h"
#include "Client.h"
#include "Expenses.h"

///////////////////����� ExpenseRecord/////////////////////
//����� ������� � ��������
class ExpensesRecord
{
private:
	vector<Expenses*> vectPtrsExpenses; //������ ���������� �� �������
	vector<Expenses*>::iterator iter;

public:
	~ExpensesRecord();
	void insertExpenses(Expenses*);
	void showExpenses();
	float showSummaryExpenses(); // ����� ��� �������� ������
};
