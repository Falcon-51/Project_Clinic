#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"

void ClientInputScreen::setClient()
{
	system("cls");
	cout << "���������� ���������: " << endl;
	cout << "\n��� �������:  ";
	getaLine(cName);
	cout << "\n����� �����������:  " << endl;
	cin >> insNumber;
	cout << "\n��� �����������:  " << endl;
	cin >> insType;
	cout << "\n���������� ������:  " << endl;
	cin >> insPeriod;
	cin.ignore(80, '\n');

	Client* ptrClient = new Client(cName, insNumber, insType, insPeriod);
	ptrClientList->insertClient(ptrClient);
}
