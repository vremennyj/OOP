#pragma once
#ifndef ASTRING_H
#define ASTRING_H 
#include <string> 

class AString {
public:
    virtual ~AString() {}
    virtual const std::string& GetName() const = 0;
    virtual const std::string& GetVal() const = 0;
    virtual int GetSize() const = 0;
    virtual AString* operator+(AString& other) = 0;
};
#endif //ASTRING_H
