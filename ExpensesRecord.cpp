#include "Clinic.h"
#include "Client.h"
#include "ExpensesRecord.h"


//---------------------------------------------------------
//////////////////������ ������ expensesRecord//////////////
 ExpensesRecord::~ExpensesRecord() // ����������
{ // ������� ������� expense
// ������� ��������� �� ������
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter;
		vectPtrsExpenses.erase(iter);
	}
}



//--------------------------------------------------------
void ExpensesRecord::insertExpenses(Expenses* ptrExp)
{

	vectPtrsExpenses.push_back(ptrExp);
}



//---------------------------------------------------------
void ExpensesRecord::showExpenses() // ������������� ��� �������
{
	cout << "\n����\t����������\t�����\t���������\n"
		<< "----------------------------------------\n" << endl;
	if (vectPtrsExpenses.size() == 0) // � ���������� ��� ��������
		cout << "***�������� ���***\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{ // ������������� ��� �������
			cout << (*iter)->month << '/' << (*iter)->day << '\t' << (*iter)->provider<< '\t' << '\t';
			cout << (*iter)->amount << '\t' << (*iter)->description << endl;
			iter++;
		}
		cout << endl;
	}
}
//--------------------------------------------------------
// ������������ ��� ����������� �������� ������
float ExpensesRecord::showSummaryExpenses()
{
	float totalExpenses = 0; // ����� �� ���� ���������� ��������
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "\t��� ���������\t0\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		//������� �� ����� ��������� ��������
		cout << '\t' << ((*iter)->provider) << '\t' << ((*iter)->amount) << endl;
		totalExpenses += (*iter)->amount; //������������ ��� �������
		iter++;
	}
	return totalExpenses;
}