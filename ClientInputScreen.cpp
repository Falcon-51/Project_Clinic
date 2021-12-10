#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"

//---------------------------------------------------------
///////////метод класса TenantInputScreen//////////////////
void ClientInputScreen::setClient() // добавить данные о жильце
{
	cout << "¬ведите им€ клиента (ƒ€д€ ‘едор): " << endl;
	getaLine(cName);
	cout << "¬ведите номер страховки (101021): " << endl;
	cin >> insNumber;
	cout << "¬ведите тип страховки: " << endl;
	cin >> insType;
	cout << "¬ведите период страховки: " << endl;
	cin >> insPeriod;
	cin.ignore(80, '\n');

	Client* ptrClient = new Client(cName, insNumber, insType, insPeriod); // создать жильца
	ptrClientList->insertClient(ptrClient); // занести в список жильцов
}
