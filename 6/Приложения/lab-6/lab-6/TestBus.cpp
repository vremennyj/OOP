#ifndef TESTBUS_CPP
#define TESTBUS_CPP

#include <string>
#include <iostream>
#include <cassert>
#include "Bus.h"
#include "TestBus.h"
#include "LogDuration.h"

void testBus() {
	LOG_DURATION("bus");
	//for (int i = 0; i < 15000; ++i) {
	//	cout << "asdsa" << endl;
	//}
	Bus bus(123, "�������� �.�.", 228);
	assert(bus.getBusNumber() == 123);
	assert(bus.getFIO() == "�������� �.�.");
	assert(bus.getRouteNumber() == 228);
	assert(bus.getStatus() == "inFleet");

	bus.setStatus("onRoute");
	assert(bus.getStatus() == "onRoute");

	cout << "����� Bus ����� ������ �������\n\n";
}

#endif // TESTBUS_CPP