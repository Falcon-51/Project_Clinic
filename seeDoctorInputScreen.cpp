#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "Menu.h"
#include "SeeDoctorInputScreen.h"
#include "SeeDoctorRecord.h"

SeeDoctorInputScreen::SeeDoctorInputScreen(SeeDoctorRecord* per, ClientList* clli) : ptrSeeDoctorRecord(per), ptrClientList(clli)
{
}

void SeeDoctorInputScreen::setSeeDoctor()
{
	int month, day, insNo;
	int category, service;
	int error = 0, insType;
	cout << "������ � �����:\n";

	cout << "\n����� �����������:  ";
	insNo = getaNumb(111111, 999999);
	while (true)
	{
		if (ptrClientList->checkNumb(insNo) == -1)
		{
			cout << "\n� ���� ��� ������ �������, ��������� ����:  ";
			insNo = getaNumb(111111, 999999);
		}
		else if (ptrClientList->checkNumb(insNo) == 0)
		{
			error = 1;
			break;
		}
		else
		{
			break;
		}
	}

	insType = ptrClientList->getTypeByNumb(insNo);

	if (error == 0)
	{
		cout << "\n�������� �����: ";
		cout << "\n1 - ������� ";
		cout << "\n2 - ���������� ";
		cout << "\n3 - ���������� ";
		cout << "\n4 - ���� ���������� �������� ";
		cout << "\n5 - �������\n";

		category = getaNumb(1, 5);

		if (category == 1)
		{
			cout << "\n�������� ������: ";
			cout << "\n1 - ������������ (S)";
			cout << "\n2 - ��������� ���� (S)";
			cout << "\n3 - ������������ � ������� ���� (G)";
			cout << "\n4 - ������������ ������ � ���������� (G+)\n";

			service = getaNumb(1, 4);

			if (((insType == 1) && ((service == 3) || (service == 4))) || ((insType == 2) && (service == 4)))
			{
				error = 1;
			}
		}
		else if (category == 2)
		{
			cout << "\n�������� ������: ";
			cout << "\n1 - ������������ (S)";
			cout << "\n2 - ��������� ���� (S)";
			cout << "\n3 - ����������� �� ������� (S)";
			cout << "\n4 - ������ ���� (G)";
			cout << "\n5 - ������������� ������� (G+)\n";

			service = getaNumb(1, 5);
			if (((insType == 1) && ((service == 4) || (service == 5))) || ((insType == 2) && (service == 5)))
			{
				error = 1;
			}
		}
		else if (category == 3)
		{
			cout << "\n�������� ������: ";
			cout << "\n1 - ������������ (S)";
			cout << "\n2 - ��������� ���� (S)";
			cout << "\n3 - �������� ���� (S)";
			cout << "\n4 - ��������� ��������� (G)";
			cout << "\n5 - ��������� ������-������� (G+)";
			cout << "\n6 - ��������� ������� (G+)\n";

			service = getaNumb(1, 6);
			if (((insType == 1) && ((service == 4) || (service == 5) || (service == 6))) || ((insType == 2) && ((service == 5) || (service == 6))))
			{
				error = 1;
			}
		}
		else if (category == 4)
		{
			cout << "\n�������� ������: ";
			cout << "\n1 - ������������ (S)";
			cout << "\n2 - ��������� ���� (S)";
			cout << "\n3 - ��� ��������� (G)";
			cout << "\n4 - ������/���������� ������� (G)";
			cout << "\n5 - ������������ (G+)\n";

			service = getaNumb(1, 5);
			if (((insType == 1) && ((service == 3) || (service == 4) || (service == 5))) || ((insType == 2) && (service == 5)))
			{
				error = 1;
			}
		}
		else if (category == 5)
		{
			cout << "\n�������� ������: ";
			cout << "\n1 - ������������ (S)";
			cout << "\n2 - ��������� ���� (S)";
			cout << "\n3 - �������� ������ (G)";
			cout << "\n4 - ��������� ������ (G+)";
			cout << "\n5 - �������� ���� ����� (G+)\n";

			service = getaNumb(1, 5);
			if (((insType == 1) && ((service == 3) || (service == 4) || (service == 5))) || ((insType == 2) && ((service == 4) || (service == 5))))
			{
				error = 1;
			}
		}
		if (error == 0)
		{
			cout << "\n������� ����� (1-12): ";
			month = getaNumb(1, 12);

			cout << "\n������� ���� (1-31): ";
			day = getaNumb(1, 31);

			cin.clear();
			while (cin.get() != '\n');

			SeeDoctor* ptrSeeDoctor = new SeeDoctor(month, day, category, service, insNo);
			ptrSeeDoctorRecord->insertSeeDoctor(ptrSeeDoctor);
		}
		else 
		{
			cout << "\n��� ������ ���������� ��� ����� ���� �����������\n\n";
			system("pause");
			cin.clear();
			while (cin.get() != '\n');
		}
	}
	else 
	{
		cout << "\n� ���� ��� ��������\n\n";
		system("pause");
		cin.clear();
		while (cin.get() != '\n');
	}
}