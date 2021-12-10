#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "ClientInputScreen.h"
#include "Menu.h"

using namespace std;

int main()
{
	setlocale(0, "rus");
	Menu menu;
	menu.interact();

	return 0;
}