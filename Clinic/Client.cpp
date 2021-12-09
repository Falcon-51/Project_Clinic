#include <iostream>
#include "Clinic.h"
#include "Client.h"


////////////////������ ������ Tenant///////////////////////
//� ������������ ����� ��� ������ � ����� �������

Client::Client(string n, int iNo, int iType, int iPrd) : name(n), insuranceNumber(iNo), insuranceType(iType), insurancePeriod(iPrd)
{
	/* ��� ����� */
}

//---------------------------------------------------------
Client::~Client() // ����������
{
	/* ��� ���� ����� */
}

//---------------------------------------------------------
int Client::getInsNumber() //������ ���������� ����� ������� ������
{
	return insuranceNumber;
}

//--------------------------------------------------------
string Client::getName() //������ ���������� ��� ������
{
	return name;
}