#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ClientList.h"
#include "Menu.h"
#include "prolongInsScreen.h"

Menu::Menu()
{
	ptrClientList = new ClientList;
	ptrExpensesRecord = new ExpensesRecord;
	ptrIncomeRecord = new IncomeRecord;
	ptrSeeDoctorRecord = new SeeDoctorRecord;
}

Menu::~Menu()
{
	delete ptrClientList;
	delete ptrExpensesRecord;
	delete ptrIncomeRecord;
	delete ptrSeeDoctorRecord;
}

void Menu::interact()
{
	while (true)
	{
		system("cls");
		cout << "   Меню" << endl << endl;
		cout << "+q) Страхование нового клиента" << endl;
		cout << "+w) Продление страховки" << endl;
		cout << "+e) Вывести список клиентов" << endl << endl;

		cout << "+a) Запись клиента к врачу" << endl;
		cout << "+s) Вывести записи к врачам" << endl << endl;

		cout << "+d) Ввести расходы" << endl;
		cout << "+z) Вывести расходы" << endl;
		cout << " x) Вывести доходы" << endl;
		cout << " c) Вывести годовой отчёт" << endl << endl;
		cout << "+i) EXIT" << endl;

		ch = getaChar();
		system("cls");
		
			
		switch (ch)
		{
		case 'q': 
			ptrClientInputScreen = new ClientInputScreen(ptrClientList, ptrIncomeRecord);
			ptrClientInputScreen->setClient();
			delete ptrClientInputScreen;
			break;

		case 'w':
			ptrProlongInsScreen = new ProlongInsScreen(ptrClientList, ptrIncomeRecord);
			ptrProlongInsScreen->ProlongIns();
			delete ptrProlongInsScreen;
			break;

		case 'e':
			ptrClientList->showClientList();
			break;



		case 'a':
			ptrSeeDoctorInputScreen = new SeeDoctorInputScreen(ptrSeeDoctorRecord, ptrClientList);
			ptrSeeDoctorInputScreen->setSeeDoctor();
			delete ptrSeeDoctorInputScreen;
			break;

		case 's':
			ptrSeeDoctorRecord->showSeeDoctor();
			break;



		case 'd': 
			ptrExpensesInputScreen = new ExpensesInputScreen(ptrExpensesRecord);
			ptrExpensesInputScreen->setExpense();
			delete ptrExpensesInputScreen;
			break;

		case 'z':
			ptrExpensesRecord->showExpenses();
			break;

		case 'x':
			ptrIncomeRecord->showIncome();
			break;

		case 'c':
			ptrAnnualReportScreen = new AnnualReportScreen(ptrIncomeRecord, ptrExpensesRecord);
			ptrAnnualReportScreen->showAnnualReport();
			delete ptrExpensesInputScreen;
			break;

		case 'i':
			return;

		default:
			cout << "Неизвестная функция\n";
			system("pause");
			break;
		}
	}
}
