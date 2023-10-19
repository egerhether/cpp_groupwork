#include "strings.ih"

void Strings::reserve(size_t cap)
{
    if (cap <= d_capacity)                      // do nothing
        return;

    string **tmp = new string *[cap];           // allocate cap pointers

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        tmp[idx] = d_str[idx];
    
    delete[] d_str;
    
    d_str = tmp;
    d_capacity = cap;
}
