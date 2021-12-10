#include "Clinic.h"
#include "Client.h"
#include "ClientList.h"
#include "StartProgram.h"
#include "NewInsurance.h"
using namespace std;

int main()
{
	setlocale(0, "rus");
	
	StartProgram director;
	director.interface();

	return 0;
}