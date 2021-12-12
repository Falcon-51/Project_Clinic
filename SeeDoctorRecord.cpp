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

/*
void SeeDoctorRecord::showService(int key)
{
	
	switch (key)
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
	} cout << '\t' << '\t';

}*/



void SeeDoctorRecord::showSeeDoctor()
{
	cout << "\n����\t����\t\t������\t\t����� ���������\n"
		<< "----------------------------------------------------\n" << endl;
	if (vectPtrSeeDoctor.size() == 0)
		cout << "***������� ���***\n" << endl;
	else
	{

		iter = vectPtrSeeDoctor.begin();
		while (iter != vectPtrSeeDoctor.end())
		{
			cout << (*iter)->month << '/' << (*iter)->day << '\t';
				
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
			} cout << '\t' << '\t'; 
			


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
					cout << "������������ ������";
					break;

				case 4:
					cout << "������������ � ������� ����";
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
					cout << "������ ����";
					break;

				case 4:
					cout << "����������� �� �������";
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
					cout << "��������� ������-�������";
					break;

				case 4:
					cout << "��������� �������";
					break;

				case 5:
					cout << "��������� ���������";
					break;

				case 6:
					cout << "�������� ����";
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
					cout << "������������";
					break;

				case 5:
					cout << "������/���������� �������";
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
					cout << "��������� ������";
					break;

				case 4:
					cout << "�������� ������";
					break;

				case 5:
					cout << "�������� ���� �����";
					break;

				default:
					cout << "none";
					break;
				}


			cout << '\t' << '\t' << (*iter)->insNo << endl;
			iter++;
		}
		cout << endl;
	}
	system("pause");
}


