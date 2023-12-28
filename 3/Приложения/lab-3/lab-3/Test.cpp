#include <cassert>
#include <string>
#include <iostream>
#include "Test.h"
#include "Stack.h"
#include "LogDuration.h"

void testIntegerStack() {
    LOG_DURATION("IntegerStack");
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    assert(intStack.peek() == 20);
    assert(intStack.pop() == 20);
    assert(intStack.peek() == 10);
    assert(intStack.peek() != 30);
    intStack.pop();
    assert(intStack.getMaxSize() == 5);
    assert(intStack.isEmpty());
    assert(intStack.size() == 0);
    std::cout << "Тест 1 успешно завершён\n";

}

void testDoubleStack() {
    LOG_DURATION("DoubleStack");
    Stack<double> doubleStack(5);
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    assert(doubleStack.peek() == 2.2);
    assert(doubleStack.pop() == 2.2);
    assert(doubleStack.peek() == 1.1);
    assert(doubleStack.peek() != 3.3);
    std::cout << "Тест 2.0 успешно завершён\n";
}

void testStringStack() {
    LOG_DURATION("StringStack");
    Stack<std::string> stringStack(5);
    stringStack.push("0");
    stringStack.push("1");
    stringStack.push("2");
    assert(stringStack.peek() == "2");
    assert(stringStack.pop() == "2");
    assert(stringStack.peek() == "1");
    assert(stringStack.peek() != "3");
    std::cout << "Тест '3' успешно завершён\n";
}

