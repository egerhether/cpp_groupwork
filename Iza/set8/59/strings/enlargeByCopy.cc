#include "strings.ih"

string *Strings::enlargeByCopy(string *str, size_t size)
{
    string *ret = new string[size + 1];       // room for an extra string

    for (size_t idx = 0; idx != size; ++idx)  // copy existing strings
        ret[idx] = str[idx];

    return ret;
}