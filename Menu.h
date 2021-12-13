#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ExpensesRecord.h"
#include "IncomeRecord.h"
#include "ExpensesInputScreen.h"
#include "SeeDoctorRecord.h"
#include "SeeDoctorInputScreen.h"
#include "prolongInsScreen.h"
#include "AnnualReportScreen.h"

class Menu
{
private:
	ClientList* ptrClientList;
	ClientInputScreen* ptrClientInputScreen;
	ExpensesRecord* ptrExpensesRecord;
	IncomeRecord* ptrIncomeRecord;
	ExpensesInputScreen* ptrExpensesInputScreen;
	SeeDoctorRecord* ptrSeeDoctorRecord;
	SeeDoctorInputScreen* ptrSeeDoctorInputScreen;
	ProlongInsScreen* ptrProlongInsScreen;
	AnnualReportScreen* ptrAnnualReportScreen;
	

	char ch;

public:
	Menu();
	~Menu();
	void interact();
};