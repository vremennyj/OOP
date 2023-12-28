#pragma once
#ifndef FACTORY_H
#define FACTORY_H
#include <vector>
#include "AString.h" 

class Factory {
friend class Menu; public:
    Factory() {}
    void AddObject();
    void AddObject(AString* str);
    void DeleteObject();
    std::vector<AString*> getPObjForTests();
private:
    std::vector<AString*> pObj;
};
#endif //FACTORY_H
