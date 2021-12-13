#pragma once
#include "Clinic.h"
#include "Client.h"
#include "SeeDoctor.h"
#include "SeeDoctorRecord.h"

class SeeDoctorInputScreen
{
private:
	SeeDoctorRecord* ptrSeeDoctorRecord;
	ClientList* ptrClientList;

public:
	SeeDoctorInputScreen(SeeDoctorRecord*, ClientList*);
	void setSeeDoctor();
};
