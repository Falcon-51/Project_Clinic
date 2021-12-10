#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
////////////////класс TenantInputScreen////////////////////
//класс TenantInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом жильце:
class ClientInputScreen
{
private:
	ClientList* ptrClientList;
	string cName;
	int insNumber;
	int insType;
	int insPeriod;

public:
	ClientInputScreen(ClientList* ptrTL) : ptrClientList(ptrTL)
	{
		/* тут пусто */
	}
	void setClient(); // добавить данные о жильце
};