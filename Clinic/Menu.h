#pragma once

#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"

/////////////////����� UserInterface//////////////////////
//������� ����� ��� ������� ����������:
//���� ����� ���������� �������������� ����� � ����������.
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
}; // ����� ������ userInterfac