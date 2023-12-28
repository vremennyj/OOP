// ФИ: Дякин Владимир 
// Группа: Пин-б-о-22-1 (2 курс)
// Вариант: 4
// 
// Задание:
// Написать программу, демонстрирующую работу с объектами двух типов,
// SymbString и OctString, для чего создать систему соответствующих классов.
// Каждый объект должен иметь идентификатор
// (в виде произвольной строки символов) и одно 
// или несколько полей для хранения состояния(текущего значения) объекта.
// Клиенту(функции main) должны быть доступны следующие основные операции(методы) :
// создать объект, удалить объект, показать значение объекта
// и прочие дополнительные операции(зависят от варианта).
// Операции по созданию и удалению объектов инкапсулировать в классе Factory.
// Предусмотреть меню, позволяющее продемонстрировать заданные операции.
// При необходимости в разрабатываемые классы добавляются дополнительные методы
// (например, конструктор копирования, операция присваивания и т.п.)
//  для обеспечения надлежащего функционирования этих классов.

#include <iostream>
#include <iostream>
#include "SymbString.h"
#include "Factory.h"
#include "Menu.h"
#include "TestSymbString.h"
#include "TestOctString.h"
#include "TestFactory.h"

using namespace std;

int main() {
    system("chcp 1251>nul");
    //тесты
    //testSymbString();
    //testOct();
    //test();
    //
    Factory factory;
    Menu    menu = Menu();
    JobMode jobMode;
    while ((jobMode = menu.SelectJob()) != Exit) {
        switch (jobMode) {
        case AddObj: factory.AddObject();     break;
        case DelObj: factory.DeleteObject();  break;
        case WorkWithObj:
            cout << "тут реализуем задачку";
            AString* obj1 = menu.SelectObject(factory);
            AString* obj2 = menu.SelectObject(factory);
            auto obj3 = *obj1 + *obj2;
            factory.AddObject(obj3);
            cout << obj3->GetVal();
            break;
        }
        cin.get();
    }
    cout << "Bye!\n";
}