#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ClientList.h"
#include "Menu.h"
//---------------------------------------------------------
////////////////методы класса userInterface//////////////
Menu::Menu()
{
	ptrClientList = new ClientList;
	
}
//---------------------------------------------------------
Menu::~Menu()
{
	delete ptrClientList;
	
}
//---------------------------------------------------------
void Menu::interact()
{
	while (true)
	{
		cout << "Для ввода данных нажмите 'i', \n"
			<< " для вывода отчета 'd', \n"
			<< " для выхода 'q': \n";
		ch = getaChar();
		if (ch == 'i') // ввод данных
		{
			cout << " нажмите для добавления жильца 't', \n"
				<< " для записи арендной платы 'r', \n"
				<< " для записи расходов 'e': \n";
			ch = getaChar();
			switch (ch)
			{
				//экраны ввода существуют только во время их
				//использования
			case 't': ptrClientInputScreen =
				new ClientInputScreen(ptrClientList);
				ptrClientInputScreen->setClient();
				delete ptrClientInputScreen;
				break;

			default: cout << "Неизвестная функция\n";
				break;
			} // конец секции switch
		} // конец условия if
		else if (ch == 'd') // вывод данных
		{
			cout << "Нажмите для вывода жильцов 't', \n";
			
			ch = getaChar();
			switch (ch)
			{
			case 't': ptrClientList->showClientList();
				break;
			
			} 
		} // конец elseif
		else if (ch == 'q')
			return; // выход
		else
			cout << "Неизвестная функция. Нажимайте только 'i', 'd' или 'q'\n";
	} // конец while
} // конец interact()
//////////////////к