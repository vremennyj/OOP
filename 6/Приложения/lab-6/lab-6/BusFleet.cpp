#include <iostream>
#include <string>
#include <list>
#include "BusFleet.h"


using namespace std;


BusFleet::BusFleet() {};

void BusFleet::addBus(Bus bus) {
	busFleetList.push_back(bus);
}

void BusFleet::busToRoute(int num) {
    int i = 0;
    auto it = next(busFleetList.begin(), i); 
    for (auto& bus : busFleetList) {
        if (bus.getBusNumber() == num) {
            bus.setStatus("onRoute");
            busRouteList.push_back(bus);
            busFleetList.erase(it);
            i = 0;
            break;
        }
        i++;
        it = next(busFleetList.begin(), i);
    }
}

void BusFleet::busToFleet(int num) {
    int i = 0;
    auto it = next(busRouteList.begin(), i);
    for (auto& bus : busRouteList) {
        if (bus.getBusNumber() == num) {
            bus.setStatus("inFleet");
            busFleetList.push_back(bus);
            busRouteList.erase(it);
            i = 0;
            break;
        }
        i++;
        it = next(busFleetList.begin(), i);
    }
    
}

void BusFleet::showBusFleet() {
        cout << "---Автобусы в парке---\n";
    for (Bus bus : busFleetList) {
        bus.show();
    }
        cout << "----------------------\n";
}

void BusFleet::showBusRoute() {
        cout << "- Автобусы на маршруте -\n";
    for (Bus bus : busRouteList) {
        bus.show();
    }
        cout << "----------------------\n";
}

list<Bus> BusFleet::getBusFleetList() {
    return busFleetList;
}

list<Bus> BusFleet::getBusRouteList() {
    return busRouteList;
}