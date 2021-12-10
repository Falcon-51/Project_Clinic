#pragma once
#include "Clinic.h"
#include "Client.h"

// ����� ClientList � ���� ������ ��������.

class ClientList
{
private:
	list <Client*> clientPtrList; // ��������� �� ����� Client
	list <Client*>::iterator iter; // ��������

public:

	~ClientList(); // ����������
	void insertClient(Client*); // �������� ������� � ������
	int getNumbByName(string); // ���������� ����� ����������� �� ����� �������
	void showClientList(); // ����� ������� 
};
