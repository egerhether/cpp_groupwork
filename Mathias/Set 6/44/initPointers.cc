#include "strings.ih"

string **Strings::initPointers(size_t newCapacity) {
    string **newStr = new string *[newCapacity]();
    for (size_t i = 0; i < d_size; ++i) {
        newStr[i] = new string(*d_str[i]);
    } 
    return newStr;
}
