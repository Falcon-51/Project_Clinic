#pragma once

#include "Clinic.h"
#include "Client.h"

class ClientList
{
private:
	list <Client*> clientPtrList;
	list <Client*>::iterator iter;

public:

	~ClientList();
	void insertClient(Client*);
	int getNumbByName(string); 
	int getTypeByNumb(int insNo);
	int checkNumb(int insNo);
	void changeTypeByNumb(int insNo, int newType);
	void prolongPeriodByNumb(int insNo, int newPeriod);
	void showClientList(); 
};
