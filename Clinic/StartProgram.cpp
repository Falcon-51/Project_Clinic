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
		cout << "\n����                    0) �";
		cout << "\n\n1) ����������� ������ �������";
		cout << "\n2) ��������� ���������";
		cout << "\n3) ������� ������ ��������";

		cout << "\n\n4) ������ ������� � �����";
		cout << "\n5) ������� ������ ������";

		cout << "\n\n6) ������ �������";
		cout << "\n7) ������� �������";
		cout << "\n8) ������� ������";
		cout << "\n9) ������� ������� �����" << endl << endl;

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