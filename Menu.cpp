#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ClientList.h"
#include "Menu.h"

Menu::Menu()
{
	ptrClientList = new ClientList;
	ptrExpensesRecord = new ExpensesRecord;
	ptrSeeDoctorRecord = new SeeDoctorRecord;
}

Menu::~Menu()
{
	delete ptrClientList;
	delete ptrExpensesRecord;
	delete ptrSeeDoctorRecord;
}

void Menu::interact()
{
	while (true)
	{
		system("cls");
		cout << "   Меню" << endl << endl;
		cout << "+q) Страхование нового клиента" << endl;
		cout << " w) Продление страховки" << endl;
		cout << "+e) Вывести список клиентов" << endl << endl;

		cout << " a) Запись клиента к врачу" << endl;
		cout << " s) Вывести записи к врачам" << endl << endl;

		cout << "+d) Ввести расходы" << endl;
		cout << "+z) Вывести расходы" << endl;
		cout << " x) Вывести доходы" << endl;
		cout << " c) Вывести годовой отчёт" << endl << endl;
		cout << "+i) EXIT" << endl;

		ch = getaChar();
		system("cls");
		
			
		switch (ch)
		{
		case 'q': ptrClientInputScreen =
			new ClientInputScreen(ptrClientList);
			ptrClientInputScreen->setClient();
			delete ptrClientInputScreen;
			break;

		case 'd': ptrExpensesInputScreen =
			new ExpensesInputScreen(ptrExpensesRecord);
			ptrExpensesInputScreen->setExpense();
			delete ptrExpensesInputScreen;
			break;
		case 'e': ptrClientList->showClientList();
			break;
		case 'z': ptrExpensesRecord->showExpenses();
			break;

		case 'a': ptrSeeDoctorInputScreen =
			new SeeDoctorInputScreen(ptrSeeDoctorRecord);
			ptrSeeDoctorInputScreen->setSeeDoctor();
			delete ptrSeeDoctorInputScreen;
			break;

		case 's': ptrSeeDoctorRecord->showSeeDoctor();
			break;
		
		case 'i':
			return;


		default: cout << "Неизвестная функция\n";
			break;
		}
	}
}
