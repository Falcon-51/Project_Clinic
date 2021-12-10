#include "Clinic.h"
#include "NewInsurance.h"
using namespace std;

NewInsurance::NewInsurance(ClientList* ptrCl) : ptrClientList(ptrCl)
{
}

void NewInsurance::setClient()
{
	system("cls");
	cout << "Оформление страхования ";

	cout << "\n\nИмя клиента:  ";
	getaLine(n);

	cout << "\nНомер страхования:  ";
	cin >> iNo;

	cout << "\nДоступные тарифы страхования:  ";
	cout << "\n1 - Standart";
	cout << "\n2 - Gold";
	cout << "\n3 - GoldPlus";

	cout << "\nТип страхования:  ";
	cin >> iType;

	cout << "\nОплаченный период:  ";
	cin >> iPrd;

	Client* NewClient = new Client(n, iNo, iType, iPrd);
	ptrClientList->insertClient(NewClient);
}