#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize < d_size)
    {
        for (size_t i = newSize; i < d_size; ++i)
            delete d_str[i];
    } else if (newSize > d_size)
    {
        for (size_t i = d_size; i < newSize; ++i)
            d_str[i] = new string;
    }
    d_size = newSize;
}
