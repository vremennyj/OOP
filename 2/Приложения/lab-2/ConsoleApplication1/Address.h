#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <iostream>
using namespace std;

class OrganizationAddress {
private:
    string type_of_street, street,
        type_of_building, building_num,
        type_of_apartment, apartment_num,
        type_of_city, city_name,
        region, country, postal_code;

public:
    OrganizationAddress(string type_of_street, string street,
        string type_of_building, string building_num,
        string type_of_apartment, string apartment_num,
        string type_of_city, string city_name,
        string region, string country, string postal_code);
    OrganizationAddress();
    string* getTypeOfStreet();
    string* getNameOfStreet();
    string* getTypeOfBuilding();
    string* getNumberOfBuilding();
    string* getTypeOfApartment();
    string* getNumberOfApartment();
    string* getTypeOfCity();
    string* getNameOfCity();
    string* getRegion();
    string* getCountry();
    string* getPostalCode();
    void setValue(string* var, string value);
    void menu();
    void displayAddress();
    ~OrganizationAddress();
};

#endif // ADDRESS_H