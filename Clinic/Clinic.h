//Clinic.h
//������������ ���� �������� ���������� ������� � �.�.
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
using namespace std;

#define stdrtPay = 500;
#define	goldPay = 1000;
#define	goldPayPlus = 1000;

//////////////////// ���������� ������ //////////////////////
void getaLine(string& inStr); // ��������� ������ ������
char getaChar(); // ��������� �������