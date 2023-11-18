#include "strings.ih"

string *Strings::enlarge()
{
    string *ret = new string[d_size + 1];       // room for an extra string

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        ret[idx] = d_str[idx];

    return ret;
}
