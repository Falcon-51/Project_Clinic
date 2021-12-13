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
		cout << "   ����" << endl << endl;
		cout << "+q) ����������� ������ �������" << endl;
		cout << "+w) ��������� ���������" << endl;
		cout << "+e) ������� ������ ��������" << endl << endl;

		cout << "+a) ������ ������� � �����" << endl;
		cout << "+s) ������� ������ � ������" << endl << endl;

		cout << "+d) ������ �������" << endl;
		cout << "+z) ������� �������" << endl;
		cout << " x) ������� ������" << endl;
		cout << " c) ������� ������� �����" << endl << endl;
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
			cout << "����������� �������\n";
			system("pause");
			break;
		}
	}
}
