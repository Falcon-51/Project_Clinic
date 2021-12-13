#include "Clinic.h"
#include "Client.h"
#include "SeeDoctorRecord.h"

SeeDoctorRecord::~SeeDoctorRecord()
{
	while (!vectPtrSeeDoctor.empty())
	{
		iter = vectPtrSeeDoctor.begin();
		delete* iter;
		vectPtrSeeDoctor.erase(iter);
	}
}

void SeeDoctorRecord::insertSeeDoctor(SeeDoctor* ptrExp)
{
	vectPtrSeeDoctor.push_back(ptrExp);
}

void SeeDoctorRecord::showSeeDoctor()
{
	system("cls");
	cout << "|| ����  || ����� ��������� || ����                           || ������                         ||" << endl;
	cout << "||_______||_________________||________________________________||________________________________||" << endl;
	if (vectPtrSeeDoctor.size() == 0) 
	{
		cout << "||                                                                                              ||" << endl;
		cout << "||                                          ��� �������                                         ||" << endl;
		cout << "||______________________________________________________________________________________________||" << endl;
	}
	else
	{

		iter = vectPtrSeeDoctor.begin();
		while (iter != vectPtrSeeDoctor.end())
		{
			cout.width(3);
			cout << "|| ";

			cout.width(2);
			cout << (*iter)->month;
			cout << "/";

			if ((*iter)->day > 9)
			{
				cout.width(2);
				cout << (*iter)->day;
			}
			else
			{
				cout.width(1);
				cout << (*iter)->day << " ";
			}

			cout.width(4);
			cout << " || ";

			cout.width(15);
			cout << (*iter)->insNo;

			cout.width(4);
			cout << " || ";

			cout.width(30);
			switch ((*iter)->getDoctor())
			{
			case 1:
				cout << "�������";
				break;

			case 2:
				cout << "����������";
				break;

			case 3:
				cout << "����������";
				break;

			case 4:
				cout << "���� ���������� ��������";
				break;

			case 5:
				cout << "�������";
				break;

			default:
				cout << "none";
				break;
			}
			
			cout.width(4);
			cout << " || ";

			cout.width(30);
			if((*iter)->category == 1)
			switch ((*iter)->getService())
			{
				case 1:
					cout << "������������";
					break;

				case 2:
					cout << "��������� ����";
					break;

				case 3:
					cout << "������������ � ������� ����";
					break;

				case 4:
					cout << "������������ ������";
					break;

				default:
					cout << "none";
					break;
			} 

			if ((*iter)->category == 2)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "������������";
					break;

				case 2:
					cout << "��������� ����";
					break;

				case 3:
					cout << "����������� �� �������";
					break;

				case 4:
					cout << "������ ����";
					break;

				case 5:
					cout << "������������� �������";
					break;

				default:
					cout << "none";
					break;
				}

			if ((*iter)->category == 3)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "������������";
					break;

				case 2:
					cout << "��������� ����";
					break;

				case 3:
					cout << "�������� ����";
					break;

				case 4:
					cout << "��������� ���������";
					break;

				case 5:
					cout << "��������� ������-�������";
					break;

				case 6:
					cout << "��������� �������";
					break;

				default:
					cout << "none";
					break;
				}

			if ((*iter)->category == 4)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "������������";
					break;

				case 2:
					cout << "��������� ����";
					break;

				case 3:
					cout << "��� ���������";
					break;

				case 4:
					cout << "������/���������� �������";
					break;

				case 5:
					cout << "������������";
					break;

				default:
					cout << "none";
					break;
				}

			if ((*iter)->category == 5)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "������������";
					break;

				case 2:
					cout << "��������� ����";
					break;

				case 3:
					cout << "�������� ������";
					break;

				case 4:
					cout << "��������� ������";
					break;

				case 5:
					cout << "�������� ���� �����";
					break;

				default:
					cout << "none";
					break;
				}

			cout.width(3);
			cout << " ||" << endl;

			iter++;
		}
		cout << "||_______||_________________||________________________________||________________________________||" << endl;
	}
	cout << endl;
	system("pause");
}


