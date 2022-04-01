#ifndef REVERSE_H
#define REVERSE_H

#include <string>

using namespace std;

class Reverse {
public:
    int reverseDigit(int value) {
        if (value >= 10) {
            int digit = value % 10;
            value = value / 10;
            string result = std::to_string(digit) + std::to_string(reverseDigit(value));
            return stoi(result);
        } else {
            return value;
        }
    }

    string reverseString(string letters) {
        if (letters.length() > 0) {
            string s = letters.substr(0, 1);
            string r = letters.substr(1);
            return reverseString(r) + s;
        } else {
            return "";
        }
    }

};


#endif //REVERSE_H
