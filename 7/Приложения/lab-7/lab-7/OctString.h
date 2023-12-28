#pragma once
#include <string>
#include "AString.h"
using namespace std;
const string alph = "01234567";
bool IsOctStrVal(string);
class OctString : public AString {
public:
    OctString(string _name) : name(_name) {}
    OctString(string, string);
    const string& GetName() const { return name; }
    const string& GetVal() const { return val; }
    int GetSize() const { return val.size(); }

    OctString* operator+(AString& other) override;
private:
    string name, val;
};
