#pragma once
#include "Clinic.h"
#include "Client.h"

// Класс ClientList — база данных клиентов.

class ClientList
{
private:
	list <Client*> clientPtrList; // указатели на класс Client
	list <Client*>::iterator iter; // итератор

public:

	~ClientList(); // деструктор
	void insertClient(Client*); // добавить клиента в список
	int getNumbByName(string); // возвращает номер страхования по имени клиента
	void showClientList(); // вывод таблицы 
};
