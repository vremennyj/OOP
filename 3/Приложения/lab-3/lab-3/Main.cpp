// ФИ: Дякин Владимир 
// Группа: Пин-б-о-22-1 (2 курс)
// Вариант: 4
// Задание:
// Требуется создать шаблон некоторого целевого класса Stack. В каждом
// варианте уточняются требования к реализации — указанием на применение
// некоторого серверного класса Vect.Это означает, что объект класса Vect
// 
// используется как элемент класса Stack.В качестве серверного класса может быть
// указан либо класс, созданный программистом в рамках того же задания, либо
// класс стандартной библиотеки.


#include <iostream>
#include "Vect.h"
#include "Stack.h"
#include "Test.h"

using namespace std;

int main() {
    system("chcp 1251>nul");

    //Тест работоспособности классов
    testIntegerStack();
    testDoubleStack();
    testStringStack();

    // Использование шаблона Stack для целых чисел
    cout << "Вы хотите проверить работоспособность класса 1(да) 0(нет): \n";
    int answer;
    cin >> answer;
    if (answer == 1) {
        cout << "Введите количество элементов в int стеке: \n";
        int inputQuantity1;
        cin >> inputQuantity1;
        Stack<int> intStack(inputQuantity1);
        cout << "Введите целые числа для добавления их в стек (введите -1 чтобы закончить): \n";
        int inputInt;
        while (true) {
            cin >> inputInt;
            if (inputInt == -1) break;
            intStack.push(inputInt);
        }
        intStack.show();

        // Использование шаблона Stack для чисел с плавающей точкой
        int inputQuantity2;
        cout << "Введите количество элементов в double стеке: \n";
        cin >> inputQuantity2;
        Stack<double> doubleStack(inputQuantity2);
        double inputDouble;
        cout << "Введите числа с плавающей точкой для добавления их в стек (введите -1 чтобы закончить):\n";
        while (true) {
            cin >> inputDouble;
            if (inputDouble == -1) break;
            doubleStack.push(inputDouble);
        }
        doubleStack.show();

        // Использование шаблона Stack для строк
        cout << "Введите количество элементов в string стеке: \n";
        int inputQuantity3;
        cin >> inputQuantity3;

        Stack<std::string> stringStack(inputQuantity3);
        string inputString;
        cout << "Введите строки для добавления их в стек (введите \"-1\" чтобы закончить):\n";
        while (true) {
            cin >> inputString;
            if (inputString == "-1") break;
            stringStack.push(inputString);
        }
        stringStack.show();
    }
    
    else {
        /// Генерация исключения 
        try {
            Stack<int> testStack1(0);
        }
        catch (int err0) {
            if (err0 == 0) {
                cout << "err0: Вы не можете создать пустой стек\n";
            }
        };

        try {
            Stack<int> testStack2(3);
            testStack2.push(1);
            testStack2.push(1);
            testStack2.push(1);
            testStack2.push(1);
        }
        catch (int err1) {
            if (err1 == 1) {
                cout << "err1: Максимальная длина стека была достигнута\n";
            }
        };

        try {
            Stack<int> testStack3(1);
            testStack3.push(1);
            testStack3.pop();
            testStack3.pop();
            testStack3.pop();

        }
        catch (int err3) {
            if (err3 == 3) {
                cout << "err3: Стек уже пуст\n";
            }
        };
    }
    
    return 777;
}

