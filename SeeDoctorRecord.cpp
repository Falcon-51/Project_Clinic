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
		cout << "Ортопед";
		break;

	case 2:
		cout << "Дерматолог";
		break;

	case 3:
		cout << "Стоматолог";
		break;

	case 4:
		cout << "Врач спортивной медицины";
		break;

	case 5:
		cout << "Окулист";
		break;

	default:
		cout << "none";
		break;
	} cout << '\t' << '\t';

}*/



void SeeDoctorRecord::showSeeDoctor()
{
	cout << "\nДата\tВрач\t\tУслуга\t\tНомер страховки\n"
		<< "----------------------------------------------------\n" << endl;
	if (vectPtrSeeDoctor.size() == 0)
		cout << "***Записей нет***\n" << endl;
	else
	{

		iter = vectPtrSeeDoctor.begin();
		while (iter != vectPtrSeeDoctor.end())
		{
			cout << (*iter)->month << '/' << (*iter)->day << '\t';
				
			switch ((*iter)->getDoctor())
			{
			case 1:
				cout << "Ортопед";
				break;

			case 2:
				cout << "Дерматолог";
				break;

			case 3:
				cout << "Стоматолог";
				break;

			case 4:
				cout << "Врач спортивной медицины";
				break;

			case 5:
				cout << "Окулист";
				break;

			default:
				cout << "none";
				break;
			} cout << '\t' << '\t'; 
			


			if((*iter)->category == 1)
			switch ((*iter)->getService())
			{
				case 1:
					cout << "Консультация";
					break;

				case 2:
					cout << "Повторный приём";
					break;

				case 3:
					cout << "Изготовление стелек";
					break;

				case 4:
					cout << "Профилактика и лечение грыж";
					break;

				default:
					cout << "none";
					break;
			} 

			if ((*iter)->category == 2)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "Консультация";
					break;

				case 2:
					cout << "Повторный приём";
					break;

				case 3:
					cout << "Чистка кожи";
					break;

				case 4:
					cout << "Направление на анализы";
					break;

				case 5:
					cout << "Косметические дефекты";
					break;

				default:
					cout << "none";
					break;
				}

			if ((*iter)->category == 3)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "Консультация";
					break;

				case 2:
					cout << "Повторный приём";
					break;

				case 3:
					cout << "Установка брекет-системы";
					break;

				case 4:
					cout << "Установка виниров";
					break;

				case 5:
					cout << "Установка имплантов";
					break;

				case 6:
					cout << "Удаление зуба";
					break;

				default:
					cout << "none";
					break;
				}

			if ((*iter)->category == 4)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "Консультация";
					break;

				case 2:
					cout << "Повторный приём";
					break;

				case 3:
					cout << "ЛФК процедуры";
					break;

				case 4:
					cout << "Реабилитация";
					break;

				case 5:
					cout << "Массаж/мануальные техники";
					break;

				default:
					cout << "none";
					break;
				}

			if ((*iter)->category == 5)
				switch ((*iter)->getService())
				{
				case 1:
					cout << "Консультация";
					break;

				case 2:
					cout << "Повторный приём";
					break;

				case 3:
					cout << "Коррекция зрения";
					break;

				case 4:
					cout << "Проверка зрения";
					break;

				case 5:
					cout << "Корреция линз очков";
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


