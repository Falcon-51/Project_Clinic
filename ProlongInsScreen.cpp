#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "ProlongInsScreen.h"

void ProlongInsScreen::ProlongIns() 
{
	int error = 0;
	int month, day, type, amount;

	system("cls");
	cout << "��������� ���������: ";
	cout << "\n\n����� ����������� �������:  ";
	insNumber = getaNumb(111111, 999999);
	while (true)
	{
		if (ptrClientList->checkNumb(insNumber) == -1)
		{
			cout << "\n� ���� ��� ������ �������, ��������� ����:  ";
			insNumber = getaNumb(111111, 999999);
		}
		else if (ptrClientList->checkNumb(insNumber) == 0)
		{
			error = 1;
			cout << "\n� ���� ��� ��������\n\n";
			break;
		}
		else
		{
			break;
		}
	}

	if (error == 0)
	{
		cout << "\n���������� ������ (�):  ";
		insPeriod = getaNumb(1, 36500);

		cout << "\n����� (1-12): ";
		month = getaNumb(1, 12);

		cout << "\n���� (1-31): ";
		day = getaNumb(1, 31);

		type = 2;
		switch (ptrClientList->getTypeByNumb(insNumber))
		{
		case 1:
			amount = insPeriod * standartPay;
			break;

		case 2:
			amount = insPeriod * goldPay;
			break;

		case 3:
			amount = insPeriod * goldPlusPay;
			break;
		}

		ptrClientList->prolongPeriodByNumb(insNumber, insPeriod);
		cout << "\n������ ����������� ������� �� " << insPeriod << " �\n\n";

		Income* ptrIncome = new Income(month, day, type, insNumber, amount);
		ptrIncomeRecord->insertIncome(ptrIncome);
	}
	system("pause");
	cin.clear();
	while (cin.get() != '\n');
}