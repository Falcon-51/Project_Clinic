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
	cout << "Запись к врачу:\n";

	cout << "\nНомер страхования:  ";
	insNo = getaNumb(111111, 999999);
	while (true)
	{
		if (ptrClientList->checkNumb(insNo) == -1)
		{
			cout << "\nВ базе нет такого клиента, повторите ввод:  ";
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
		cout << "\nВыберите врача: ";
		cout << "\n1 - Ортопед ";
		cout << "\n2 - Дерматолог ";
		cout << "\n3 - Стоматолог ";
		cout << "\n4 - Врач спортивной медицины ";
		cout << "\n5 - Окулист\n";

		category = getaNumb(1, 5);

		if (category == 1)
		{
			cout << "\nВыберите услугу: ";
			cout << "\n1 - Консультация (S)";
			cout << "\n2 - Повторный приём (S)";
			cout << "\n3 - Профилактика и лечение грыж (G)";
			cout << "\n4 - Изготовление стелек и фиксаторов (G+)\n";

			service = getaNumb(1, 4);

			if (((insType == 1) && ((service == 3) || (service == 4))) || ((insType == 2) && (service == 4)))
			{
				error = 1;
			}
		}
		else if (category == 2)
		{
			cout << "\nВыберите услугу: ";
			cout << "\n1 - Консультация (S)";
			cout << "\n2 - Повторный приём (S)";
			cout << "\n3 - Направление на анализы (S)";
			cout << "\n4 - Чистка кожи (G)";
			cout << "\n5 - Косметические дефекты (G+)\n";

			service = getaNumb(1, 5);
			if (((insType == 1) && ((service == 4) || (service == 5))) || ((insType == 2) && (service == 5)))
			{
				error = 1;
			}
		}
		else if (category == 3)
		{
			cout << "\nВыберите услугу: ";
			cout << "\n1 - Консультация (S)";
			cout << "\n2 - Повторный приём (S)";
			cout << "\n3 - Удаление зуба (S)";
			cout << "\n4 - Установка имплантов (G)";
			cout << "\n5 - Установка брекет-системы (G+)";
			cout << "\n6 - Установка виниров (G+)\n";

			service = getaNumb(1, 6);
			if (((insType == 1) && ((service == 4) || (service == 5) || (service == 6))) || ((insType == 2) && ((service == 5) || (service == 6))))
			{
				error = 1;
			}
		}
		else if (category == 4)
		{
			cout << "\nВыберите услугу: ";
			cout << "\n1 - Консультация (S)";
			cout << "\n2 - Повторный приём (S)";
			cout << "\n3 - ЛФК процедуры (G)";
			cout << "\n4 - Массаж/мануальные техники (G)";
			cout << "\n5 - Реабилитация (G+)\n";

			service = getaNumb(1, 5);
			if (((insType == 1) && ((service == 3) || (service == 4) || (service == 5))) || ((insType == 2) && (service == 5)))
			{
				error = 1;
			}
		}
		else if (category == 5)
		{
			cout << "\nВыберите услугу: ";
			cout << "\n1 - Консультация (S)";
			cout << "\n2 - Повторный приём (S)";
			cout << "\n3 - Проверка зрения (G)";
			cout << "\n4 - Коррекция зрения (G+)";
			cout << "\n5 - Корреция линз очков (G+)\n";

			service = getaNumb(1, 5);
			if (((insType == 1) && ((service == 3) || (service == 4) || (service == 5))) || ((insType == 2) && ((service == 4) || (service == 5))))
			{
				error = 1;
			}
		}
		if (error == 0)
		{
			cout << "\nВведите месяц (1-12): ";
			month = getaNumb(1, 12);

			cout << "\nВведите день (1-31): ";
			day = getaNumb(1, 31);

			cin.clear();
			while (cin.get() != '\n');

			SeeDoctor* ptrSeeDoctor = new SeeDoctor(month, day, category, service, insNo);
			ptrSeeDoctorRecord->insertSeeDoctor(ptrSeeDoctor);
		}
		else 
		{
			cout << "\nЭта услуга недоступна при таком типе страхования\n\n";
			system("pause");
			cin.clear();
			while (cin.get() != '\n');
		}
	}
	else 
	{
		cout << "\nВ базе нет клиентов\n\n";
		system("pause");
		cin.clear();
		while (cin.get() != '\n');
	}
}