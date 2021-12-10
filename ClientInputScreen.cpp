#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"

void ClientInputScreen::setClient()
{
	system("cls");
	cout << "Оформление страховки: " << endl;
	cout << "\nИмя клиента:  ";
	getaLine(cName);
	cout << "\nНомер страхования:  " << endl;
	cin >> insNumber;
	cout << "\nТип страхования:  " << endl;
	cin >> insType;
	cout << "\nОплаченный период:  " << endl;
	cin >> insPeriod;
	cin.ignore(80, '\n');

	Client* ptrClient = new Client(cName, insNumber, insType, insPeriod);
	ptrClientList->insertClient(ptrClient);
}
