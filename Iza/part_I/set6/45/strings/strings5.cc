#include "strings.ih"

Strings::~Strings()
{
    for (size_t idx = d_size; idx--; )
        d_str[idx].~string();

    operator delete (d_str);
    d_size = 0;
    d_capacity = 0;
}