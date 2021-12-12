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


	cout << "Введите месяц (1-12): ";
	cin >> month;
	cin.ignore(80, '\n');


	cout << "Введите день (1-31): ";
	cin >> day;
	cin.ignore(80, '\n');

	cout << "Выберите врача: " << endl;
	cout << "1.Ортопед " << endl;
	cout << "2.Дерматолог " << endl;
	cout << "3.Стоматолог " << endl;
	cout << "4.Врач спортивной медицины " << endl;
	cout << "5.Окулист " << endl;
	cin >> category;
	cin.ignore(80, '\n');

		if (category == 1)
		{
			cout << "Выберите услугу: " << endl;
			cout << "1.Консультация " << endl;
			cout << "2.Повторный приём " << endl;
			cout << "3.Изготовление стелек " << endl;
			cout << "4.Профилактика и лечение грыж " << endl;
			cin >> service;
			cin.ignore(80, '\n');
		}


		else if(category == 2)
		{
			cout << "Выберите услугу: " << endl;
			cout << "1.Консультация " << endl;
			cout << "2.Повторный приём " << endl;
			cout << "3.Чистка кожи " << endl;
			cout << "4.Направление на анализы " << endl;
			cout << "5.Косметические дефекты " << endl;
			cin >> service;
			cin.ignore(80, '\n');
		}


		else if (category == 3)
		{
			cout << "Выберите услугу: " << endl;
			cout << "1.Консультация " << endl;
			cout << "2.Повторный приём " << endl;
			cout << "3.Установка брекет-системы " << endl;
			cout << "4.Установка виниров " << endl;
			cout << "5.Установка имплантов " << endl;
			cout << "6.Удаление зуба " << endl;
			cin >> service;
			cin.ignore(80, '\n');

		}


		else if (category == 4)
		{
			cout << "Выберите услугу: " << endl;
			cout << "1.Консультация " << endl;
			cout << "2.Повторный приём " << endl;
			cout << "3.ЛФК процедуры " << endl;
			cout << "4.Реабилитация" << endl;
			cout << "5.Массаж/мануальные техники " << endl;
			cin >> service;
			cin.ignore(80, '\n');

		}


		else if (category == 5)
		{
			cout << "Выберите услугу: " << endl;
			cout << "1.Консультация " << endl;
			cout << "2.Повторный приём " << endl;
			cout << "3.Коррекция зрения " << endl;
			cout << "4.Проверка зрения " << endl;
			cout << "5.Корреция линз очков " << endl;
			cin >> service;
			cin.ignore(80, '\n');

		}


	cout << "Введите номер страховки: ";
	cin >> insNo;
	cin.ignore(80, '\n');
	SeeDoctor* ptrSeeDoctor = new SeeDoctor(month, day, category, service, insNo);
	ptrSeeDoctorRecord->insertSeeDoctor(ptrSeeDoctor);
}