
#include <string>
#include <iostream>
#include <cassert>
#include "BusFleet.h"
#include "TestBusFleet.h"
#include "LogDuration.h"

using namespace std;

void testBusFleet() {
	LOG_DURATION("BusFleet");
	BusFleet busFleet;
	Bus bus1(1, "Жмышенко В.А.", 1);
	Bus bus2(2, "Прокопенко В.А.", 2);
	Bus bus3(3, "Нежмышенко В.А.", 3);
	Bus bus4(4, "Развенко В.А.", 4);

	busFleet.addBus(bus1);
	busFleet.addBus(bus2);
	busFleet.addBus(bus3);
	busFleet.addBus(bus4);
	
	busFleet.busToRoute(3);
	busFleet.busToRoute(2);
	busFleet.busToRoute(1);
	busFleet.busToFleet(3);

	Bus busTest00 = *busFleet.getBusFleetList().begin();
	Bus busTest01 = *(++busFleet.getBusFleetList().begin());
	Bus busTest02 = *busFleet.getBusRouteList().begin();
	Bus busTest03 = *(++busFleet.getBusRouteList().begin());

	busFleet.showBusFleet();
	busFleet.showBusRoute();

	assert(busTest00.getBusNumber() == 4);
	assert(busTest01.getBusNumber() == 3);
	assert(busTest02.getBusNumber() == 2);
	assert(busTest03.getBusNumber() == 1);

	cout << "класс BusFleet тесты прошёл успешно" << endl;
};

