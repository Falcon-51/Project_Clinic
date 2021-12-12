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
		cout << "   ����" << endl << endl;
		cout << "+q) ����������� ������ �������" << endl;
		cout << " w) ��������� ���������" << endl;
		cout << "+e) ������� ������ ��������" << endl << endl;

		cout << " a) ������ ������� � �����" << endl;
		cout << " s) ������� ������ � ������" << endl << endl;

		cout << "+d) ������ �������" << endl;
		cout << "+z) ������� �������" << endl;
		cout << " x) ������� ������" << endl;
		cout << " c) ������� ������� �����" << endl << endl;
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


		default: cout << "����������� �������\n";
			break;
		}
	}
}
