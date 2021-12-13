#include "Clinic.h"
#include "Client.h"
#include "AnnualReportScreen.h"

void AnnualReportScreen::showAnnualReport()
{
	system("cls");
	cout << "|| ����  ||      ��� ��������      ||        ��������        ||  �����    ||" << endl;
	cout << "||_______||________________________||________________________||___________||" << endl;

	ptrIncomeRecord->showIncomeReport();
	ptrExpensesRecord->showExpensesReport();

	float sumInc = ptrIncomeRecord->summaryIncome();
	float sumExp = ptrExpensesRecord->summaryExpenses();

	if (sumExp == 0)
	{
		cout << "\n�������������� ������� ������: -";
	}
	else
	{
		float resultCount = sumInc / sumExp;
		cout << "\n�������������� ������� ������:  " << resultCount;
	}

	int cleanCount = sumInc - sumExp;
	cout << "\n������ ������� �������:  " << cleanCount;

	cout << endl << endl;
	system("pause");
}