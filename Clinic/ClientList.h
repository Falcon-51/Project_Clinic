#include "Clinic.h"
#include "Client.h"

///////////////////����� ClientList////////////////////////
//����� TenantList � ������ ���� �������.
//�� �������� ��������� ���������� �� ����� Tenant
// � ��������� ��� ��� ������
class ClientList
{
private:
	// ���������� ��������� �� �������
	list <Client*> setPtrsClients; // ��������� �� ����� �������
	list <Client*>::iterator iter; //��������

public:
	~ClientList(); // ���������� (�������� �������)
	void insertClient(Client*); // �������� ������� � ������
	int getInsNo(string); // ���������� ����� ������������
	void display(); // ����� ������ �������
};
