#include "Clinic.h"
#include "Client.h"
#include "AnnualReportScreen.h"

void AnnualReportScreen::showAnnualReport()
{
	system("cls");
	cout << "|| Дата  ||      Тип операции      ||        Источник        ||  Сумма    ||" << endl;
	cout << "||_______||________________________||________________________||___________||" << endl;

	ptrIncomeRecord->showIncomeReport();
	ptrExpensesRecord->showExpensesReport();

	float sumInc = ptrIncomeRecord->summaryIncome();
	float sumExp = ptrExpensesRecord->summaryExpenses();

	if (sumExp == 0)
	{
		cout << "\nРезультирующий годовой баланс: -";
	}
	else
	{
		float resultCount = sumInc / sumExp;
		cout << "\nРезультирующий годовой баланс:  " << resultCount;
	}

	int cleanCount = sumInc - sumExp;
	cout << "\nЧистая годовая прибыль:  " << cleanCount;

	cout << endl << endl;
	system("pause");
}