#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"

/////////////////Класс UserInterface//////////////////////
//Главный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
class Menu
{
private:
	ClientList* ptrClientList;
	ClientInputScreen* ptrClientInputScreen;
	
	char ch;

public:
	Menu();
	~Menu();
	void interact();
}; // конец класса userInterfac