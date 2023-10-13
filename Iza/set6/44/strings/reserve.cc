#include "strings.ih"

void Strings::reserve(size_t cap)
{
    string **ret = rawPointers(cap);      // allocate cap pointers

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        ret[idx] = new string(*d_str[idx]);
    
    if (d_str)
        destroy();
    
    d_str = ret;
}
