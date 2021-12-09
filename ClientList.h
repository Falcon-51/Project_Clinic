#include "Clinic.h"
#include "Client.h"

///////////////////класс ClientList////////////////////////
//класс TenantList — список всех жильцов.
//Он содержит множество указателей на класс Tenant
// и оперирует ими при выводе
class ClientList
{
private:
	// установить указатели на жильцов
	list <Client*> setPtrsClients; // указатели на класс жильцов
	list <Client*>::iterator iter; //итератор

public:
	~ClientList(); // деструктор (удаление жильцов)
	void insertClient(Client*); // добавить клиента в список
	int getInsNo(string); // возвращает номер апартаментов
	void display(); // вывод списка жильцов
};
