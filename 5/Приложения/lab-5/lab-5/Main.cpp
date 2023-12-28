// ФИ: Дякин Владимир 
// Группа: Пин-б-о-22-1 (2 курс)
// Вариант: 4
// Задание: 
// Написать программу, которая считывает английский текст из файла 
// и выводит на экран слова, начинающиеся с гласных букв.

#include <iostream>
#include "Scanner.h"
#include "Test.h"

using namespace std;

int main()
{
    system("chcp 1251>nul");
    test();
    Scanner scanner;
    scanner.readFromFile("input.txt");

    cout << "Слова начинающиеся с гласных:\n";
    scanner.printVowels();

}

