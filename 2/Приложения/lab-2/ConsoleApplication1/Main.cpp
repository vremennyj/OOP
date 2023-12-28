// ФИ: Дякин Владимир 
// Группа: Пин-б-о-22-1 (2 курс)
// Вариант: 4
// Задание: Построить описание класса, содержащего информацию о почтовом
// адресе организации.Предусмотреть возможность раздельного изменения
// составных частей адреса, создания и уничтожения объектов этого класса.
// Написать программу, демонстрирующую работу с этим классом.
// Программа должна содержать меню, позволяющее осуществить проверку всех
// методов класса.

#include <iostream>
#include <clocale>
#include "Address.h"
#include "Test.h"

int main()
{
    system("chcp 1251>nul");
    test();

    int choice;
    OrganizationAddress ncfu("улица", "Пушкина", "", "1", "", "", "город", "Ставрополь", "Ставропольский край", "Россия", "355017");

    do {
            cout << "\n-------Menu-------\n";
            cout << "1. Показать текущий аддрес\n";
            cout << "2. Изменить страну\n";
            cout << "3. Изменить город\n";
            cout << "4. Изменить улицу\n";
            cout << "5. Изменить квартиру\n";
            cout << "6. Изменить здание\n";
            cout << "7. Изменить Почтовый индекс\n";
            cout << "8. Выход\n";
            cout << "------------------\n";
            cout << "Введите ваш выбор >>>";
            cin >> choice;
            cout << "\n";

            switch (choice) {
            case 1: {
                ncfu.displayAddress();
                break;
            }

            case 2: {
                string new_country;
                cout << "Введите новую страну (Россия): ";
                cin.ignore();
                getline(cin, new_country);
                
                ncfu.setValue(ncfu.getCountry(), new_country);
                break;
            }

            case 3: {
                string new_type_city;
                cout << "Введите новый тип местности (город село и т.п.): ";
                cin.ignore();
                getline(cin, new_type_city);
                
                ncfu.setValue(ncfu.getTypeOfCity(), new_type_city);

                string new_name_city;
                cout << "Введите новое название местности (Москва): ";
                cin >> new_name_city;

                ncfu.setValue(ncfu.getNameOfCity(), new_name_city);
                break;
            }

            case 4: {
                string new_type_street;
                cout << "Введите новый тип улицы (переулок, проспект и т.п.): ";
                cin.ignore();
                getline(cin, new_type_street);
                
                ncfu.setValue(ncfu.getTypeOfStreet(), new_type_street);

                string new_name_street;
                cout << "Введите новое название улицы: ";
                cin.ignore();
                getline(cin, new_name_street);
                
                ncfu.setValue(ncfu.getNameOfStreet(), new_name_street);
                break;
            }

            case 5: {
                string new_type_building;
                cout << "Введите новый тип здания (домовладение, возможна пустая строка): ";
                cin.ignore();
                getline(cin, new_type_building);
               
                ncfu.setValue(ncfu.getTypeOfBuilding(), new_type_building);

                string new_number_building;
                cout << "Введите новый номер здания (1, 1A): ";
                cin.ignore();
                getline(cin, new_number_building);

                ncfu.setValue(ncfu.getNumberOfBuilding(), new_number_building);
                break;
            }

            case 6: {
                string new_type_apartment;
                cout << "Введите новый тип квартиры (квартира, блок и т.д.): ";
                cin.ignore();
                getline(cin, new_type_apartment);
                
                ncfu.setValue(ncfu.getTypeOfApartment(), new_type_apartment);

                string new_number_apartment;
                cout << "Введите новый квартиры квартиры: ";
                cin.ignore();
                getline(cin, new_number_apartment);
                
                ncfu.setValue(ncfu.getNumberOfApartment(), new_number_apartment);
                break;
            }

            case 7: {
                string new_postal;
                cout << "Введите новый почтовый индекс: ";
                cin.ignore();
                getline(cin, new_postal);
                
                ncfu.setValue(ncfu.getPostalCode(), new_postal);
                break;
            }

            case 8:
                cout << "Завершение работы...";
                break;

            default:
                cout << "Неверный выбор!";
            }
        } while (choice != 8);

    return 0;
    }


