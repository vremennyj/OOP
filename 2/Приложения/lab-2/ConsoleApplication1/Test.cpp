#include <string>
#include <iostream>
#include <cassert>
#include "Test.h"
#include "Address.h"
#include "LogDuration.h"
using namespace std;

void test() {
	LOG_DURATION("Address");
	OrganizationAddress ncfu("�����", "�������", "", "1", "", "", "�����", "����������", "�������������� ����", "������", "355017");
	assert(*ncfu.getCountry() == "������");
	assert(*ncfu.getRegion() == "�������������� ����");
	assert(*ncfu.getTypeOfCity() == "�����");
	assert(*ncfu.getNameOfCity() == "����������");
	assert(*ncfu.getTypeOfStreet() == "�����");
	assert(*ncfu.getNameOfStreet() == "�������");
	assert(*ncfu.getNumberOfBuilding() == "1");
	ncfu.setValue(ncfu.getTypeOfCity(), "������ ���������� ����");
	assert(*ncfu.getTypeOfCity() == "������ ���������� ����");
	cout << "����� OrganizationAddress ����� ������ ������";
};
