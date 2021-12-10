#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"

//---------------------------------------------------------
///////////����� ������ TenantInputScreen//////////////////
void ClientInputScreen::setClient() // �������� ������ � ������
{
	cout << "������� ��� ������� (���� �����): " << endl;
	getaLine(cName);
	cout << "������� ����� ��������� (101021): " << endl;
	cin >> insNumber;
	cout << "������� ��� ���������: " << endl;
	cin >> insType;
	cout << "������� ������ ���������: " << endl;
	cin >> insPeriod;
	cin.ignore(80, '\n');

	Client* ptrClient = new Client(cName, insNumber, insType, insPeriod); // ������� ������
	ptrClientList->insertClient(ptrClient); // ������� � ������ �������
}
