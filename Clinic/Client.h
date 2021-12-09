#include "Clinic.h"


//////////////////// ����� Client  //////////////////
//�� ������ ��� �������, ����� ���������, ��� ���������, ������ ���������.
class Client
{
private:
	string name; // ��� ������
	int insuranceNumber; // ����� ���������
	int insuranceType;
	int insurancePeriod;
	// ����� ����� ���� ������ ���������� � ������
	// (������� � �.�.)

public:
	Client(string n, int iNo, int iType, int iPrd);
	~Client();
	int getInsNumber(); //���������� ����� ������� ������
	string getName(); //���������� ��� ������
};