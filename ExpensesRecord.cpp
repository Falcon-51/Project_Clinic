#include "Clinic.h"
#include "Client.h"
#include "ExpensesRecord.h"


//---------------------------------------------------------
//////////////////методы класса expensesRecord//////////////
 ExpensesRecord::~ExpensesRecord() // деструктор
{ // удалить объекты expense
// удалить указатели на вектор
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter;
		vectPtrsExpenses.erase(iter);
	}
}



//--------------------------------------------------------
void ExpensesRecord::insertExpenses(Expenses* ptrExp)
{

	vectPtrsExpenses.push_back(ptrExp);
}



//---------------------------------------------------------
void ExpensesRecord::showExpenses() // распечатываем все расходы
{
	cout << "\nДата\tПолучатель\tСумма\tКатегория\n"
		<< "----------------------------------------\n" << endl;
	if (vectPtrsExpenses.size() == 0) // В контейнере нет расходов
		cout << "***Расходов нет***\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{ // распечатываем все расходы
			cout << (*iter)->month << '/' << (*iter)->day << '\t' << (*iter)->provider<< '\t' << '\t';
			cout << (*iter)->amount << '\t' << (*iter)->description << endl;
			iter++;
		}
		cout << endl;
	}
}
//--------------------------------------------------------
// используется при составлении годового отчета
float ExpensesRecord::showSummaryExpenses()
{
	float totalExpenses = 0; // Сумма по всем категориям расходов
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "\tВсе категории\t0\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		//выводим на экран категории расходов
		cout << '\t' << ((*iter)->provider) << '\t' << ((*iter)->amount) << endl;
		totalExpenses += (*iter)->amount; //подсчитываем все расходы
		iter++;
	}
	return totalExpenses;
}