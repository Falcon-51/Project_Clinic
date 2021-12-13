#include <iostream>
#include "Clinic.h"
#include "ClientList.h"

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

int ClientList::getTypeByNumb(int insNo)
{
	int insType;
	iter = clientPtrList.begin();
	while (iter != clientPtrList.end())
	{
		if (insNo == ((*iter)->getInsNumber()))
		{
			return (*iter)->getInsType();
		}
		iter++;
	}
}
void ClientList::changeTypeByNumb(int insNo, int newType)
{

}

void ClientList::prolongPeriodByNumb(int insNo, int newPeriod)
{
	iter = clientPtrList.begin();
	while (iter != clientPtrList.end())
	{
		if (insNo == ((*iter)->getInsNumber()))
		{
			newPeriod = newPeriod + (*iter)->getInsPeriod();
			(*iter)->changeInsPeriod(newPeriod);
		}
		iter++;
	}
}

int ClientList::checkNumb(int insNo) 
{
	int check = -1;
	if (clientPtrList.empty())
	{
		return 0;
	}
	else
	{
		iter = clientPtrList.begin();
		while (iter != clientPtrList.end())
		{
			if ((*iter)->getInsNumber() == insNo) {
				check = 1;
			}
			iter++;
		}

		return check;
	}
}

void ClientList::showClientList()
{
	system("cls");
	cout << "|| Имя клиента          || Номер страховки || Тип страховки || Период (м) ||" << endl;
	cout << "||----------------------||-----------------||---------------||------------||" << endl;
	if (clientPtrList.empty()) 
	{
		cout << "||                                                                        ||" << endl;
		cout << "||                              НЕТ КЛИЕНТОВ                              ||" << endl;
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
		cout <<  endl;
		system("pause");
	}
}