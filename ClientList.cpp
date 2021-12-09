#include <iostream>
#include "Clinic.h"
#include "ClientList.h"


//---------------------------------------------------------
////////////////методы класса ClientList///////////////////
ClientList::~ClientList() // деструктор
{
	while (!setPtrsClients.empty()) // удаление всех клиентов, 
	{ // удаление указателей из контейнера
		iter = setPtrsClients.begin();
		delete* iter;

		setPtrsClients.erase(iter);
	}
}

//---------------------------------------------------------
void ClientList::insertClient(Client* ptrT)
{
	setPtrsClients.push_back(ptrT); // вставка нового жильца в список
}

//---------------------------------------------------------
int ClientList::getInsNo(string clName) // получить номер страховки по имени жильца
{
	int insNo;
	iter = setPtrsClients.begin();
	while (iter != setPtrsClients.end())
	{ // поиск клиента в списке (достаем у каждого клиента номер страховки)
		insNo = (*iter)->getInsNumber();
		if (clName == ((*iter)->getName())) // сравниваем по именам и
		{
			// если получившаяся пара совпадает - значит,
			//мы нашли запись об этом клиенте в списке, в этом случае
			return insNo; // возвращаем номер его страховки
		}
		iter++;
	}
	return -1; // если нет - возвращаем -1
}
//--------------------------------------------------------

void ClientList::display() // вывод списка жильцов
{
	cout << "\nApt#\tИмя клиента\n-------------------\n";
	if (setPtrsClients.empty()) // если список клиентов пуст
		cout << "***Нет клиентов***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) // распечатываем всех жильцов
		{
			cout << (*iter)->getInsNumber() << " || " << (*iter)->getName() << endl;
			*iter++;
		}
	}
}
