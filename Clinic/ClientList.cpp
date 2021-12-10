#include <iostream>
#include "Clinic.h"
#include "ClientList.h"


// ������ ������ ClientList

ClientList::~ClientList()
{
	while (!clientPtrList.empty())
	{
		iter = clientPtrList.begin();
		delete* iter;

		clientPtrList.erase(iter);
	}
}

void ClientList::insertClient(Client* clPtr)
{
	clientPtrList.push_back(clPtr);
}

int ClientList::getNumbByName(string clName)
{
	int insNo;
	iter = clientPtrList.begin();
	while (iter != clientPtrList.end())
	{
		insNo = (*iter)->getInsNumber();
		if (clName == ((*iter)->getName()))
		{
			return insNo;
		}
		iter++;
	}
	return -1;
}

void ClientList::showClientList()
{
	system("cls");
	cout << "|| ��� �������          || ����� ��������� || ��� ��������� || ������ (�) ||" << endl;
	cout << "||----------------------||-----------------||---------------||------------||" << endl;
	if (clientPtrList.empty()) 
	{
		cout << "||                                                                        ||" << endl;
		cout << "||                              ��� ��������                              ||" << endl;
		cout << "||________________________________________________________________________||" << endl;
		system("pause");
	}
	else
	{
		iter = clientPtrList.begin();
		while (iter != clientPtrList.end())
		{
			cout.width(3);
			cout << "|| ";

			cout.width(20);
			cout << (*iter)->getName();

			cout.width(4);
			cout << " || ";

			cout.width(15);
			cout << (*iter)->getInsNumber();

			cout.width(4);
			cout << " || ";

			cout.width(13);
			switch ((*iter)->getInsType())
				{
				case 1:
					cout << "Standart";
					break;

				case 2:
					cout << "Gold";
					break;

				case 3:
					cout << "GoldPlus";
					break;

				default:
					cout << "none";
					break;
				}

			cout.width(4);
			cout << " || ";

			cout.width(10);
			cout << (*iter)->getInsPeriod();

			cout.width(3);
			cout << " ||" << endl;

			*iter++;
		}
		cout << "||______________________||_________________||_______________||____________||" << endl;
		system("pause");
	}
}