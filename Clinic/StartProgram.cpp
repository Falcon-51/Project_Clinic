#include "StartProgram.h"
#include "NewInsurance.h"
using namespace std;

StartProgram::StartProgram()
{
	ptrClientList = new ClientList;
	//ptrRentRecord = new RentRecord;
	//ptrExpenseRecord = new ExpenseRecord;
}

StartProgram::~StartProgram()
{
	delete ptrClientList;
	//delete ptrRentRecord;
	//delete ptrExpenseRecord;
}

void StartProgram::interface()
{
	do
	{
		system("cls");
		cout << "\nМЕНЮ                    0) Х";
		cout << "\n\n1) Страхование нового клиента";
		cout << "\n2) Продление страховки";
		cout << "\n3) Вывести список клиентов";

		cout << "\n\n4) Запись клиента к врачу";
		cout << "\n5) Вывести журнал записи";

		cout << "\n\n6) Ввести расходы";
		cout << "\n7) Вывести расходы";
		cout << "\n8) Вывести доходы";
		cout << "\n9) Вывести годовой отчёт" << endl << endl;

		choice = getaChar();
		
		switch (choice)
		{
		case '1':
			ptrNewInsurance = new NewInsurance(ptrClientList);
			ptrNewInsurance->setClient();
			delete ptrNewInsurance;
			break;

		case '3': ptrClientList->showClientList();
			break;

		default:
			break;

			/*case 'r': ptrRentInputScreen =
					new RentInputScreen(ptrTenantList, ptrRentRecord);
				ptrRentInputScreen->setRent();
				delete ptrRentInputScreen;
				break;
			case 'e': ptrExpenseInputScreen =
				new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;

			case 'r': ptrRentRecord->display();
				break;
			case 'e': ptrExpenseRecord->display();
				break;
			case 'a':
				ptrAnnualReport = new AnnualReport(ptrRentRecord,
					ptrExpenseRecord);
				ptrAnnualReport->display();
				delete ptrAnnualReport;
				break;
			*/
		}
	} while (choice > 0);
}