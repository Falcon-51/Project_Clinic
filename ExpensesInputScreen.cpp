#include "Clinic.h"
#include "Client.h"
#include "ExpensesInputScreen.h"
#include "ExpensesRecord.h"

ExpensesInputScreen::ExpensesInputScreen(ExpensesRecord* per) : ptrExpensesRecord(per)
{
}

void ExpensesInputScreen::setExpense()
{
	int month, day;
	string provider, description;
	float amount;

	system("cls");
	cout << "Поставщик (фирма): ";
	provider = getaLine(18);
	cout << "\nОписание: ";
	description = getaLine(26);
	cout << "\nСумма ($): ";
	amount = getaNumb(1, 50000);
	cout << "\nМесяц (1-12): ";
	month = getaNumb(1, 12);
	cout << "\nДень (1-31): ";
	day = getaNumb(1, 31);

	cin.clear();
	while (cin.get() != '\n');

	Expenses* ptrExpenses = new Expenses(month, day, provider, description, amount);
	ptrExpensesRecord->insertExpenses(ptrExpenses);
}