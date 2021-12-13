#include "Clinic.h"
#include "Client.h"
#include "IncomeRecord.h"

IncomeRecord::~IncomeRecord()
{
	while (!vectPtrsIncome.empty())
	{
		iter = vectPtrsIncome.begin();
		delete* iter;
		vectPtrsIncome.erase(iter);
	}
}

void IncomeRecord::insertIncome(Income* ptrInc)
{
	vectPtrsIncome.push_back(ptrInc);
}

void IncomeRecord::showIncome()
{
	system("cls");
	cout << "|| Дата  ||         Тип дохода          || Номер страхования ||  Сумма    ||" << endl;
	cout << "||_______||_____________________________||___________________||___________||" << endl;

	if (vectPtrsIncome.size() == 0)
	{
		cout << "||                                                                        ||" << endl;
		cout << "||                              НЕТ ЗАПИСЕЙ                               ||" << endl;
		cout << "||________________________________________________________________________||" << endl;
	}
	else
	{
		iter = vectPtrsIncome.begin();
		while (iter != vectPtrsIncome.end())
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

			cout.width(27);
			if ((*iter)->type == 1)
			{
				cout << "Оформление страховки";
			}
			else
			{
				cout << "Продление страховки";
			}
			
			cout.width(4);
			cout << " || ";

			cout.width(17);
			cout << (*iter)->insNumb;

			cout.width(4);
			cout << " || ";

			cout.width(9);
			cout << (*iter)->amount;

			cout.width(3);
			cout << " ||" << endl;

			*iter++;
		}
		cout << "||_______||_____________________________||___________________||___________||" << endl;

		cout.width(3);
		cout << "|| ";

		cout.width(16);
		cout << "Итог по доходам:";
		cout.width(54);
		cout << summaryIncome();

		cout.width(3);
		cout<< " ||" << endl;

		cout << "||________________________________________________________________________||" << endl;
	}
	cout << endl;
	system("pause");
}

int IncomeRecord::summaryIncome()
{
	float totalExpenses = 0;
	if (vectPtrsIncome.size() == 0)
	{
		return 0;
	}
	iter = vectPtrsIncome.begin();
	while (iter != vectPtrsIncome.end())
	{
		totalExpenses += (*iter)->amount;
		iter++;
	}
	return totalExpenses;
}

void IncomeRecord::showIncomeReport() {
	if (vectPtrsIncome.size() == 0)
	{
		cout << "||                        НЕТ ДОХОДОВ ЗА ГОД                              ||" << endl;
		cout << "||________________________________________________________________________||" << endl;
	}
	else
	{
		iter = vectPtrsIncome.begin();
		while (iter != vectPtrsIncome.end())
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
			if ((*iter)->type == 1)
			{
				cout << "Оформление страховки";
			}
			else
			{
				cout << "Продление страховки";
			}

			cout.width(4);
			cout << " || ";

			cout.width(15);
			cout << "Клиент:";

			cout.width(7);
			cout << (*iter)->insNumb;

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

		cout.width(16);
		cout << "Итог по доходам:";
		cout.width(54);
		cout << summaryIncome();

		cout.width(3);
		cout << " ||" << endl;

		cout << "||________________________________________________________________________||" << endl;
	}
}