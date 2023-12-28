#include <iostream>
#include "OctString.h"
using namespace std;

bool IsOctStrVal(string _str) {
    for (int i = 0; i < _str.size(); ++i)
        if (-1 == alph.find_first_of(_str[i]))
            return false;
    return true;
}

OctString::OctString(string _name, string _val) : name(_name) {
    if (IsOctStrVal(_val))  val = _val;
}

OctString* OctString::operator+(AString& other) {
    cout << "+ for octa\n";
    int carry = 0;
    string result;
    string octalNumber1 = this->GetVal();
    string octalNumber2 = other.GetVal();
    int length = max(octalNumber1.length(), octalNumber2.length());
    for (int i = 1; i <= length; i++) {
        int digit1 = (i <= octalNumber1.length()) ? octalNumber1[octalNumber1.length() - i] - '0' : 0;
        int digit2 = (i <= octalNumber2.length()) ? octalNumber2[octalNumber2.length() - i] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 8;
        result = to_string(sum % 8) + result;
    }
    if (carry > 0) {
        result = to_string(carry) + result;
    }
    OctString* result2 = new OctString("concat_result", result);


    return result2;
}