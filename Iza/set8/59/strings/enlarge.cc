#include "strings.ih"

string *Strings::enlarge()
{
    string *ret = new string[d_size + 1];       // room for an extra string

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
    {
        if (d_copy)
            ret[idx] = d_str[idx];
        else
            ret[idx] = move(d_str[idx]);
    }

    return ret;
}
