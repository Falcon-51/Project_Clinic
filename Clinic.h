#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
using namespace std;

static int standartPay = 500;
static int goldPay = 1000;
static int goldPlusPay = 2000;

string getaLine(int n); // ��������� ������ ������
char getaChar(); // ��������� �������
int getaNumb(int min, int max);