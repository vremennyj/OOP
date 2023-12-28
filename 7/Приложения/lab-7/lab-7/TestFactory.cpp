#include "Factory.h"
#include "SymbString.h"
#include "OctString.h"
#include <cassert>
#include "LogDuration.h"

void testAddObject() {
    Factory factory;
    SymbString* s1 = new SymbString("s1", "abc");
    factory.AddObject(s1);
    assert(factory.getPObjForTests().size() == 1);
    assert(factory.getPObjForTests()[0] == s1);

    OctString* o1 = new OctString("o1", "123");
    factory.AddObject(o1);
    assert(factory.getPObjForTests().size() == 2);
    assert(factory.getPObjForTests()[1] == o1);
}

void testDeleteObject() {
    Factory factory;
    SymbString* s1 = new SymbString("s1", "abc");
    OctString* o1 = new OctString("o1", "123");
    factory.AddObject(s1);
    factory.AddObject(o1);

    factory.DeleteObject();
    assert(factory.getPObjForTests().size() == 1);
    assert(factory.getPObjForTests()[0] == s1);

    factory.DeleteObject();
    assert(factory.getPObjForTests().empty());
}

void test() {
    LOG_DURATION("Factory");
    testAddObject();
    testDeleteObject();
    std::cout << "All tests passed successfully!" << std::endl;
}
