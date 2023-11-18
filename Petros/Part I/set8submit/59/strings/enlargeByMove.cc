#include "strings.ih"

string *Strings::enlargeByMove(string *str, size_t size)
{
    string *ret = new string[size + 1];       // room for an extra string

    for (size_t idx = 0; idx != size; ++idx)  // move existing strings
        ret[idx] = move(str[idx]);

    return ret;
}