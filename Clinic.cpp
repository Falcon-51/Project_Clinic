#include <iostream>
#include "Clinic.h"


string getaLine(int n)
{
    string inStr;
    char line[42];
	cin.get(line, n+1, '\n');
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
    inStr = line;
    return inStr;
}

char getaChar()
{
	char ch = cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return ch;
}

int getaNumb(int min, int max)
{
    int n;
    for (;;)
    {
        if ((cin >> n).good() && (min <= n) && (n <= max))
            return n;

        if (cin.fail())
        {
            cin.clear();
            cout << "\nНеверный ввод, повторите\n";
        }
        else
        {
            cout << "\nЧисло вне допустимого диапазона значений. Повторите ввод\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}