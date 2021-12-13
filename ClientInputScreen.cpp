#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "ClientInputScreen.h"
#include "IncomeRecord.h"

void ClientInputScreen::setClient()
{
	int month, day, type, amount;

	system("cls");
	cout << "Оформление страховки: ";
	cout << "\n\nИмя клиента:  ";
	cName = getaLine(20);
	cout << "\nНомер страхования (ХХХХХХ):  ";
	insNumber = getaNumb(111111, 999999);
	while (true)
	{
		if (ptrClientList->checkNumb(insNumber) == 1)
		{
			cout << "\nКлиент с таким номером уже зарегистрирован, повторите ввод:  ";
			insNumber = getaNumb(111111, 999999);
		}
		else
		{
			break;
		}
	}
	cout << "\nДоступные тарифы страхования:";
	cout << "\n1 - Standart";
	cout << "\n2 - Gold  ";
	cout << "\n3 - GoldPlus  ";
	cout << "\n\nТип страхования:  ";
	insType = getaNumb(1, 3);
	cout << "\nОплаченный период (м):  ";
	insPeriod = getaNumb(1, 36500);

	cout << "\nМесяц (1-12): ";
	month = getaNumb(1, 12);

	cout << "\nДень (1-31): ";
	day = getaNumb(1, 31);

	type = 1;
	switch (insType)
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

	cin.clear();
	while (cin.get() != '\n');

	Client* ptrClient = new Client(cName, insNumber, insType, insPeriod);
	ptrClientList->insertClient(ptrClient);

	Income* ptrIncome = new Income(month, day, type, insNumber, amount);
	ptrIncomeRecord->insertIncome(ptrIncome);
}
