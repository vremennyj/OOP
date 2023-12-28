#include "Address.h"
#include <string>
#include <iostream>
using namespace std;

OrganizationAddress::OrganizationAddress(string type_of_street, string street,
        string type_of_building, string building_num,
        string type_of_apartment, string apartment_num,
        string type_of_city, string city_name,
        string region, string country, string postal_code) {
        this->type_of_street = type_of_street;
        this->street = street;
        this->type_of_building = type_of_building;
        this->building_num = building_num;
        this->type_of_apartment = type_of_apartment;
        this->apartment_num = apartment_num;
        this->type_of_city = type_of_city;
        this->city_name = city_name;
        this->region = region;
        this->country = country;
        this->postal_code = postal_code;
    }

OrganizationAddress::OrganizationAddress() {
        cout << "Объект был создан" << endl;
    }

string* OrganizationAddress::getTypeOfStreet() {
        return &type_of_street;
    }

string* OrganizationAddress::getNameOfStreet() {
    return &street;
}

string* OrganizationAddress::getTypeOfBuilding() {
    return &type_of_building;
}

string* OrganizationAddress::getNumberOfBuilding() {
    return &building_num;
}

string* OrganizationAddress::getTypeOfApartment() {
    return &type_of_apartment;
}

string* OrganizationAddress::getNumberOfApartment() {
    return &apartment_num;
}

string* OrganizationAddress::getTypeOfCity() {
    return &type_of_city;
}

string* OrganizationAddress::getNameOfCity() {
    return &city_name;
}

string* OrganizationAddress::getRegion() {
    return &region;
}

string* OrganizationAddress::getCountry() {
    return &country;
}

string* OrganizationAddress::getPostalCode() {
        return &postal_code;
    }

void OrganizationAddress::setValue(string* var, string value) {
    *var = value;
}


void OrganizationAddress::displayAddress() {
        cout << "--------Адрес--------\n";
        cout << "Страна: " << country << endl;
        cout << "Регион: " << region << endl;
        cout << "Город: " << type_of_city << " " << city_name << endl;
        cout << "Улица: " << type_of_street << " " << street << " " << type_of_building << " " << building_num << endl;
        cout << "Квартира: " << type_of_apartment << " " << apartment_num << endl;
        cout << "Почтовый индекс: " << postal_code << endl;
        cout << "---------------------\n";
    }



OrganizationAddress::~OrganizationAddress() {
        cout << "\n\ndestructor has been called" << endl;
    }