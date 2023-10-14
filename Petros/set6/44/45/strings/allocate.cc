#include "strings.ih"

string *Strings::allocate(size_t newCap)
{
    string *ret = static_cast<string *>(operator new(newCap * sizeof(string)));
    for (size_t idx = 0; idx != d_size; ++idx)
        new(ret + idx) string(d_str[idx]);
    return ret;
}
