#pragma once
#include <string>
#include <iostream>
#include "AString.h"

using namespace std;

class SymbString : public AString {
public:
    SymbString(string _name) : name(_name) {}
    SymbString(string _name, string _val) : name(_name), val(_val) {}
    const string& GetName() const { return name; }
    const string& GetVal() const { return val; }
    int GetSize() const { return val.size(); }

    SymbString* operator+(AString& other) override {
        cout << "+ for symba\n";
        SymbString* result = new SymbString("concat_result", val + other.GetVal());
        return result;
    }
private:
    string name, val;
};