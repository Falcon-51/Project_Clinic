#include <iostream>
#include "Clinic.h"
#include "ClientList.h"


//---------------------------------------------------------
////////////////������ ������ ClientList///////////////////
ClientList::~ClientList() // ����������
{
	while (!setPtrsClients.empty()) // �������� ���� ��������, 
	{ // �������� ���������� �� ����������
		iter = setPtrsClients.begin();
		delete* iter;

		setPtrsClients.erase(iter);
	}
}

//---------------------------------------------------------
void ClientList::insertClient(Client* ptrT)
{
	setPtrsClients.push_back(ptrT); // ������� ������ ������ � ������
}

//---------------------------------------------------------
int ClientList::getInsNo(string clName) // �������� ����� ��������� �� ����� ������
{
	int insNo;
	iter = setPtrsClients.begin();
	while (iter != setPtrsClients.end())
	{ // ����� ������� � ������ (������� � ������� ������� ����� ���������)
		insNo = (*iter)->getInsNumber();
		if (clName == ((*iter)->getName())) // ���������� �� ������ �
		{
			// ���� ������������ ���� ��������� - ������,
			//�� ����� ������ �� ���� ������� � ������, � ���� ������
			return insNo; // ���������� ����� ��� ���������
		}
		iter++;
	}
	return -1; // ���� ��� - ���������� -1
}
//--------------------------------------------------------

void ClientList::display() // ����� ������ �������
{
	cout << "\nApt#\t��� �������\n-------------------\n";
	if (setPtrsClients.empty()) // ���� ������ �������� ����
		cout << "***��� ��������***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) // ������������� ���� �������
		{
			cout << (*iter)->getInsNumber() << " || " << (*iter)->getName() << endl;
			*iter++;
		}
	}
}
