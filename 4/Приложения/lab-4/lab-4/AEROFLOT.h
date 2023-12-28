// AEROFLOT.h 
#ifndef AEROFLOT_H 
#define AEROFLOT_H 

#include <iostream> 
#include <string> 

using namespace std;

class AEROFLOT {
private:
    string destination;
    int flightNumber;
    string aircraftType;
public:
    // ����������� 
    AEROFLOT();
    AEROFLOT(string destination, int flightNumber, string aircraftType);

    // ������ ������� 
    string getDestination() const;
    int getFlightNumber() const;
    string getAircraftType() const;

    // ������������� ��������� 
    friend istream& operator>>(istream& inputStream, AEROFLOT& flight);
    friend ostream& operator<<(ostream& outputStream, const AEROFLOT& flight);
};

bool compareAEROFLOTByNum(const AEROFLOT& a, const AEROFLOT& b);


#endif // AEROFLOT_H