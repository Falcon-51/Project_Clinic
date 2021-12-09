#include "Clinic.h"


//////////////////// класс Client  //////////////////
//Он хранит имя клиента, номер страховки, тип страховки, период страховки.
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
	int getInsNumber(); //возвращает номер комнаты жильца
	string getName(); //возвращает имя жильца
};