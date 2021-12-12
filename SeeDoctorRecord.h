#pragma once
#include "Clinic.h"
#include "Client.h"
#include "SeeDoctor.h"

class SeeDoctorRecord
{
private:
	vector<SeeDoctor*> vectPtrSeeDoctor;
	vector<SeeDoctor*>::iterator iter;

public:
	~SeeDoctorRecord();
	void insertSeeDoctor(SeeDoctor*);
	void showSeeDoctor();
	void showService(int);
};
