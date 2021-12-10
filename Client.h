#pragma once
#include "Clinic.h"

// ����� Client, ������ ������ �������
class Client 
{
private:
	string name; // ��� �������
	int insNumber; // ����� ���������
	int insType; // ��� ��������� (1-standart/2-gold/3-goldPlus)
	int insPeriod; // ������ �����������

public:
	Client(string n, int iNo, int iType, int iPrd); // �������� ������ ������� ����� ����������� � �����������
	~Client(); // ����������

	string getName(); //���������� ��� �������
	int getInsNumber(); //���������� ����� ���������
	int getInsType(); // ���������� ��� ���������
	int getInsPeriod(); // ���������� ������ �����������
};