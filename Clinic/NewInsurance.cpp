#include "Clinic.h"
#include "NewInsurance.h"
using namespace std;

NewInsurance::NewInsurance(ClientList* ptrCl) : ptrClientList(ptrCl)
{
}

void NewInsurance::setClient()
{
	system("cls");
	cout << "���������� ����������� ";

	cout << "\n\n��� �������:  ";
	getaLine(n);

	cout << "\n����� �����������:  ";
	cin >> iNo;

	cout << "\n��������� ������ �����������:  ";
	cout << "\n1 - Standart";
	cout << "\n2 - Gold";
	cout << "\n3 - GoldPlus";

	cout << "\n��� �����������:  ";
	cin >> iType;

	cout << "\n���������� ������:  ";
	cin >> iPrd;

	Client* NewClient = new Client(n, iNo, iType, iPrd);
	ptrClientList->insertClient(NewClient);
}