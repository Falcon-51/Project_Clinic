#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
using namespace std;

static int standartPay = 500;
static int goldPay = 1000;
static int goldPlusPay = 2000;

string getaLine(int n); // получение строки текста
char getaChar(); // получение символа
int getaNumb(int min, int max);