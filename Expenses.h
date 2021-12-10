#pragma once
#include "Clinic.h"
#include "Client.h"
///////////////////////класс Expense///////////////////////
// ласс затрат
class Expenses
{
public:
	int month, day; // мес€ц и день уплаты расходов
	string provider; // поставщик
	string description; // описание
	float amount; // сколько платим
	Expenses()
	{ }
	Expenses(int m, int d, string pr, string des, float a) :
		month(m), day(d), provider(pr), description(des), amount(a)
	{
		/* тут пусто! */
	}
};