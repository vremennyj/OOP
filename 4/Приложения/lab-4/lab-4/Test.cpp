#include <cassert>
#include <string.h>
#include "AEROFLOT.h"
#include "Test.h"
#include "LogDuration.h"

using namespace std;

void test() {
    LOG_DURATION("bus");
    //Тест конструктора
    AEROFLOT flight("Ейск", 10101022, "Боинг");

    //Тест методов доступа
    assert(flight.getDestination() == "Ейск");
    assert(flight.getFlightNumber() == 10101022);
    assert(flight.getAircraftType() == "Боинг");

    cout << "Все тесты пройдены!\n";
}
