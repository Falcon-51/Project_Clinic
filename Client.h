#pragma once
#include "Clinic.h"

// Класс Client, хранит данные клиента
class Client 
{
private:
	string name; // имя клиента
	int insNumber; // номер страховки
	int insType; // тип страховки (1-standart/2-gold/3-goldPlus)
	int insPeriod; // период страхования

public:
	Client(string n, int iNo, int iType, int iPrd); // создание нового клиента через конструктор с параметрами
	~Client(); // деструктор

	string getName(); //возвращает имя клиента
	int getInsNumber(); //возвращает номер страховки
	int getInsType(); // возвращает тип страховки
	int getInsPeriod(); // возвращает период страхования
};