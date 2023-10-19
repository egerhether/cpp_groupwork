#include "strings.ih"

void Strings::resize(size_t size, string str)
{
    if (size < d_size)
    {
        for (size_t idx = d_size; idx != size; --idx)
            d_str[idx].~string();
    } 
    else if (size > d_size)
    {
        for (size_t idx = d_size; idx != size; ++idx)
            new (&d_str[idx]) string(str);
    }
    d_size = size;
}