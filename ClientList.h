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
	void showClientList(); 
};
