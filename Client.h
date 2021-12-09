#include "Clinic.h"


//////////////////// класс Client (жильцы) //////////////////
//Он хранит имя клиента и номер страховки,тип страховки, период страховки.
class Client
{
private:
	string name; // имя жильца
	int insuranceNumber; // номер страховки
	int insuranceType;
	int insurancePeriod;
	// здесь может быть прочая информация о жильце
	// (телефон и т.п.)

public:
	Client(string n, int iNo, int iType, int iPrd);
	~Client();
};