#include "Clinic.h"
#include "Client.h"
#include "SeeDoctorInputScreen.h"
#include "SeeDoctorRecord.h"

SeeDoctorInputScreen::SeeDoctorInputScreen(SeeDoctorRecord* per) : ptrSeeDoctorRecord(per)
{
}

void SeeDoctorInputScreen::setSeeDoctor()
{
	int month, day, insNo;
	int category, service;


	cout << "������� ����� (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');


	cout << "������� ���� (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');

	cout << "�������� �����: " << endl;
	cout << "1.������� " << endl;
	cout << "2.���������� " << endl;
	cout << "3.���������� " << endl;
	cout << "4.���� ���������� �������� " << endl;
	cout << "5.������� " << endl;
	cin >> category;
	cin.ignore(80, '\n');

		if (category == 1)
		{
			cout << "�������� ������: " << endl;
			cout << "1.������������ " << endl;
			cout << "2.��������� ���� " << endl;
			cout << "3.������������ ������ " << endl;
			cout << "4.������������ � ������� ���� " << endl;
			cin >> service;
			cin.ignore(80, '\n');
		}


		else if(category == 2)
		{
			cout << "�������� ������: " << endl;
			cout << "1.������������ " << endl;
			cout << "2.��������� ���� " << endl;
			cout << "3.������ ���� " << endl;
			cout << "4.����������� �� ������� " << endl;
			cout << "5.������������� ������� " << endl;
			cin >> service;
			cin.ignore(80, '\n');
		}


		else if (category == 3)
		{
			cout << "�������� ������: " << endl;
			cout << "1.������������ " << endl;
			cout << "2.��������� ���� " << endl;
			cout << "3.��������� ������-������� " << endl;
			cout << "4.��������� ������� " << endl;
			cout << "5.��������� ��������� " << endl;
			cout << "6.�������� ���� " << endl;
			cin >> service;
			cin.ignore(80, '\n');

		}


		else if (category == 4)
		{
			cout << "�������� ������: " << endl;
			cout << "1.������������ " << endl;
			cout << "2.��������� ���� " << endl;
			cout << "3.��� ��������� " << endl;
			cout << "4.������������" << endl;
			cout << "5.������/���������� ������� " << endl;
			cin >> service;
			cin.ignore(80, '\n');

		}


		else if (category == 5)
		{
			cout << "�������� ������: " << endl;
			cout << "1.������������ " << endl;
			cout << "2.��������� ���� " << endl;
			cout << "3.��������� ������ " << endl;
			cout << "4.�������� ������ " << endl;
			cout << "5.�������� ���� ����� " << endl;
			cin >> service;
			cin.ignore(80, '\n');

		}


	cout << "������� ����� ���������: ";
	cin >> insNo;
	cin.ignore(80, '\n');
	SeeDoctor* ptrSeeDoctor = new SeeDoctor(month, day, category, service, insNo);
	ptrSeeDoctorRecord->insertSeeDoctor(ptrSeeDoctor);
}