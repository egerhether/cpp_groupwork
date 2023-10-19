#include "strings.ih"

void Strings::resize(size_t size)
{
    if (size < d_size)
    {
        for (size_t idx = size; idx != d_size; ++idx)
            d_str[idx].~string();
    } 
    else if (size > d_size)
    {
        for (size_t idx = d_size; idx != size; ++idx)
            new (&d_str[idx]) string();
    }
    d_size = size;
}