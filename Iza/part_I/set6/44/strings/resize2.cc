#include "strings.ih"

void Strings::resize(size_t size)
{
    if (size < d_size)
    {
        for (size_t idx = size; idx != d_size; ++idx)
            d_str[idx] = 0;
    } 
    else if (size > d_size)
    {
        for (size_t idx = d_size; idx != size; ++idx)
            d_str[idx] = new string();
    }
    d_size = size;
}