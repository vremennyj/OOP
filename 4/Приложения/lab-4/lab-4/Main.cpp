// ФИ: Дякин Владимир 
// Группа: Пин-б-о-22-1 (2 курс)
// Вариант: 4
// Задание:
//1. Определить класс с именем AEROFLOT, содержащий следующие
//поля : название пункта назначения рейса; номер рейса; тип самолета.
//Определить методы доступа к этим полям и перегруженные операции
//извлечения и вставки для объектов типа AEROFLOT.
//2. Написать программу, выполняющую следующие действия :
//− ввод с клавиатуры данных в массив, состоящий из семи объектов типа
//AEROFLOT; записи должны быть упорядочены по возрастанию номера
//рейса;
//− вывод на экран номеров рейсов и типов самолетов, вылетающих в пункт
//назначения, название которого совпало с названием, введенным с
//клавиатуры; если таких рейсов нет, выдать на дисплей соответствующее
//сообщение.

#include "AEROFLOT.h" 
#include "Test.h" 
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    test();
    const int size = 8;
    AEROFLOT flights[size];

    // Входные данные 
    int i = 0;
    while (i < size) {
        cout << "Рейс №" << i + 1 << "\n";
        cin >> flights[i];

        // Увеличивайте счетчик только в том случае, если ввод успешен. 
        if (cin) {
            ++i;
        }
        else {
            // Очистите флаг ошибки и отбросьте неверный ввод. 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Неверный Ввод. Пожалуйста, попробуйте еще раз.\n";
        }
    }

    //// Сортировка по номеру рейса
    sort(flights, flights + size, compareAEROFLOTByNum);

    // Вывод отсортированных данных  
    cout << "\nСортированные данные:\n";
    for (int i = 0; i < size; ++i) {
        cout << flights[i];
    }

    // Поиск по знаку зодиака 
    string searchDestination;
    cout << "\nВведите пункт назначения рейса для поиска: ";
    cin >> searchDestination;

    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (flights[i].getDestination() == searchDestination) {
            found = true;
            cout << "\nНайденные рейсы:\n";
            cout << flights[i];
        }
    }

    if (!found) {
        cout << "Не найдено рейсов в пункт " << searchDestination << "\n";
    }

    return 0;
}


