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
	Bus bus(123, "Жмышенко В.А.", 228);
	assert(bus.getBusNumber() == 123);
	assert(bus.getFIO() == "Жмышенко В.А.");
	assert(bus.getRouteNumber() == 228);
	assert(bus.getStatus() == "inFleet");

	bus.setStatus("onRoute");
	assert(bus.getStatus() == "onRoute");

	cout << "Класс Bus тесты прошёл успешно\n\n";
}

#endif // TESTBUS_CPP