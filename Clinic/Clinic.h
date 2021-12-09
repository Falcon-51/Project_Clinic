//Clinic.h
//заголовочный файл содержит объ€влени€ классов и т.п.
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //дл€ accumulate()
using namespace std;

#define stdrtPay = 500;
#define	goldPay = 1000;
#define	goldPayPlus = 1000;

//////////////////// глобальные методы //////////////////////
void getaLine(string& inStr); // получение строки текста
char getaChar(); // получение символа