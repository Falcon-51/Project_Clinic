#pragma once
#include "Clinic.h"
#include "Client.h"
#include "SeeDoctor.h"
#include "SeeDoctorRecord.h"

class SeeDoctorInputScreen
{
private:
	SeeDoctorRecord* ptrSeeDoctorRecord;

public:
	SeeDoctorInputScreen(SeeDoctorRecord*);
	void setSeeDoctor();
};
