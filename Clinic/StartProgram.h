#pragma once
#include "Clinic.h"
#include "NewInsurance.h"
#include "ClientList.h"

class StartProgram
{
private:
	ClientList* ptrClientList;
	NewInsurance* ptrNewInsurance;
	//RentRecord* ptrRentRecord;
	//RentInputScreen* ptrRentInputScreen;
	//ExpenseRecord* ptrExpenseRecord;
	//ExpenseInputScreen* ptrExpenseInputScreen;
	//AnnualReport* ptrAnnualReport;
	char choice;

public:
	StartProgram();
	~StartProgram();
	void interface();
};