#include "strings.ih"

// ES: MR
void Strings::resize(size_t size, string str)
{
    if (int(size) < 0)
        return;

    if (size < d_size)
    {
        for (size_t idx = size; idx != d_size; ++idx)
            delete d_str[idx];
    }
    else if (size > d_size)
    {
        for (size_t idx = d_size; idx != size; ++idx)
            d_str[idx] = new string(str);
    }
    d_size = size;
}
