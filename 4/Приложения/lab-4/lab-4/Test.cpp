// Test.cpp
#include <cassert>
#include <string.h>
#include "AEROFLOT.h"
#include "Test.h"
#include "LogDuration.h"

using namespace std;

void test() {
    LOG_DURATION("flight");
    //���� ������������
    AEROFLOT flight("����", 10101022, "�����");

    //���� ������� �������
    assert(flight.getDestination() == "����");
    assert(flight.getFlightNumber() == 10101022);
    assert(flight.getAircraftType() == "�����");

    cout << "��� ����� ��������!\n";
}
