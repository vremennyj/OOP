#include "SymbString.h"
#include "TestSymbString.h"
#include <cassert>
#include <iostream>
#include "LogDuration.h"

void testSymbString() {
    LOG_DURATION("SymbString");
    SymbString s0("name1", "value1");
    assert(s0.GetName() == "name1");
    assert(s0.GetVal() == "value1");
    SymbString s1("name1", "value1");
    SymbString s2("name2", "value2");
    AString* result = s1 + s2;
    SymbString* concatenatedResult = dynamic_cast<SymbString*>(result);
    assert(concatenatedResult != nullptr);
    assert(concatenatedResult->GetName() == "concat_result");
    assert(concatenatedResult->GetVal() == "value1value2");
    std::cout << "SymbString прошёл тесты";
}