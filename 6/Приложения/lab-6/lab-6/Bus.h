#ifndef BUS_H
#define BUS_H

#include <string>
#include <iostream>
using namespace std;

class Bus {
private:
    int busNumber;
    string FIO;
    int routeNumber;
    string status = "inFleet";

public:
    Bus(int busNumber, string FIO, int routeNumber);
    Bus();

    string getFIO() const;
    int getBusNumber() const;
    int getRouteNumber() const;
    string  getStatus();
    void setStatus(string str);
    void show() const;
};

#endif // BUS_H