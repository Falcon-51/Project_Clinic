// конструктор
#include "Clinic.h"
#include "Client.h"
#include "ExpensesInputScreen.h"
#include "ExpensesRecord.h"
// конструктор
ExpensesInputScreen::ExpensesInputScreen(ExpensesRecord* per) : ptrExpensesRecord(per)
{
	/*пусто*/
}
//------------------------------------------------------
void ExpensesInputScreen::setExpense()
{
	int month, day;
	string provider, description;
	float amount;
	cout << "¬ведите мес€ц (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "¬ведите день (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "¬ведите поставщика (ћед“орг и т.п.): ";
	getaLine(provider);
	cout << "¬ведите описание (Ѕинты и т.п.): ";
	getaLine(description);
	cout << "¬ведите сумму (39.95): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// создаем новый расход
	Expenses* ptrExpenses = new Expenses(month, day, provider, description, amount);
	// вставл€ем расход в список всех расходов
	ptrExpensesRecord->insertExpenses(ptrExpenses);
}