#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ClientList.h"
#include "Menu.h"

Menu::Menu()
{
	ptrClientList = new ClientList;
	ptrExpensesRecord = new ExpensesRecord;
}

Menu::~Menu()
{
	delete ptrClientList;
	delete ptrExpensesRecord;
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
		default: cout << "����������� �������\n";
			break;
		}
	}
}
