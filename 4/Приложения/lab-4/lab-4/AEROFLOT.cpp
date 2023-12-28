#include "AEROFLOT.h"

// Констурктор
AEROFLOT::AEROFLOT() {}

AEROFLOT::AEROFLOT(string destination, int flightNumber, string aircraftType) {
    this->destination = destination;
    this->flightNumber = flightNumber;
    this->aircraftType = aircraftType;
}

// Методы доступа
string AEROFLOT::getDestination() const {
    return destination;
}

int AEROFLOT::getFlightNumber() const {
    return flightNumber;
}

string AEROFLOT::getAircraftType() const {
    return aircraftType;
}

// Перегруженные операторы
istream& operator>>(istream& inputStream, AEROFLOT& flight) {
    cout << "Введите название пункта назначения: ";
    inputStream >> flight.destination;

    cout << "Введите номер рейса (8 цифр): ";
    inputStream >> flight.flightNumber;

    cout << "Введите тип самолета: ";
    inputStream >> flight.aircraftType;

    return inputStream;
}

ostream& operator<<(ostream& outputStream, const AEROFLOT& flight) {
    outputStream << "Название пункта назначения: " << flight.destination << "\n";
    outputStream << "Номер рейса: " << flight.flightNumber << "\n";
    outputStream << "Тип самолета: " << flight.aircraftType << "\n";
    outputStream << "\n";

    return outputStream;
}

bool compareAEROFLOTByNum(const AEROFLOT& a, const AEROFLOT& b) {
    return a.getFlightNumber() < b.getFlightNumber();
}