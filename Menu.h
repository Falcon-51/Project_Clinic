#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ExpensesRecord.h"
#include "ExpensesInputScreen.h"

class Menu
{
private:
	ClientList* ptrClientList;
	ClientInputScreen* ptrClientInputScreen;
	ExpensesRecord* ptrExpensesRecord;
	ExpensesInputScreen* ptrExpensesInputScreen;

	char ch;

public:
	Menu();
	~Menu();
	void interact();
};