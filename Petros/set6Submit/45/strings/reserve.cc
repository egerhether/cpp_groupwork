#include "strings.ih"

void Strings::reserve(size_t cap)
{
    if (cap < d_capacity) // prevent from losing information when arg < capacity
        return;

    string *tmp = rawMemory(cap);  // allocate cap memory

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        new (&tmp[idx]) string(d_str[idx]);

    if (d_str)
        destroy();

    d_str = tmp;

}
