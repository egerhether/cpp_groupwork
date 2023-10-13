#include "strings.ih"

Strings::~Strings()
{
    for (size_t idx = d_capacity; idx--; )
        delete d_str[idx];
    delete[] d_str;
    d_size = 0;
    d_capacity = 0;
}