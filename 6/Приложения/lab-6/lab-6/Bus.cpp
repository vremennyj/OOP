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
	cout << "---������� �" << busNumber << "--- \n";
	cout << "���: " << FIO << endl;
	cout << "����� ��������: " << busNumber << endl;
	cout << "����� ��������:" << routeNumber << endl;
	if (status == "inFleet" || status == "�� ��������") {
		cout << "������: � �����" << endl;
	} else if (status == "onRoute" || status == "� �����") {
		cout << "������: �� ��������" << endl;
	} else {
		cout << "������: ����������" << endl;
	}
	cout << "----------------------\n";
};
