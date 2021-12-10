#include "Clinic.h"
#include "Client.h"
#include "ClientInputScreen.h"
#include "ClientList.h"
#include "Menu.h"
//---------------------------------------------------------
////////////////������ ������ userInterface//////////////
Menu::Menu()
{
	ptrClientList = new ClientList;
	ptrExpensesRecord = new ExpensesRecord;
}
//---------------------------------------------------------
Menu::~Menu()
{
	delete ptrClientList;
	delete ptrExpensesRecord;
}
//---------------------------------------------------------
void Menu::interact()
{
	while (true)
	{
		cout << "��� ����� ������ ������� 'i', \n"
			<< " ��� ������ ������ 'd', \n"
			<< " ��� ������ 'q': \n";
		ch = getaChar();
		system("cls");
		if (ch == 'i') // ���� ������
		{
			cout << " ������� ��� ���������� ������� 't', \n"
				<< " ��� ������ �������� 'e': \n";
			ch = getaChar();
			switch (ch)
			{
				//������ ����� ���������� ������ �� ����� ��
				//�������������
			case 't': ptrClientInputScreen =
				new ClientInputScreen(ptrClientList);
				ptrClientInputScreen->setClient();
				delete ptrClientInputScreen;
				break;

			case 'e': ptrExpensesInputScreen =
				new ExpensesInputScreen(ptrExpensesRecord);
				ptrExpensesInputScreen->setExpense();
				delete ptrExpensesInputScreen;
				break;

			default: cout << "����������� �������\n";
				break;
			} // ����� ������ switch
		} // ����� ������� if
		else if (ch == 'd') // ����� ������
		{
			cout << "������� ��� ������ ������� 't', \n";
			
			ch = getaChar();
			switch (ch)
			{
			case 't': ptrClientList->showClientList();
				break;

			} 
		} // ����� elseif
		else if (ch == 'q')
			return; // �����
		else
			cout << "����������� �������. ��������� ������ 'i', 'd' ��� 'q'\n";
	} // ����� while
} // ����� interact()
//////////////////�