#pragma once
#include <vector>
#include "AString.h"
#include "Factory.h"

typedef enum { AddObj, DelObj, WorkWithObj, Exit } JobMode;
class Menu {
public:
    Menu();
    JobMode    SelectJob() const;
    AString* SelectObject(const Factory&) const;
    static int SelectItem(int);
};
