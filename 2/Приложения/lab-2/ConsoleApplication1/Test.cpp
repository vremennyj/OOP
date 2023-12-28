#include <string>
#include <iostream>
#include <cassert>
#include "Test.h"
#include "Address.h"
#include "LogDuration.h"
using namespace std;

void test() {
	LOG_DURATION("Address");
	OrganizationAddress ncfu("улица", "Пушкина", "", "1", "", "", "город", "Ставрополь", "Ставропольский край", "Россия", "355017");
	assert(*ncfu.getCountry() == "Россия");
	assert(*ncfu.getRegion() == "Ставропольский край");
	assert(*ncfu.getTypeOfCity() == "город");
	assert(*ncfu.getNameOfCity() == "Ставрополь");
	assert(*ncfu.getTypeOfStreet() == "улица");
	assert(*ncfu.getNameOfStreet() == "Пушкина");
	assert(*ncfu.getNumberOfBuilding() == "1");
	ncfu.setValue(ncfu.getTypeOfCity(), "посёлок городского типа");
	assert(*ncfu.getTypeOfCity() == "посёлок городского типа");
	cout << "Класс OrganizationAddress тесты прошёл усешно";
};
