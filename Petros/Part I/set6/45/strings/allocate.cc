#include "strings.ih"

string *Strings::allocate(size_t newCap)
{
    string *ret = static_cast<string *>(operator new(newCap * sizeof(string)));
    
    size_t newSize = (d_size < newCap ? d_size : newCap);

    for (size_t idx = 0; idx != newSize; ++idx)
        new(ret + idx) string(d_str[idx]);

    d_size = newSize;

    return ret;
}
