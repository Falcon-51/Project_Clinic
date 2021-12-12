#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ExpensesRecord.h"
#include "ExpensesInputScreen.h"
#include "SeeDoctorRecord.h"
#include "SeeDoctorInputScreen.h"

class Menu
{
private:
	ClientList* ptrClientList;
	ClientInputScreen* ptrClientInputScreen;
	ExpensesRecord* ptrExpensesRecord;
	ExpensesInputScreen* ptrExpensesInputScreen;
	SeeDoctorRecord* ptrSeeDoctorRecord;
	SeeDoctorInputScreen* ptrSeeDoctorInputScreen;

	char ch;

public:
	Menu();
	~Menu();
	void interact();
};