#include "Clinic.h"
#include "Client.h"
#include "ExpensesRecord.h"

ExpensesRecord::~ExpensesRecord()
{
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter;
		vectPtrsExpenses.erase(iter);
	}
}

void ExpensesRecord::insertExpenses(Expenses* ptrExp)
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpensesRecord::showExpenses()
{
	system("cls");
	cout << "|| ????  ||  ??????????        ||  ????????                  ||  ?????    ||" << endl;
	cout << "||_______||____________________||____________________________||___________||" << endl;

	if (vectPtrsExpenses.size() == 0)
	{
		cout << "||                                                                        ||" << endl;
		cout << "||                              ??? ???????                               ||" << endl;
		cout << "||________________________________________________________________________||" << endl;
	}
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{
			cout.width(3);
			cout << "|| ";

			cout.width(2);
			cout << (*iter)->month;
			cout << "/";

			if ((*iter)->day > 9)
			{
				cout.width(2);
				cout << (*iter)->day;
			}
			else 
			{
				cout.width(1);
				cout << (*iter)->day << " ";
			}

			cout.width(4);
			cout << " || ";

			cout.width(18);
			cout << (*iter)->provider;

			cout.width(4);
			cout << " || ";

			cout.width(26);
			cout << (*iter)->description;

			cout.width(4);
			cout << " || ";

			cout.width(9);
			cout << (*iter)->amount;

			cout.width(3);
			cout << " ||" << endl;

			*iter++;
		}
		cout << "||_______||____________________||____________________________||___________||" << endl;

		cout.width(3);
		cout << "|| ";

		cout.width(17);
		cout << "???? ?? ????????:";
		cout.width(53);
		cout << summaryExpenses();

		cout.width(3);
		cout << " ||" << endl;

		cout << "||________________________________________________________________________||" << endl;
	}
	cout << endl;
	system("pause");
}

int ExpensesRecord::summaryExpenses()
{
	float totalExpenses = 0;
	if (vectPtrsExpenses.size() == 0)
	{
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		totalExpenses += (*iter)->amount;
		iter++;
	}
	return totalExpenses;
}

void ExpensesRecord::showExpensesReport() {
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "||                        ??? ???????? ?? ???                             ||" << endl;
		cout << "||________________________________________________________________________||" << endl;
	}
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{
			cout.width(3);
			cout << "|| ";

			cout.width(2);
			cout << (*iter)->month;
			cout << "/";

			if ((*iter)->day > 9)
			{
				cout.width(2);
				cout << (*iter)->day;
			}
			else
			{
				cout.width(1);
				cout << (*iter)->day << " ";
			}

			cout.width(4);
			cout << " || ";

			cout.width(22);
			cout << (*iter)->description;

			cout.width(4);
			cout << " || ";

			cout.width(22);
			cout << (*iter)->provider;

			cout.width(4);
			cout << " || ";

			cout.width(9);
			cout << (*iter)->amount;

			cout.width(3);
			cout << " ||" << endl;

			*iter++;
		}
		cout << "||_______||________________________||________________________||___________||" << endl;

		cout.width(3);
		cout << "|| ";

		cout.width(17);
		cout << "???? ?? ????????:";
		cout.width(53);
		cout << summaryExpenses();

		cout.width(3);
		cout << " ||" << endl;

		cout << "||________________________________________________________________________||" << endl;
	}
}