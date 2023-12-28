#include <cassert>
#include <iostream>
#include "Scanner.h"
#include "Test.h"
#include "LogDuration.h"

void test() {
    LOG_DURATION("Scanner");
    Scanner testScanner;
    testScanner.readFromFile("input.txt");
    assert(!testScanner.getWords().empty());
    assert(testScanner.isVowel("Owl"));
    assert(!testScanner.isVowel("Vowel"));

    std::cout << "Тесты пройдены успешно\n";
}