#include <string>
#include <iostream>
#include "Bus.h"

using namespace std;

Bus::Bus(int busNumber, string FIO, int routeNumber) {
	this->busNumber = busNumber;
	this->FIO= FIO;
	this->routeNumber = routeNumber;
}

Bus::Bus() {};

string Bus::getFIO() const {
	return FIO;
};

int Bus::getBusNumber() const {
	return busNumber;
};

int Bus::getRouteNumber() const {
	return routeNumber;
};

string  Bus::getStatus() {
	return status;
};

void Bus::setStatus(string str) {
	status = str;
};

void Bus::show() const {
	cout << "----------------------\n";
	cout << "---Автобус №" << busNumber << "--- \n";
	cout << "ФИО: " << FIO << endl;
	cout << "Номер автобуса: " << busNumber << endl;
	cout << "Номер маршрута:" << routeNumber << endl;
	if (status == "inFleet" || status == "На маршруте") {
		cout << "Статус: В парке" << endl;
	} else if (status == "onRoute" || status == "В парке") {
		cout << "Статус: на маршруте" << endl;
	} else {
		cout << "Статус: неопределён" << endl;
	}
	cout << "----------------------\n";
};
