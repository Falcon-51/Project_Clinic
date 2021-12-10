// �����������
#include "Clinic.h"
#include "Client.h"
#include "ExpensesInputScreen.h"
#include "ExpensesRecord.h"
// �����������
ExpensesInputScreen::ExpensesInputScreen(ExpensesRecord* per) : ptrExpensesRecord(per)
{
	/*�����*/
}
//------------------------------------------------------
void ExpensesInputScreen::setExpense()
{
	int month, day;
	string provider, description;
	float amount;
	cout << "������� ����� (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "������� ���� (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "������� ���������� (������� � �.�.): ";
	getaLine(provider);
	cout << "������� �������� (����� � �.�.): ";
	getaLine(description);
	cout << "������� ����� (39.95): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// ������� ����� ������
	Expenses* ptrExpenses = new Expenses(month, day, provider, description, amount);
	// ��������� ������ � ������ ���� ��������
	ptrExpensesRecord->insertExpenses(ptrExpenses);
}