#include "OctString.h"
#include <cassert>
#include "LogDuration.h"
#include <iostream>

void testConstructor() {
    OctString o1("name1", "123");
    assert(o1.GetName() == "name1");
    assert(o1.GetVal() == "123");
}

void testConcatenation() {
    OctString o1("name1", "123");
    OctString o2("name2", "456");
    AString* result = o1 + o2;
    //assert(result->GetName() == "concat_result");
    //assert(result->GetVal() == "701");
}

void testOct() {
    LOG_DURATION("OctString");
    testConstructor();
    testConcatenation();
    std::cout << "OctString тесты прошёл";
}
