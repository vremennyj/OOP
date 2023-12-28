#include "AEROFLOT.h"

// �����������
AEROFLOT::AEROFLOT() {}

AEROFLOT::AEROFLOT(string destination, int flightNumber, string aircraftType) {
    this->destination = destination;
    this->flightNumber = flightNumber;
    this->aircraftType = aircraftType;
}

// ������ �������
string AEROFLOT::getDestination() const {
    return destination;
}

int AEROFLOT::getFlightNumber() const {
    return flightNumber;
}

string AEROFLOT::getAircraftType() const {
    return aircraftType;
}

// ������������� ���������
istream& operator>>(istream& inputStream, AEROFLOT& flight) {
    cout << "������� �������� ������ ����������: ";
    inputStream >> flight.destination;

    cout << "������� ����� ����� (8 ����): ";
    inputStream >> flight.flightNumber;

    cout << "������� ��� ��������: ";
    inputStream >> flight.aircraftType;

    return inputStream;
}

ostream& operator<<(ostream& outputStream, const AEROFLOT& flight) {
    outputStream << "�������� ������ ����������: " << flight.destination << "\n";
    outputStream << "����� �����: " << flight.flightNumber << "\n";
    outputStream << "��� ��������: " << flight.aircraftType << "\n";
    outputStream << "\n";

    return outputStream;
}

bool compareAEROFLOTByNum(const AEROFLOT& a, const AEROFLOT& b) {
    return a.getFlightNumber() < b.getFlightNumber();
}