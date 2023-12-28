#ifndef BUSFLEET_H
#define BUSFLEET_H

#include <list>
#include "Bus.h"

class BusFleet {
private:
    list<Bus> busFleetList;
    list<Bus> busRouteList;

public:
    BusFleet();
    void addBus(Bus bus);
    void busToRoute(int num);
    void busToFleet(int num);
    void showBusFleet();
    void showBusRoute();
    list<Bus> getBusFleetList();
    list<Bus> getBusRouteList();
};

#endif // BUSFLEET_H