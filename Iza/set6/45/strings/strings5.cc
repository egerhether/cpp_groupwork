#include "strings.ih"

Strings::~Strings()
{
    for (size_t idx = d_capacity; idx--; )
        d_str[idx].~string();
    delete[] d_str;
    d_size = 0;
    d_capacity = 0;
}